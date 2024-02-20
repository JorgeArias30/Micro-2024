
#include <stdint.h>

// PERIPHERAL & BUS BASE ADDRESS

#define PERIPHERAL_BASE_ADDRESS          0x40000000U
#define AHB_BASE_ADDRESS                 (PERIPHERAL_BASE_ADDRESS + 0x00020000U)

// RCC BASE ADDRESS
#define RCC_BASE_ADDRESS                 (AHB_BASE_ADDRESS + 0x00001000U)
#define RCC_IOPENR_ADDRESS               (RCC_BASE_ADDRESS + 0x0000002CU)

//IOPORT BASE ADDRESS
#define IOPORT_ADDRESS                   (PERIPHERAL_BASE_ADDRESS + 0x10000000U)

// GPIO BASE  & SPECIFIC ADDRESS

#define GPIOA_BASE_ADDRESS               (IOPORT_ADDRESS     + 0x00000000U)
#define GPIOA_MODER_REG                  (GPIOA_BASE_ADDRESS + 0x00000000U)
#define GPIOA_ODR_REG                    (GPIOA_BASE_ADDRESS + 0x00000014U)

#define GPIOC_BASE_ADDRESS               (IOPORT_ADDRESS     + 0x000000800U)
#define GPIOC_MODER_REG                  (GPIOC_BASE_ADDRESS + 0x00000000U)
#define GPIOC_ODR_REG                    (GPIOC_BASE_ADDRESS + 0x00000014U)

#define GPIOC_IDR_REG                     (GPIOC_BASE_ADDRESS + 0x00000010U)
void delay_ms(uint16_t n);
#define GPIOC_PUPD_REG                    (GPIOC_BASE_ADDRESS + 0x0000000CU)



int main(void)
{
	uint32_t *ptr_rcc_iopenr   = RCC_IOPENR_ADDRESS;
	uint32_t *ptr_gpioa_moder  = GPIOA_MODER_REG;
	uint32_t *ptr_gpioa_odr    = GPIOA_ODR_REG;

//	uint32_t *ptr_rcc_iopenr   =  RCC_IOPENR_ADDRESS;
	uint32_t *ptr_gpioc_moder  =  GPIOC_MODER_REG;
	uint32_t *ptr_gpioc_odr    =  GPIOC_ODR_REG;
	uint32_t *ptr_gpioc_idr    =  GPIOC_IDR_REG;
	uint32_t *ptr_gpioc_pupd   =  GPIOC_PUPD_REG;

	uint8_t num=1;

	/* dereferencing */

	//enable clocks

	// Enable clock GPIOA
	   *ptr_rcc_iopenr   |= 1<<0;

	// Enable clock GPIOC
		*ptr_rcc_iopenr  |= 1<<2;

	//Setting MODER
		/* For PA8 */
	    *ptr_gpioa_moder &= ~(1<<17);
	//    *ptr_gpioa_odr   |=   1<<5;

	    /* PC12 Button */
	    *ptr_gpioc_moder &= ~(1<<24);
	    *ptr_gpioc_moder &= ~(1<<25);
        *ptr_gpioc_idr   |=   1<<12;


        /* PC3 Button  */
        *ptr_gpioc_moder &= ~(1<<6);
        *ptr_gpioc_moder &= ~(1<<7);
        *ptr_gpioc_idr   |=  1<<3;

        //GPIOC Pull Down
        //PC12
        *ptr_gpioc_pupd |= 1<<24;
        //PC3
        *ptr_gpioc_pupd |= 1<<7;


while (1)
{
 	 if (*ptr_gpioc_idr & (1<<12))
 	                               {

 	 *ptr_gpioa_odr   &=   ~(1<<8);
 	  delay_ms(500);
 	 *ptr_gpioa_odr   |=     1<<8;
      delay_ms(500);
 	                               }
 	else
		{

 	    *ptr_gpioa_odr   |=    1<<8;
 		 delay_ms(200);
 		*ptr_gpioa_odr   &=  ~(1<<8);
 		 delay_ms(200);

		}


 	 if(*ptr_gpioc_idr & (1<<3)) /* event counter */
 	 {
 		printf("%d \n", num++);
 	 }


}
}

void delay_ms(uint16_t n)
	{
		uint16_t i;
		for(; n>0; n--)
			for(i=0; i<140; i++);
	}
