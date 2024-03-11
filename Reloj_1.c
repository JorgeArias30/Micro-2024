#include <stdint.h>



#define AHB_BUS_BASE_ADDRESS        0x40020000U
#define APB1_BUS_BASE_ADDRESS       0x40000000U
#define APB2_BUS_BASE_ADDRESS       0x40010000U
#define IOPORT_BUS_BASE_ADDRESS     0x50000000U

#define GPIOA_BASE_ADDRESS        (IOPORT_BUS_BASE_ADDRESS + 0x00)
#define GPIOB_BASE_ADDRESS        (IOPORT_BUS_BASE_ADDRESS + 0x0400)
#define GPIOC_BASE_ADDRESS        (IOPORT_BUS_BASE_ADDRESS + 0x0800)
#define GPIOD_BASE_ADDRESS        (IOPORT_BUS_BASE_ADDRESS + 0x0C00)
#define GPIOE_BASE_ADDRESS        (IOPORT_BUS_BASE_ADDRESS + 0x1000)
#define GPIOH_BASE_ADDRESS        (IOPORT_BUS_BASE_ADDRESS + 0x1C00)

#define DMA1_BASE_ADDRESS         (AHB_BUS_BASE_ADDRESS + 0x00)
#define RCC_BASE_ADDRESS          (AHB_BUS_BASE_ADDRESS + 0x1000)
#define FLASH_BASE_ADDRESS        (AHB_BUS_BASE_ADDRESS + 0x2000)
#define CRC_BASE_ADDRESS          (AHB_BUS_BASE_ADDRESS + 0x3000)
#define TSC_BASE_ADDRESS          (AHB_BUS_BASE_ADDRESS + 0x4000)
#define RNG_BASE_ADDRESS          (AHB_BUS_BASE_ADDRESS + 0x5000)
#define AES_BASE_ADDRESS          (AHB_BUS_BASE_ADDRESS + 0x6000)

#define TIMER2_BASE_ADDRESS       (APB1_BUS_BASE_ADDRESS + 0x00)
#define TIMER3_BASE_ADDRESS       (APB1_BUS_BASE_ADDRESS + 0x0400)
#define TIMER6_BASE_ADDRESS       (APB1_BUS_BASE_ADDRESS + 0x1000)
#define TIMER7_BASE_ADDRESS       (APB1_BUS_BASE_ADDRESS + 0x1400)
#define LCD_BASE_ADDRESS          (APB1_BUS_BASE_ADDRESS + 0x2400)
#define RTC_BASE_ADDRESS          (APB1_BUS_BASE_ADDRESS + 0x2800)
#define WWDG_BASE_ADDRESS         (APB1_BUS_BASE_ADDRESS + 0x2C00)
#define IWDG_BASE_ADDRESS         (APB1_BUS_BASE_ADDRESS + 0x3000)
#define SPI2_BASE_ADDRESS         (APB1_BUS_BASE_ADDRESS + 0x3800)
#define USART2_BASE_ADDRESS       (APB1_BUS_BASE_ADDRESS + 0x4400)
#define LPUART_BASE_ADDRESS       (APB1_BUS_BASE_ADDRESS + 0x4800)
#define USART4_BASE_ADDRESS       (APB1_BUS_BASE_ADDRESS + 0x4C00)
#define USART5_BASE_ADDRESS       (APB1_BUS_BASE_ADDRESS + 0x5000)
#define I2C1_BASE_ADDRESS         (APB1_BUS_BASE_ADDRESS + 0x5400)
#define I2C2_BASE_ADDRESS         (APB1_BUS_BASE_ADDRESS + 0x5800)
#define USB_FS_BASE_ADDRESS       (APB1_BUS_BASE_ADDRESS + 0x5C00)
#define USB_BASE_ADDRESS          (APB1_BUS_BASE_ADDRESS + 0x6000)
#define CRS_BASE_ADDRESS          (APB1_BUS_BASE_ADDRESS + 0x6C00)
#define PWR_BASE_ADDRESS          (APB1_BUS_BASE_ADDRESS + 0x7000)
#define DAC1_BASE_ADDRESS         (APB1_BUS_BASE_ADDRESS + 0x7400)
#define I2C3_BASE_ADDRESS         (APB1_BUS_BASE_ADDRESS + 0x7800)
#define LPTIM1_BASE_ADDRESS       (APB1_BUS_BASE_ADDRESS + 0x7C00)

