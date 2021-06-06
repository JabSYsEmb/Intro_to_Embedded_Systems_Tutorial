#define BIT4_MASK 0B00010000
#define BIT5_MASK 0B00100000
#define EMPTY_MSG 0B00000000

unsigned char *portDDRB;
unsigned char *portDataB;
unsigned char *portPinB;

void setup()
{
    portDDRB   = (unsigned char *) 0x24;
    portDataB  = (unsigned char *) 0x25;
    portPinB   = (unsigned char *) 0x23;
    *portDDRB  = (*portDDRB)  | (BIT5_MASK); // Pin 13 is Output
    *portDataB = (*portDataB) & (BIT4_MASK); // Pin 12 is Pull Up-resistor
// *portPinB = (*portPinB) | (BIT4_MASK);
}

void loop()
{
  if(*portPinB == BIT4_MASK){
    // Write "1" into fifth Bit of the data register
    *portDataB |= (BIT5_MASK);
    _delay_ms(1000); // Wait for 1000 millisecond(s)  
  }else{
    // Clear the data register
    *portDataB &= EMPTY_MSG;
    _delay_ms(1000); // Wait for 1000 millisecond(s)
  }
}