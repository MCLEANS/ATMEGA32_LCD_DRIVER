# ATMEGA32_LCD_DRIVER
16X2 LCD DRIVER for AVR ATMEGA32

## INITIALIZATION
To start out with the driver first open the LCD.hpp header file and change the Data Direction and PORT of the pins you intend to use for your LCD in 8-bit mode.
For example:

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
        
Next step is to create an object of the LCD class.
        
        LCD my_lcd;
 
Inside the main function initialize the LCD using the object you created.
        
        int main(void){
        
        my_lcd.initialize();
        
        while(1){
        
        }
        
        }
        
 ##  IMPLEMENTATION
 To clear the lcd screen use the command
 
        my_lcd.clear();
        
 To move to the next row of the lcd use.
        
        my_lcd.new_line();
        
 To write a single character to the lcd use the send character method
        
        my_lcd.send_character('C');
        
 To write a string to the LCD use and array of characters and pass it to the send_string method
 
        char message[] = "Hello World";
        my_lcd.send_string(message);
        
 To send an instruction/command to the LCD.
         
         //for example a clear screen instruction with binary code 0b00000001
         my_lcd.send_instruction(0b00000001);
          