#define SYSCFG_COMP_BASE_ADDRESS  (APB2_BUS_BASE_ADDRESS + 0x00)
#define EXTI_BASE_ADDRESS         (APB2_BUS_BASE_ADDRESS + 0x0400)
#define TIM21_BASE_ADDRESS        (APB2_BUS_BASE_ADDRESS + 0x0800)
#define TIM22_BASE_ADDRESS        (APB2_BUS_BASE_ADDRESS + 0x1400)
#define FIREWALL_BASE_ADDRESS     (APB2_BUS_BASE_ADDRESS + 0x1C00)
#define ADC1_BASE_ADDRESS         (APB2_BUS_BASE_ADDRESS + 0x2400)
#define SPI1_BASE_ADDRESS         (APB2_BUS_BASE_ADDRESS + 0x3000)
#define USART1_BASE_ADDRESS       (APB2_BUS_BASE_ADDRESS + 0x3800)
#define DBG_BASE_ADDRESS          (APB2_BUS_BASE_ADDRESS + 0x5800)
#define IOPENR_RCC_CLK_EN         (RCC_BASE_ADDRESS      + 0x2c)

#define GPIOA   ((GPIO_RegDef_t*)GPIOA_BASE_ADDRESS)
#define GPIOB   ((GPIO_RegDef_t*)GPIOB_BASE_ADDRESS)
#define GPIOC   ((GPIO_RegDef_t*)GPIOC_BASE_ADDRESS)
#define RCC     ((RCC_RegDef_t*)RCC_BASE_ADDRESS)



/*       <-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<- Estructuras ->->->->->->->->->->->->->->->->->->->->->->->-     */

typedef struct
{
	uint32_t MODER;
	uint32_t OTYPER;
	uint32_t OSPEEDR;
	uint32_t PUPDR;
	uint32_t IDR;
	uint32_t ODR;
	uint32_t BSRR;
	uint32_t LCKR;
	uint32_t AFR[2];
	uint32_t BRR;
}GPIO_RegDef_t;

typedef struct
{
	    uint32_t CR;
	    uint32_t ICSCR;
		uint32_t CRRCR;
		uint32_t CFGR;
		uint32_t CIER;
		uint32_t CIFR;
		uint32_t CICR;
		uint32_t IOPRSTR;
		uint32_t AHBRSTR;
		uint32_t APB2RSTR;
		uint32_t APB1RSTR;
		uint32_t IOPENR;
		uint32_t AHBENR;
		uint32_t APB2ENR;
		uint32_t APB1ENR;
		uint32_t IOPSMEN;
		uint32_t AHBSMENR;
		uint32_t APB2SMENR;
		uint32_t APB1SMENR;
		uint32_t CCIPR;
		uint32_t CSR;
}RCC_RegDef_t;


struct Time_t{                 // Declaracion de la estructura Tiempo
		uint8_t hour_decimal;
		uint8_t hour_unit;
		uint8_t minute_decimal;
		uint8_t minute_unit;
		uint8_t second_decimal;
		uint8_t second_unit;
	         } watch;


/* Tabla de busqueda de catodo comun
Los segmentos son los siguientes A(PB0) B(PB1) C(PB2) D(PB3) E(PB4) F(PB5) G(PB6) DP(PB7)*/
struct segments_cc_t
{
uint8_t Di0;  /* Muestra el  No. 0 */
uint8_t Di1;  /* Muestra el  No. 1 */
uint8_t Di2;  /* Muestra el  No. 2 */
uint8_t Di3;  /* Muestra el  No. 3 */
uint8_t Di4;  /* Muestra el  No. 4 */
uint8_t Di5;  /* Muestra el  No. 5 */
uint8_t Di6;  /* Muestra el  No. 6 */
uint8_t Di7;  /* Muestra el  No. 7 */
uint8_t Di8;  /* Muestra el  No. 8 */
uint8_t Di9;  /* Muestra el  No. 9 */
uint8_t DiDP; /* Muestra el  Punto */
} Digit;



