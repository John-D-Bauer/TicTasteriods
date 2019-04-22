void drawSpaceship() 
{
  arduboy.fillRect(spaceship.x, spaceship.y, 16, 4, WHITE);

  if (arduboy.pressed(RIGHT_BUTTON))
  {
    if (spaceship.x + 16 <= WIDTH)
    {
      spaceship.x++;
    }
  }

  if (arduboy.pressed(LEFT_BUTTON))
  {
    if (spaceship.x >= 0)
    {
      spaceship.x--;
    }
  }

  if (arduboy.justPressed(A_BUTTON))
  {
    for (int y = 60; y >= 0; y--)
    {
      bullet.y = y;
      bullet.x = spaceship.x + 7;
      arduboy.fillRect( bullet.x, bullet.y, 1, 1, WHITE);
    }
  }
}

void scrollLetters()
{
  if (arduboy.everyXFrames(100))
  {
    arduboy.setTextSize(2);
    for (int pixels; pixels <= 64; pixels++)
    {
      xLetter.y++;

      if (rand() % 10 == 1) 
      {
        arduboy.setCursor(xLetter.x, xLetter.y);
        arduboy.print("X");
      }
      else if (rand() % 0 == 2) 
      {
        arduboy.print ("O");
      }
    }
  }
}


void checkBoard()
{
  if (gameBoard[0] == 1 && gameBoard[1] == 1 && gameBoard[2] == 1)
  {
    arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nwins!");
  }
    if (gameBoard[3] == 1 && gameBoard[4] == 1 && gameBoard[5] == 1)
    {
      arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nwins!");
    }
      if (gameBoard[6] == 1 && gameBoard[7] == 1 && gameBoard[8] == 1)
      {
    arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nwins!");
  }
  
if (gameBoard[0] == 1 && gameBoard[3] == 1 && gameBoard[6] == 1)
  {
    arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nwins!");
  }
    if (gameBoard[1] == 1 && gameBoard[4] == 1 && gameBoard[7] == 1)
    {
      arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nwins!");
    }
      if (gameBoard[2] == 1 && gameBoard[5] == 1 && gameBoard[8] == 1)
      {
    arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nwins!");
  }

  if (gameBoard[0] == 1 && gameBoard[4] == 1 && gameBoard[8] == 1)
  {
    arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nwins!");
  }
    if (gameBoard[2] == 1 && gameBoard[4] == 1 && gameBoard[6] == 1)
    {
      arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nwins!");
    }
}
