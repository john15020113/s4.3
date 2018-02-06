#include <mbed.h>
#include <C12832.h>

// Using Arduino pin notation
C12832 lcd(D11, D13, D12, D7, D10);

int main()
{
    while(true) {
        lcd.cls();
        for(int i = 0; i<50; i++) {
          lcd.locate(0,20);
          int randY = rand()%10;
          int randX = rand()%50;
          lcd.circle(10+randX,10+randY,10,1);
          lcd.locate(70,10);
          lcd.printf("Circles: %d", i);
          lcd.locate(70,20);
          lcd.printf("X: %d Y: %d", 10+randX, 10+randY);
          wait(.3);
        }
        wait(1);
    }
}
