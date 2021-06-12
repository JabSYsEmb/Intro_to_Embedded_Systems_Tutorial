/*
  external-interrupts.ino - implementation of external interrupts of the ATmega8.
  In order to implement external interrupt, the followings should be done:
  - Set I-bit of SREG (Status Register) to "1".
  - Enable the corresponding bit of EIMSK (External Interrupt Mask Register).
  - Enable pins as INT pins by setting "1" into corresponding bits in 
    External Interrupt Flag (Pin change Mask Register). 
  - Read PCIF register to check of an Interrupt ocurrs or not.  
  - Write a handling function for the interrupt.
  - After handling the interrupt clear the corresponding PCIFRn and PCMSKn. 
*/