/*       <-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<- Variables ->->->->->->->->->->->->->->->->->->->->->->->-     */

/* Declarando variables de Tiempo */
	uint8_t hour_decimal   =  0x00; /* Inicializa la variable en 0 para el conteo */
	uint8_t hour_unit      =  0x00; /* Inicializa la variable en 0 para el conteo */
	uint8_t minute_decimal =  0x00; /* Inicializa la variable en 0 para el conteo */
	uint8_t minute_unit    =  0x00; /* Inicializa la variable en 0 para el conteo */
	uint8_t second_decimal =  0x00; /* Inicializa la variable en 0 para el conteo */
	uint8_t second_unit   = 0x00; /* Inicializa la variable en 0 para el conteo */




/* Declarando variables para segmentos en catodo comun */
uint8_t Di0  = 0x3F;  /*  Habilita los segmentos en ODR para formar el No. 0 */
uint8_t Di1  = 0x06;  /*  habilita los segmentos para formar el No. 1 */
uint8_t Di2  = 0x5B;  /*  habilita los segmentos para formar el No. 2 */
uint8_t Di3  = 0x4F;  /*  habilita los segmentos para formar el No. 3 */
uint8_t Di4  = 0x66;  /*  habilita los segmentos para formar el No. 4 */
uint8_t Di5  = 0x6D;  /*  habilita los segmentos para formar el No. 5 */
uint8_t Di6  = 0x7D;  /*  habilita los segmentos para formar el No. 6 */
uint8_t Di7  = 0x07;  /*  habilita los segmentos para formar el No. 7 */
uint8_t Di8  = 0x7F;  /*  habilita los segmentos para formar el No. 8 */
uint8_t Di9  = 0x67;  /*  habilita los segmentos para formar el No. 9 */
uint8_t DiDP = 0x80;  /*  habilita los segmentos para formar el No. . */
/*********************************************************************************************/
uint8_t myfsm = 0x00;
uint8_t myfsmA = 0x00;

/*   BOTONES    */
uint8_t bt1=0x00;


/*       <-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<- Funciones ->->->->->->->->->->->->->->->->->->->->->->->-     */

void delay_ms(uint32_t milliseconds);
void incrementar_bt1();
void increment_time();

//uint8_t menu();
uint8_t Reloj();
uint8_t Alarma();
uint8_t Temporizador();




uint8_t decoder_sec_u (uint8_t second_unit);
uint8_t decoder_sec_d (uint8_t second_decimal);
uint8_t decoder_min_u (uint8_t minute_unit);
uint8_t decoder_min_d (uint8_t minute_decimal);
uint8_t decoder_hour_u(uint8_t hour_unit);
uint8_t decoder_hour_d(uint8_t hour_decimal);


uint8_t A_decoder_sec_u (uint8_t second_unit);
uint8_t A_decoder_sec_d (uint8_t second_decimal);
uint8_t A_decoder_min_u (uint8_t minute_unit);
uint8_t A_decoder_min_d (uint8_t minute_decimal);
uint8_t A_decoder_hour_u(uint8_t hour_unit);
uint8_t A_decoder_hour_d(uint8_t hour_decimal);


/*       <-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<- Main ->->->->->->->->->->->->->->->->->->->->->->->-     */


int main(void)
{
	RCC->IOPENR |= 1<<0; //PORT A
	RCC->IOPENR |= 1<<1; //PORT B
	RCC->IOPENR |= 1<<2; //PORT C

/*   <-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<- Configuracion de GPIO's ->->->->->->->->->->->->->->->->->->->->->->->   */

// 	  Configure as Output
 	GPIOB->MODER &= ~(1<<1);  // Segment A
 	GPIOB->MODER &= ~(1<<3);  // Segment B
 	GPIOB->MODER &= ~(1<<5);  // Segment C
 	GPIOB->MODER &= ~(1<<7);  // Segment D
 	GPIOB->MODER &= ~(1<<9);  // Segment E
 	GPIOB->MODER &= ~(1<<11); // Segment F
 	GPIOB->MODER &= ~(1<<13); // Segment G
 	GPIOB->MODER &= ~(1<<15); // Segment DP

 	GPIOC->MODER &= ~(1<<9);  // Common D0
 	GPIOC->MODER &= ~(1<<11); // Common D1
 	GPIOC->MODER &= ~(1<<13); // Common D2
 	GPIOC->MODER &= ~(1<<15); // Common D3
 	GPIOC->MODER &= ~(1<<17); // Common D4
 	GPIOC->MODER &= ~(1<<19); // Common D5

 	GPIOA->MODER &= ~(1<<11); // Led PA5

 //	GPIOA->ODR &= ~(1<<5)
 /* <-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<-<- Declarando Structs dentro del main ->->->->->->->->->->->->->->->->->->->->->->->-   */
 	struct Time_t         watch;
 	struct segments_cc_t  Digit;






// 	uint8_t menu();
 	uint8_t Reloj();




 }

