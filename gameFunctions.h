bool playerTurn = true;

void pointerFunction() 
{

  if (playerTurn)
  {
  arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);

   // When pressing the right button, the box (cursor) moves right
  if (arduboy.justPressed(RIGHT_BUTTON))
  { 
    switch (pointerPos)
    {
      case BoxPosition::TopL:
      pointer.x = 60;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::TopM;
      break;

      case BoxPosition::TopM:
      pointer.x = 103;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::TopR;
      break;

      case BoxPosition::CenterL:
      pointer.x = 60;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::CenterM;
      break;

      case BoxPosition::CenterM:
      pointer.x = 103;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::CenterR;
      break;

      case BoxPosition::BottomL:
      pointer.x = 60;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::BottomM;
      break;

      case BoxPosition::BottomM:
      pointer.x = 103;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::BottomR;
      break;
    }
  }
  
  // When pressing the left button, the box (cursor) moves left
  if (arduboy.justPressed(LEFT_BUTTON))
  {
    switch (pointerPos)
    {
      case BoxPosition::TopR:
      pointer.x = 60;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::TopM;
      break;

      case BoxPosition::TopM:
      pointer.x = 17;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::TopL;
      break;

      case BoxPosition::CenterR:
      pointer.x = 60;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::CenterM;
      break;

      case BoxPosition::CenterM:
      pointer.x = 17;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::CenterL;
      break;

      case BoxPosition::BottomR:
      pointer.x = 60;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::BottomM;
      break;

      case BoxPosition::BottomM:
      pointer.x = 17;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::BottomL;
      break;
    }
  }
  
  // When pressing the down button, the box (cursor) moves down
  if (arduboy.justPressed(DOWN_BUTTON))
  {
    switch (pointerPos)
    {
      case BoxPosition::TopL:
      pointer.y = 28;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::CenterL;
      break;

      case BoxPosition::CenterL:
      pointer.y = 49;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::BottomL;
      break;

      case BoxPosition::TopM:
      pointer.y = 28;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::CenterM;
      break;

      case BoxPosition::CenterM:
      pointer.y = 49;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::BottomM;
      break;

      case BoxPosition::TopR:
      pointer.y = 28;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::CenterR;
      break;

      case BoxPosition::CenterR:
      pointer.y = 49;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::BottomR;
      break;

    }
  }

  // When pressing the up button, the box (cursor) moves up
  if (arduboy.justPressed(UP_BUTTON))
  {
    switch (pointerPos)
    {
      case BoxPosition::BottomL:
      pointer.y = 28;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::CenterL;
      break;

      case BoxPosition::CenterL:
      pointer.y = 7;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::TopL;
      break;

      case BoxPosition::BottomM:
      pointer.y = 28;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::CenterM;
      break;

      case BoxPosition::CenterM:
      pointer.y = 7;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::TopM;
      break;

      case BoxPosition::BottomR:
      pointer.y = 28;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::CenterR;
      break;

      case BoxPosition::CenterR:
      pointer.y = 7;
      arduboy.drawRect(pointer.x, pointer.y, 8, 8, WHITE);
      pointerPos = BoxPosition::TopR;
      break;

    }
  }
}
}

void easyAI()
{
  if (!playerTurn)
  {
  if (rand() % 100 == 0 && gameBoard[0] == 0)
  {
    gameBoard[0] = 2;
    playerTurn = true;
  }
   if (rand() % 100 == 0 && gameBoard[1] == 0)
  {
    gameBoard[1] = 2;
    playerTurn = true;
  }
   if (rand() % 100 == 0 && gameBoard[2] == 0)
  {
    gameBoard[2] = 2;
    playerTurn = true;
  }
   if (rand() % 100 == 0 && gameBoard[3] == 0)
  {
    gameBoard[3] = 2;
    playerTurn = true;
  }
   if (rand() % 100 == 0 && gameBoard[4] == 0)
  {
    gameBoard[4] = 2;
    playerTurn = true;
  }
   if (rand() % 100 == 0 && gameBoard[5] == 0)
  {
    gameBoard[5] = 2;
    playerTurn = true;
  }
   if (rand() % 100 == 0 && gameBoard[6] == 0)
  {
    gameBoard[6] = 2;
    playerTurn = true;
  }
   if (rand() % 100 == 0 && gameBoard[7] == 0)
  {
    gameBoard[7] = 2;
    playerTurn = true;
  }
   if (rand() % 100 == 0 && gameBoard[8] == 0)
  {
    gameBoard[8] = 2;
    playerTurn = true;
  }
  }
}

