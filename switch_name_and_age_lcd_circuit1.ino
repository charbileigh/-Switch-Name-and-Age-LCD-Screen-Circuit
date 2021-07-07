#include <LiquidCrystal.h>

//create an instance of the LiquidCrystal class called lcd, initialising the relevant pins

LiquidCrystal lcd(12, 11, 6, 5, 4, 3); 
bool toggleDisplay; // boolean for switching display

struct myData                       
{
    uint8_t Age = 25;
    char FirstName[10] = {'F', 'r', 'a', 'n', 'c', 'e', 's', 'c', 'a', '\0'};
} myName;                       

void setup()
{
   // myName.Age = 24;
   // myName.FirstName = {'F', 'r', 'a', 'n', 'c', 'e', 's', 'c', 'a', '\0'};
    lcd.begin(16,2);
    toggleDisplay = true;
}



void loop()
{
    switch (toggleDisplay){
        case true:
            lcd.print(myName.FirstName);
            lcd.setCursor(0, 1);
            lcd.print(myName.Age);
            delay(200);
            lcd.clear();
      		toggleDisplay = false;
            break;

        case false:
            lcd.print(myName.Age);
            lcd.setCursor(0, 1);
            lcd.print(myName.FirstName);
            delay(200);
            lcd.clear();
      		toggleDisplay = true;
            break;
        
        default:
            break;
    }
}