void delay_ms(uint32_t milliseconds) {
 volatile uint32_t i;
 for (i = 0; i < milliseconds * 1000; i++) {// Consumir ciclos de reloj
 }
 }

void incrementar_bt1() {           // Boton 1 es para cambiar de estado entre las opciones de menu
 //bt1++;                            // Incrementar bt1 en 1
  if (bt1 <= 2) {
  bt1 ++;                        // Reiniciar bt1 si supera el valor mÃ¡ximo
  } }


uint8_t menu(){
                       // Bucle infinito
                      // AquÃ­ irÃ­a el cÃ³digo para detectar la pulsaciÃ³n del botÃ³n bt1
                     // Supongamos que se detecta la pulsaciÃ³n y se llama a incrementar_bt1()
incrementar_bt1();
bt1++;
    switch(bt1)
    {
        case 0:
           Reloj();
            break;
        case 1:
            Alarma();
            break;
        case 3:
            return 0;
            break;
        default:
            break;
}

}

uint8_t Reloj(){
 		switch (myfsm)
 		{
 		case 0: /* Enable D6  */
 		{
 			myfsm++;
 			GPIOB->BSRR  |=  0xFFFF0000;      // Limpiar los Segmentos de Display
 			GPIOC->BSRR  |=  0x3F0;     // Limpiar los comunes de los Display
 			GPIOC->BSRR  |=  0x01<<9;       // Enable Common Display 6
 			GPIOB->ODR   |=  decoder_sec_u(watch.second_unit);      // Enable Digito

 		break;
 		}
 		case 1: /* Enable D5  */
 		{
 			myfsm++;
 			GPIOB->BSRR  |=  0xFFFF0000;           // Clean Display
 			GPIOC->BSRR  |= 0x3F0;     // Limpiar los comunes de los Display
 			GPIOC->BSRR  |= 0x01<<8;        // Enable Common Display 6
 			GPIOB->ODR   |= decoder_sec_d(watch.second_decimal);      // Ingresar el decoder para segundos decimal

 		break;
 		}
 		case 2: /* Enable D4  */
 		{
 			myfsm++;
 			GPIOB->BSRR   |= 0xFFFF0000;         // Clean Display
 			GPIOC->BSRR   |= 0x3F0;     // Limpiar los comunes de los Display
 			GPIOC->BSRR   |= 0x01<<7;
 			GPIOB->ODR    |= decoder_min_u(watch.minute_unit);

 		break;
 		}
 		case 3: /* Enable D3  */
 		{
 			myfsm++;
 			GPIOB->BSRR  |= 0xFFFF0000;          // Clean Display
 			GPIOC->BSRR  |= 0x3F0;     // Limpiar los comunes de los Display
 			GPIOC->BSRR  |= 0x01<<6;
 			GPIOB->ODR   |= decoder_min_d(watch.minute_decimal);

 		break;
 		}
 		case 4: /* Enable D2  */
 		{
 		 	myfsm++;
 		 	GPIOB->BSRR  |= 0xFFFF0000;          // Clean Display
 			GPIOC->BSRR  |= 0x3F0;    // Limpiar los comunes de los Display
 		 	GPIOC->BSRR  |= 0x01<<5;
 		 	GPIOB->ODR   |= decoder_h_u(watch.hour_unit);

 		break;
 		}
 		case 5: /* Enable D1  */
 		{
 		 	myfsm=0;
 		 	GPIOB->BSRR  |= 0xFFFF0000;          // Clean Display
 			GPIOC->BSRR  |= 0x3F0;     // Limpiar los comunes de los Display
 		 	GPIOC->BSRR  |= 0x01<<4;
 		 	GPIOB->ODR   |= decoder_h_d(watch.hour_decimal);

 		break;
 		}
 		default:
 		{
 			myfsm=0;
 			delay_ms(100000);
 			break;
 		}

 	}//Fin switch(myfsm)
 		delay_ms(10000);
  }

