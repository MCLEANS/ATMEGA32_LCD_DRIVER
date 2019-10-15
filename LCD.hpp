#ifndef _LCD_H
#define _LCD_H 

#include <avr/io.h>


#define DDIRECTION DDRA
#define SIGNALDIRECTION DDRB
#define D0PORT PORTA
#define D0PIN 0
#define D1PORT PORTA
#define D1PIN 1
#define D2PORT PORTA
#define D2PIN 2
#define D3PORT PORTA
#define D3PIN 3
#define D4PORT PORTA
#define D4PIN 4
#define D5PORT PORTA
#define D5PIN 5
#define D6PORT PORTA
#define D6PIN 6
#define D7PORT PORTA 
#define D7PIN 7
#define RSPORT PORTB
#define RSPIN 0
#define RWPORT PORTB
#define RWPIN 1
#define EnablePORT PORTB
#define EnablePIN 2
#define DELAYBEFOREENABLE 100
#define DELAYBEFOREDISABLE 400


class LCD{
    private:
    private:
        void delay(uint64_t duration);
        void send_character_to_pins(char character);
        void  command_mode();
        void character_mode();
        void write_mode();
        void read_mode();
        void Enable();
        
        
        
        
    public:
    public:
        LCD();
        void send_character(char character);
        void initialize();
        void send_instruction(char instruction);
        void send_string(char *byte);
        void clear();
        void new_line();



};




#endif //_LCD_H