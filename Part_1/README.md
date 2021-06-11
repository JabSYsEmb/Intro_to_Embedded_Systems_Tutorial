# Part-1 
This part of the project contains of problems that are mentioned in the book.

## 1. Problem:
Using the ATmega328P pin configuration table and the Arduino Duemilanove Schematic in this [table](#atmega328p-pin-configuration), state all of the pins on the three ports that are already dedicated to an alternative function via pin-muxing.  
*Hint: all the pins in the table correspond to pins on the schematic; some ofthem will go to specific circuitry other than the headers.*


## **ATmega328P pin configuration**

|Ping | Arduino Connection| GPIO           | Alternate Functions| Description                      |
|:---:| :------------     | :------------: |:---------------    | :-----------                     |
|  1  | RESET             | PC5            | RESET              | Processor reset signal           |
|     |                   |                | PCINT14            | Pin change interrupt 14          |
|  2  | J1-1 "0"          | PD0            | RXD                | USART receive                    |
|     |                   |                | PCINT16            | Pin change interrupt 16          |
|  3  | J1-2 "1"          | PD1            | TXD                | USART transmit                   |
|     |                   |                | PCINT17            | Pin change interrupt 17          |
|  4  | J1-3 “2”          | PD2            | INT0               | External interrupt request 0     |
|     |                   |                | PCINT18            | Pin change interrupt 18          |
|  5  | J1-4 “3”          | PD3            | INT1               | External interrupt request 1     |
|     |                   |                | PCINT19            | Pin change interrupt 19          |
|     |                   |                | OC2B               | Output compare pin, Timer2 Unit B|
|  6  | J1-5 “4”          | PD4            | T0                 | Timer0 external counter input    |
|     |                   |                | PCINT20            | Pin change interrupt 20          |
|     |                   |                | XCK                | USART external clock I/O         |
|  7  | +5V               | -              | VCC                | Power                            |
|  8  | GND               | -              | GND                | Ground                           |
|  9  | 16MHz Crystal     | PB6            | XTAL1              | Chip clock oscillator pin 1      |
|     |                   |                | PCINT6             | Pin change interrupt 6           |
|     |                   |                | TOSC1              | Timer oscillator pin 1           |
|  10 | 16MHz Crystal     | PB7            | XTAL2              | Chip clock oscillator pin 2      |
|     |                   |                | PCINT7             | Pin change interrupt 7           |
|     |                   |                | TOSC2              | Timer oscillator pin 2           |
|  11 | J1-6 “5”          | PD5            | T1                 | Timer1 external counter input    |
|     |                   |                | PCINT21            | Pin change interrupt 21          |
|     |                   |                | OC0B               | Output compare pin, Timer0 Unit B|
|  12 | J1-7 “6”          | PD6            | AIN0               | Analog comparator positive input |
|     |                   |                | PCINT22            | Pin change interrupt 22          |
|     |                   |                | OC0A               | Output compare pin, Timer0 Unit A|
|  13 | J1-8 “7”          | PD7            | AIN1               | Analog comparator negative input |
|     |                   |                | PCINT23            | Pin change interrupt 23          |
|  14 | J3-1 “8”          | PB0            | ICP1               | Timer1 input capture input       |
|     |                   |                | PCINT0             | Pin change interrupt 0           |
|     |                   |                | CLKO               | Divided system clock output      |
|  15 | J3-2 “9”          | PB1            | OC1A               | Output compare pin, Timer1 Unit A|
|     |                   |                | PCINT1             | Pin change interrupt 1           |
|  16 | J3-3 “10”         | PB2            | OC1B               | Output compare pin, Timer1 Unit B|
|     |                   |                | PCINT2             | Pin change interrupt 2           |
|     |                   |                | SS                 | SPI slave select                 |
|  17 | J3-4 “11”         | PB3            | OC2A               | Output compare pin, Timer2 Unit A|
|     |                   |                | PCINT3             | Pin change interrupt 3           |
|     |                   |                | MOSI               | SPI master-out/slave-in          |
|  18 | J3-5 “12”         | PB4            | PCINT4             | Pin change interrupt 4           |
|     |                   |                | MISO               | SPI master-in/slave-out          |
|  19 | J3-6 “13”         | PB5            | PCINT5             | Pin change interrupt 5           |
|     |                   |                | SCK                | SPI clock input                  |
|  20 | +5V               | -              | AVCC               | Analog supply voltage for ADC    |
|  21 | J3-8 “AREF”       | -              | AREF               | External ADC reference voltage   |
|  22 | GND               | -              | GND                | Ground                           |
|  23 | J2-1 “0”          | PC0            | ADC0               | ADC input channel 0              |
|     |                   |                | PCINT8             | Pin change interrupt 8           |
|  24 | J2-2 “1”          | PC1            | ADC1               | ADC input channel 1              |
|     |                   |                | PCINT9             | Pin change interrupt 9           |
|  25 | J2-3 “2”          | PC2            | ADC2               | ADC input channel 2              |
|     |                   |                | PCINT10            | Pin change interrupt 10          |
|  26 | J2-4 “3”          | PC3            | ADC3               | ADC input channel 3              |
|     |                   |                | PCINT11            | Pin change interrupt 11          |
|  27 | J2-5 “4”          | PC4            | ADC4               | ADC input channel 4              |
|     |                   |                | PCINT12            | Pin change interrupt 12          |
|     |                   |                | SDA                | TWI serial data                  |
|  28 | J2-6 “5”          | PC5            | ADC5               | ADC input channel 5              |
|     |                   |                | PCINT13            | Pin change interrupt 13          |
|     |                   |                | SCL                | TWI serial clock                 |