void increment_time() {
    //watch.second_unit++;
    if (watch.second_unit == 10) {
    	watch.second_unit ++;
    	watch.second_decimal++;
        if (watch.second_decimal == 6) {
        	watch.second_decimal = 0;
        	watch.minute_unit++;
            if (watch.minute_unit == 10) {
            	watch.minute_unit = 0;
            	watch.minute_decimal++;
                if (watch.minute_decimal == 6) {
                	watch.minute_decimal = 0;
                	watch.hour_unit++;
                    if (watch.hour_unit == 10) {
                    	watch.hour_unit = 0;
                    	watch.hour_decimal++;
                        if (watch.hour_decimal == 13) {
                        	watch.hour_decimal = 0;
                            // AquÃ­ podrÃ­as hacer algo si deseas reiniciar el contador de horas
                        }
                    }
                }
            }
        }

    watch.second_decimal++;
    }
}

uint8_t decoder_sec_u (uint8_t second_unit){

	switch(second_unit){
		case 0:
			{
			return(Digit.Di0); /* devuelve el encendido del digito en el display */
			}
		case 1:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 2:
			{
			return(Digit.Di2); /* devuelve el encendido del digito en el display */
			}
		case 3:
			{
			return(Digit.Di3); /* devuelve el encendido del digito en el display */
			}
		case 4:
			{
			return(Digit.Di4); /* devuelve el encendido del digito en el display */
			}
		case 5:
			{
			return(Digit.Di5); /* devuelve el encendido del digito en el display */
			}
		case 6:
			{
			return(Digit.Di6); /* devuelve el encendido del digito en el display */
			}
		case 7:
			{
			return(Digit.Di7); /* devuelve el encendido del digito en el display */
			}
		case 8:
			{
			return(Digit.Di8); /* devuelve el encendido del digito en el display */
			}
		case 9:
			{
			return(Digit.Di9); /* devuelve el encendido del digito en el display */
			}
		default:
		   {
			return 0;
			break;
		   }
}delay_ms(1);
}

uint8_t decoder_sec_d (uint8_t second_decimal){

	switch(second_decimal){
		case 0:
			{
			return(Digit.Di0); /* devuelve el encendido del digito en el display */
			}
		case 1:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 2:
			{
			return(Digit.Di2); /* devuelve el encendido del digito en el display */
			}
		case 3:
			{
			return(Digit.Di3); /* devuelve el encendido del digito en el display */
			}
		case 4:
			{
			return(Digit.Di4); /* devuelve el encendido del digito en el display */
			}
		case 5:
			{
			return(Digit.Di5); /* devuelve el encendido del digito en el display */
			}
		case 6:
			{
			return 0;
			break; /* devuelve el encendido del digito en el display */
			}

		default:
		   {
			return 0;
			break;
		   }
} delay_ms(10);
}

uint8_t decoder_min_u (uint8_t minute_unit){

	switch(minute_unit){
		case 0:
			{
			return(Digit.Di0); /* devuelve el encendido del digito en el display */
			}
		case 1:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 2:
			{
			return(Digit.Di2); /* devuelve el encendido del digito en el display */
			}
		case 3:
			{
			return(Digit.Di3); /* devuelve el encendido del digito en el display */
			}
		case 4:
			{
			return(Digit.Di4); /* devuelve el encendido del digito en el display */
			}
		case 5:
			{
			return(Digit.Di5); /* devuelve el encendido del digito en el display */
			}
		case 6:
			{
			return(Digit.Di6); /* devuelve el encendido del digito en el display */
			}
		case 7:
			{
			return(Digit.Di7); /* devuelve el encendido del digito en el display */
			}
		case 8:
			{
			return(Digit.Di8); /* devuelve el encendido del digito en el display */
			}
		case 9:
			{
			return(Digit.Di9); /* devuelve el encendido del digito en el display */
			}
		default:
		   {
			return 0;
			break;
		   }
} delay_ms(100);
}

