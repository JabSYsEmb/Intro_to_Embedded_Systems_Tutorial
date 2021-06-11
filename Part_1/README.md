# Part-1 
This part of the project contains of problems that are mentioned in the book.

## First Question:
Using the ATmega328P pin configuration table and the Arduino Duemilanove Schematic in [list](https://url.here), state all of the pins on the three ports that are already dedicated to an alternative function via pin-muxing.  
*Hint: all the pins in the table correspond to pins on the schematic; some ofthem will go to specific circuitry other than the headers.*


|Ping | Arduino Connection| GPIO           | Alternate Functions| Description                      |
|:---:| :------------:    | :------------: |:---------------:   | :-----------:                    |
|  1  | RESET             | PC5            | RESET              | Processor reset signal           |
|     |                   |                | PCINT14            | Pin change interrupt 14          |
|  2  | J1-1 "0"          | PD0            | RXD                |   USART receive                  |
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
|     |                   |                |                    |                                  |
|     |                   |                |                    |                                  |
|     |                   |                |                    |                                  |
|     |                   |                |                    |                                  |
|     |                   |                |                    |                                  |
|     |                   |                |                    |                                  |
