#define BIT5_MASK 0B00100000
#define EMPTY_MSG 0B00000000

unsigned char *portDDRB;
unsigned char *portDataB;


void setup()
{
    portDDRB  = (unsigned char *) 0x24;
    portDataB = (unsigned char *) 0x25;
    *portDDRB = (*portDDRB) | (BIT5_MASK); // Pin 13 is Output
}

void loop()
{
  // Write "1" into fifth Bit of the data register
  *portDataB |= BIT5_MASK; 
  _delay_ms(1000); // Wait for 1000 millisecond(s)
  // Clear the data register
  *portDataB &= EMPTY_MSG;
  _delay_ms(1000); // Wait for 1000 millisecond(s)
}