uint8_t decoder_min_d (uint8_t minute_decimal){

	switch(minute_decimal){
		case 0:
			{
			return(Digit.Di0); /* devuelve el encendido del digito en el display */
			}
		case 1:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 2:
			{
			return(Digit.Di2); /* devuelve el encendido del digito en el display */
			}
		case 3:
			{
			return(Digit.Di3); /* devuelve el encendido del digito en el display */
			}
		case 4:
			{
			return(Digit.Di4); /* devuelve el encendido del digito en el display */
			}
		case 5:
			{
			return(Digit.Di5); /* devuelve el encendido del digito en el display */
			}
		case 6:
			{
			return 0;
			break; /* devuelve el encendido del digito en el display */
			}

		default:
		   {
			return 0;
			break;
		   }
} delay_ms(100);
}

uint8_t decoder_hour_u (uint8_t hour_unit){

	switch(hour_unit){
	case 0:
		{
		return(Digit.Di0); /* devuelve el encendido del digito en el display */
		}
	case 1:
		{
		return(Digit.Di1); /* devuelve el encendido del digito en el display */
		}
	case 2:
		{
		return(Digit.Di2); /* devuelve el encendido del digito en el display */
		}
	case 3:
		{
		return(Digit.Di3); /* devuelve el encendido del digito en el display */
		}
	case 4:
		{
		return(Digit.Di4); /* devuelve el encendido del digito en el display */
		}
	case 5:
		{
		return(Digit.Di5); /* devuelve el encendido del digito en el display */
		}
	case 6:
		{
		return(Digit.Di6); /* devuelve el encendido del digito en el display */
		}
	case 7:
		{
		return(Digit.Di7); /* devuelve el encendido del digito en el display */
		}
	case 8:
		{
		return(Digit.Di8); /* devuelve el encendido del digito en el display */
		}
	case 9:
		{
		return(Digit.Di9); /* devuelve el encendido del digito en el display */
		}
	default:
	   {
		return 0;
		break;
	   }
} delay_ms(100);

}

uint8_t decoder_hour_d (uint8_t hour_decimal){
	switch(second_decimal){
		case 0:
			{
			return(Digit.Di0); /* devuelve el encendido del digito en el display */
			}
		case 1:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 2:
			{
			return(Digit.Di2); /* devuelve el encendido del digito en el display */
			}
		case 3:
			{
			return(Digit.Di3); /* devuelve el encendido del digito en el display */
			}
		case 4:
			{
			return(Digit.Di4); /* devuelve el encendido del digito en el display */
			}
		case 5:
			{
			return(Digit.Di5); /* devuelve el encendido del digito en el display */
			}
		case 6:
			{
			return(Digit.Di6); /* devuelve el encendido del digito en el display */
			}
		case 7:
			{
			return(Digit.Di7); /* devuelve el encendido del digito en el display */
			}
		case 8:
			{
			return(Digit.Di8); /* devuelve el encendido del digito en el display */
			}
		case 9:
			{
			return(Digit.Di9); /* devuelve el encendido del digito en el display */
			}
		case 10:
		    {
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
		    }
		case 11:
		    {
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
		    }
		case 12:
		    {
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
		    }
		default:
		    {
			return 0;
			break;
		    }
}  delay_ms(1000);
}



