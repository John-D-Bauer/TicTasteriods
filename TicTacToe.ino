#include "Arduboy2.h"
Arduboy2 arduboy;

#include "globals.h"
#include "gameFunctions.h"

void gameLoop() 
{
  
  arduboy.drawLine(0, 21, 128, 21, WHITE);
  arduboy.drawLine(0, 42, 128, 42, WHITE);
  arduboy.drawLine(42, 0, 42, 64, WHITE);
  arduboy.drawLine(84, 0, 84, 64, WHITE);

  scrollLetters();
  checkBoard();
  drawSpaceship();
} 


void setup() 
{
  arduboy.begin();
  arduboy.setFrameRate(45);
  arduboy.display();

  
  arduboy.clear();
}

void loop() 
{
  if(!(arduboy.nextFrame())) 
  {
    return;
  }

  arduboy.pollButtons();

  arduboy.clear();

  gameLoop();

  arduboy.display();
}
