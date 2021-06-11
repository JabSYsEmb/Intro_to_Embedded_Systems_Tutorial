/*
  pinChangeInterrupt.ino - implementation of PinChange Interrupt service of the ATmega8.
  In order to implement Pin Change Interrupt, the following should be done:
  - Set I-bit of SREG (Status Register) to "1".
  - Enable the appropriate bit of PCIE Register (Pin Change Interrupt Control Register).
  - Enable Pins as PCI pins by setting "1" into corresponding bits in 
    PCMSKn (Pin change Mask Register). 
  - Read PCIF register to check of an Interrupt ocurrs or not.  
  - Write a handling function for the interrupt.
  - After handling the interrupt clear the corresponding PCIFRn and PCMSKn. 

 A list of interrupts, in priority order, for the Atmega328:
 1  Reset 
 2  External Interrupt Request 0  (pin D2)          (INT0_vect)
 3  External Interrupt Request 1  (pin D3)          (INT1_vect)
 4  Pin Change Interrupt Request 0 (pins D8 to D13) (PCINT0_vect)
 5  Pin Change Interrupt Request 1 (pins A0 to A5)  (PCINT1_vect)
 6  Pin Change Interrupt Request 2 (pins D0 to D7)  (PCINT2_vect)
 7  Watchdog Time-out Interrupt                     (WDT_vect)
 8  Timer/Counter2 Compare Match A                  (TIMER2_COMPA_vect)
 9  Timer/Counter2 Compare Match B                  (TIMER2_COMPB_vect)
10  Timer/Counter2 Overflow                         (TIMER2_OVF_vect)
11  Timer/Counter1 Capture Event                    (TIMER1_CAPT_vect)
12  Timer/Counter1 Compare Match A                  (TIMER1_COMPA_vect)
13  Timer/Counter1 Compare Match B                  (TIMER1_COMPB_vect)
14  Timer/Counter1 Overflow                         (TIMER1_OVF_vect)
15  Timer/Counter0 Compare Match A                  (TIMER0_COMPA_vect)
16  Timer/Counter0 Compare Match B                  (TIMER0_COMPB_vect)
17  Timer/Counter0 Overflow                         (TIMER0_OVF_vect)
18  SPI Serial Transfer Complete                    (SPI_STC_vect)
19  USART Rx Complete                               (USART_RX_vect)
20  USART, Data Register Empty                      (USART_UDRE_vect)
21  USART, Tx Complete                              (USART_TX_vect)
22  ADC Conversion Complete                         (ADC_vect)
23  EEPROM Ready                                    (EE_READY_vect)
24  Analog Comparator                               (ANALOG_COMP_vect)
25  2-wire Serial Interface  (I2C)                  (TWI_vect)
26  Store Program Memory Ready                      (SPM_READY_vect)
*/


#define BIT8_MASK 0B10000000
#define BIT0_MASK 0B00000001

unsigned char *sReg, *PCICR, *DDRB, *dataB, *portB;

void setup(){
    sReg    = (unsigned char *) 0x5F; // status Register
    PCICR   = (unsigned char *) 0x68; // pin change interrupt 
    dataB   = (unsigned char *) 0x25; // data register
    DDRB    = (unsigned char *) 0x24; // data direction register
    portB   = (unsigned char *) 0x23; // port pin b

    DDRB    = (*DDRB)  | BIT0_MASK;
    *sReg   = (*sReg)  | BIT8_MASK;
    *PCICR  = (*PCICR) | BIT0_MASK;
}

void loop(){

}

ISR ()