uint8_t Alarma(){
 		switch (myfsmA)
 		{
 		case 0:           /* Enable D6  */
 		{
 			myfsmA++;
 			GPIOB->BSRR  |=  0xFFFF0000;      // Limpiar los Segmentos de Display
 			GPIOC->BSRR  |=  0x3F0;     // Limpiar los comunes de los Display
 			GPIOC->BSRR  |=  0x01<<9;       // Enable Common Display 6
 			GPIOB->ODR   |=  a_decoder_sec_u(watch.second_unit);      // Enable Digito

 		break;
 		}
 		case 1: /* Enable D5  */
 		{
 			myfsmA++;
 			GPIOB->BSRR  |=  0xFFFF0000;           // Clean Display
 			GPIOC->BSRR  |= 0x3F0;     // Limpiar los comunes de los Display
 			GPIOC->BSRR  |= 0x01<<8;        // Enable Common Display 6
 			GPIOB->ODR   |= a_decoder_sec_d(watch.second_decimal);      // Ingresar el decoder para segundos decimal

 		break;
 		}
 		case 2: /* Enable D4  */
 		{
 			myfsmA++;
 			GPIOB->BSRR   |= 0xFFFF0000;         // Clean Display
 			GPIOC->BSRR   |= 0x3F0;     // Limpiar los comunes de los Display
 			GPIOC->BSRR   |= 0x01<<7;
 			GPIOB->ODR    |= a_decoder_min_u(watch.minute_unit);

 		break;
 		}
 		case 3: /* Enable D3  */
 		{
 			myfsmA++;
 			GPIOB->BSRR  |= 0xFFFF0000;          // Clean Display
 			GPIOC->BSRR  |= 0x3F0;     // Limpiar los comunes de los Display
 			GPIOC->BSRR  |= 0x01<<6;
 			GPIOB->ODR   |= a_decoder_min_d(watch.minute_decimal);

 		break;
 		}
 		case 4: /* Enable D2  */
 		{
 		 	myfsmA++;
 		 	GPIOB->BSRR  |= 0xFFFF0000;          // Clean Display
 			GPIOC->BSRR  |= 0x3F0;    // Limpiar los comunes de los Display
 		 	GPIOC->BSRR  |= 0x01<<5;
 		 	GPIOB->ODR   |= a_decoder_h_u(watch.hour_unit);

 		break;
 		}
 		case 5: /* Enable D1  */
 		{
 		 	myfsmA=0;
 		 	GPIOB->BSRR  |= 0xFFFF0000;          // Clean Display
 			GPIOC->BSRR  |= 0x3F0;     // Limpiar los comunes de los Display
 		 	GPIOC->BSRR  |= 0x01<<4;
 		 	GPIOB->ODR   |= a_decoder_h_d(watch.hour_decimal);

 		break;
 		}
 		default:
 		{
 			myfsmA=0;
 			delay_ms(100000);
 			break;
 		}

 	}//Fin switch(myfsm)
 		delay_ms(10000);
  }

uint8_t A_decoder_sec_u (uint8_t second_unit){

	switch(second_unit){
		case 0:
			{
			return(Digit.Di9); /* devuelve el encendido del digito en el display */
			}
		case 1:
			{
			return(Digit.Di8); /* devuelve el encendido del digito en el display */
			}
		case 2:
			{
			return(Digit.Di7); /* devuelve el encendido del digito en el display */
			}
		case 3:
			{
			return(Digit.Di6); /* devuelve el encendido del digito en el display */
			}
		case 4:
			{
			return(Digit.Di5); /* devuelve el encendido del digito en el display */
			}
		case 5:
			{
			return(Digit.Di4); /* devuelve el encendido del digito en el display */
			}
		case 6:
			{
			return(Digit.Di3); /* devuelve el encendido del digito en el display */
			}
		case 7:
			{
			return(Digit.Di2); /* devuelve el encendido del digito en el display */
			}
		case 8:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 9:
			{
			return(Digit.Di0); /* devuelve el encendido del digito en el display */
			}
		default:
		   {
			return 0;
			break;
		   }
}delay_ms(1);
}

uint8_t A_decoder_sec_d (uint8_t second_decimal){

	switch(second_decimal){
		case 0:
			{
			return(Digit.Di5); /* devuelve el encendido del digito en el display */
			}
		case 1:
			{
			return(Digit.Di4); /* devuelve el encendido del digito en el display */
			}
		case 2:
			{
			return(Digit.Di3); /* devuelve el encendido del digito en el display */
			}
		case 3:
			{
			return(Digit.Di2); /* devuelve el encendido del digito en el display */
			}
		case 4:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 5:
			{
			return(Digit.Di0); /* devuelve el encendido del digito en el display */
			}
		case 6:
			{
			return 0;
			break; /* devuelve el encendido del digito en el display */
			}

		default:
		   {
			return 0;
			break;
		   }
} delay_ms(10);
}

