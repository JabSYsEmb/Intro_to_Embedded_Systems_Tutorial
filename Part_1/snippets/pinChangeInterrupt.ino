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