void XorOFunction()
{

  if (playerTurn)
  {
  //When the player presses the A button, an X will appear on the screen
  if (arduboy.justPressed(A_BUTTON))
  {
    switch (pointerPos)
    {
      case BoxPosition::TopL:
      gameBoard[0] = 1;
      break;

      case BoxPosition::TopM:
      gameBoard[1] = 1;
      break;

      case BoxPosition::TopR:
      gameBoard[2] = 1;
      break;

      case BoxPosition::CenterL:
      gameBoard[3] = 1;
      break;

      case BoxPosition::CenterM:
      gameBoard[4] = 1;
      break;

      case BoxPosition::CenterR:
      gameBoard[5] = 1;
      break;

      case BoxPosition::BottomL:
      gameBoard[6] = 1;
      break;

      case BoxPosition::BottomM:
      gameBoard[7] = 1;
      break;

      case BoxPosition::BottomR:
      gameBoard[8] = 1;
      break;
    }
    
    playerTurn = false;
    
  }
  }
  
   if (gameBoard[0] == 1)
      {
        arduboy.setCursor(17, 3);
        arduboy.setTextSize(2);
        arduboy.print("X");
      }
      else if (gameBoard[0] == 2)
      {
        arduboy.setCursor(17, 3);
        arduboy.setTextSize(2);
        arduboy.print("O");
      }

      if (gameBoard[1] == 1)
      {
        arduboy.setCursor(60, 3);
        arduboy.setTextSize(2);
        arduboy.print("X");
      }
      else if (gameBoard[1] == 2)
      {
        arduboy.setCursor(60, 3);
        arduboy.setTextSize(2);
        arduboy.print("O");
      }

      if (gameBoard[2] == 1)
      {
        arduboy.setCursor(103, 3);
        arduboy.setTextSize(2);
        arduboy.print("X");
      }
      else if (gameBoard[2] == 2)
      {
        arduboy.setCursor(103, 3);
        arduboy.setTextSize(2);
        arduboy.print("O");
      }

      if (gameBoard[3] == 1)
      {
        arduboy.setCursor(17, 24);
        arduboy.setTextSize(2);
        arduboy.print("X");
      }
      else if (gameBoard[3] == 2)
      {
        arduboy.setCursor(17, 24);
        arduboy.setTextSize(2);
        arduboy.print("O");
      }

      if (gameBoard[4] == 1)
      {
        arduboy.setCursor(60, 24);
        arduboy.setTextSize(2);
        arduboy.print("X");
      }
      else if (gameBoard[4] == 2)
      {
        arduboy.setCursor(60, 24);
        arduboy.setTextSize(2);
        arduboy.print("O");
      }

      if (gameBoard[5] == 1)
      {
        arduboy.setCursor(103, 24);
        arduboy.setTextSize(2);
        arduboy.print("X");
      }
      else if (gameBoard[5] == 2)
      {
        arduboy.setCursor(103, 24);
        arduboy.setTextSize(2);
        arduboy.print("O");
      }

      if (gameBoard[6] == 1)
      {
        arduboy.setCursor(17, 45);
        arduboy.setTextSize(2);
        arduboy.print("X");
      }
      else if (gameBoard[6] == 2)
      {
        arduboy.setCursor(17, 45);
        arduboy.setTextSize(2);
        arduboy.print("O");
      }

      if (gameBoard[7] == 1)
      {
        arduboy.setCursor(60, 45);
        arduboy.setTextSize(2);
        arduboy.print("X");
      }
      else if (gameBoard[7] == 2)
      {
        arduboy.setCursor(60, 45);
        arduboy.setTextSize(2);
        arduboy.print("O");
      }

      if (gameBoard[8] == 1)
      {
        arduboy.setCursor(103, 45);
        arduboy.setTextSize(2);
        arduboy.print("X");
      }
      else if (gameBoard[8] == 2)
      {
        arduboy.setCursor(103, 45);
        arduboy.setTextSize(2);
        arduboy.print("O");
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
////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////
    if (gameBoard[0] == 2 && gameBoard[1] == 2 && gameBoard[2] == 2)
  {
    arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nloses!");
  }
    if (gameBoard[3] == 2 && gameBoard[4] == 2 && gameBoard[5] == 2)
    {
      arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nloses!");
    }
      if (gameBoard[6] == 2 && gameBoard[7] == 2 && gameBoard[8] == 2)
      {
    arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nloses!");
  }
  
if (gameBoard[0] == 2 && gameBoard[3] == 2 && gameBoard[6] == 2)
  {
    arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nloses!");
  }
    if (gameBoard[1] == 2 && gameBoard[4] == 2 && gameBoard[7] == 2)
    {
      arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nloses!");
    }
      if (gameBoard[2] == 2 && gameBoard[5] == 2 && gameBoard[8] == 2)
      {
    arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nloses!");
  }

  if (gameBoard[0] == 2 && gameBoard[4] == 2 && gameBoard[8] == 2)
  {
    arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nloses!");
  }
    if (gameBoard[2] == 2 && gameBoard[4] == 2 && gameBoard[6] == 2)
    {
      arduboy.clear();
    arduboy.setCursor(0, 0);
    arduboy.print("Player \nloses!");
    }
}