uint8_t A_decoder_min_u (uint8_t minute_unit){

	switch(minute_unit){
		case 0:
			{
			return(Digit.Di9); /* devuelve el encendido del digito en el display */
			}
		case 1:
			{
			return(Digit.Di8); /* devuelve el encendido del digito en el display */
			}
		case 2:
			{
			return(Digit.Di7); /* devuelve el encendido del digito en el display */
			}
		case 3:
			{
			return(Digit.Di6); /* devuelve el encendido del digito en el display */
			}
		case 4:
			{
			return(Digit.Di5); /* devuelve el encendido del digito en el display */
			}
		case 5:
			{
			return(Digit.Di4); /* devuelve el encendido del digito en el display */
			}
		case 6:
			{
			return(Digit.Di3); /* devuelve el encendido del digito en el display */
			}
		case 7:
			{
			return(Digit.Di2); /* devuelve el encendido del digito en el display */
			}
		case 8:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 9:
			{
			return(Digit.Di0); /* devuelve el encendido del digito en el display */
			}
		default:
		   {
			return 0;
			break;
		   }
}delay_ms(1);
}

uint8_t A_decoder_min_d (uint8_t minute_decimal){

	switch(minute_decimal){
		case 0:
			{
			return(Digit.Di5); /* devuelve el encendido del digito en el display */
			}
		case 1:
			{
			return(Digit.Di4); /* devuelve el encendido del digito en el display */
			}
		case 2:
			{
			return(Digit.Di3); /* devuelve el encendido del digito en el display */
			}
		case 3:
			{
			return(Digit.Di2); /* devuelve el encendido del digito en el display */
			}
		case 4:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 5:
			{
			return(Digit.Di0); /* devuelve el encendido del digito en el display */
			}
		case 6:
			{
			return 0;
			break; /* devuelve el encendido del digito en el display */
			}

		default:
		   {
			return 0;
			break;
		   }
} delay_ms(10);
}

uint8_t A_decoder_hour_u (uint8_t hour_unit){

	switch(hour_unit){
		case 0:
			{
			return(Digit.Di9); /* devuelve el encendido del digito en el display */
			}
		case 1:
			{
			return(Digit.Di8); /* devuelve el encendido del digito en el display */
			}
		case 2:
			{
			return(Digit.Di7); /* devuelve el encendido del digito en el display */
			}
		case 3:
			{
			return(Digit.Di6); /* devuelve el encendido del digito en el display */
			}
		case 4:
			{
			return(Digit.Di5); /* devuelve el encendido del digito en el display */
			}
		case 5:
			{
			return(Digit.Di4); /* devuelve el encendido del digito en el display */
			}
		case 6:
			{
			return(Digit.Di3); /* devuelve el encendido del digito en el display */
			}
		case 7:
			{
			return(Digit.Di2); /* devuelve el encendido del digito en el display */
			}
		case 8:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 9:
			{
			return(Digit.Di0); /* devuelve el encendido del digito en el display */
			}
		default:
		   {
			return 0;
			break;
		   }
}delay_ms(1);
}

uint8_t A_decoder_hour_d (uint8_t hour_decimal){
	switch(second_decimal){
		case 0:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 1:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 2:
			{
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
			}
		case 3:
			{
			return(Digit.Di9); /* devuelve el encendido del digito en el display */
			}
		case 4:
			{
			return(Digit.Di8); /* devuelve el encendido del digito en el display */
			}
		case 5:
			{
			return(Digit.Di7); /* devuelve el encendido del digito en el display */
			}
		case 6:
			{
			return(Digit.Di6); /* devuelve el encendido del digito en el display */
			}
		case 7:
			{
			return(Digit.Di5); /* devuelve el encendido del digito en el display */
			}
		case 8:
			{
			return(Digit.Di4); /* devuelve el encendido del digito en el display */
			}
		case 9:
			{
			return(Digit.Di3); /* devuelve el encendido del digito en el display */
			}
		case 10:
		    {
			return(Digit.Di2); /* devuelve el encendido del digito en el display */
		    }
		case 11:
		    {
			return(Digit.Di1); /* devuelve el encendido del digito en el display */
		    }
		case 12:
		    {
			return(Digit.Di0); /* devuelve el encendido del digito en el display */
		    }
		default:
		    {
			return 0;
			break;
		    }
}  delay_ms(1000);
}