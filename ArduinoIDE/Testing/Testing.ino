/* ****************************************PIN-DEFINES**************************************** */
/***********************************************************************************************/

/* Analog input pin for the output current measurement( differential comparator ) */
#define ub_CURRENT_MEASUREMENT_POSITIVE_PIN PB4
#define ub_CURRENT_MEASUREMENT_NEGATIVE_PIN PB3

/* Analog input pin for the input voltage measurement( single ended ) */
#define ub_INPUT_VOLTAGE_MEASUREMENT_PIN PB2

/* PWM output for the MOSFET driver */
#define ub_MOSFET_PWM_PIN PB1

/* PWM output for the ERROR LED */
#define ub_ERROR_LED_PWM_PIN PB0

/* *****************************************DEFINES******************************************* */
/***********************************************************************************************/

 
/* ****************************************FUNCTIONS****************************************** */
/***********************************************************************************************/

/* Input voltage measuring function, returns the voltage of the supply */
uint8_t ub_SupplyVoltage( void );

/* Output current measuring function, returns the output current */
uint8_t ub_OutputCurrent( void );

/* MOSFET PWM generation function, it's parameter is a % from 0 to 100 */
void ub_MosfetPwm( uint8_t );

/* ERROR LED PWM generation function, it's parameter is a % from 0 to 100 */
void ub_LedPwm( uint8_t );


void setup() 
{
  /* ****************************Pin initializations**************************** */

  DDRB |= ( 1 << ub_MOSFET_PWM_PIN );                   /* configure as output */
  DDRB |= ( 1 << ub_ERROR_LED_PWM_PIN );                /* configure as output */
  DDRB &= ~( 1 << ub_INPUT_VOLTAGE_MEASUREMENT_PIN);    /* configure as input */
  DDRB &= ~( 1 << ub_CURRENT_MEASUREMENT_NEGATIVE_PIN); /* configure as input */
  DDRB &= ~( 1 << ub_CURRENT_MEASUREMENT_POSITIVE_PIN); /* configure as input */

  /* ****************************PWM initialization**************************** */

  
}

void loop() 
{

}
