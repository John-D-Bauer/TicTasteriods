#ifndef GLOBALS_H
#define GLOBALS_H

enum class BoxPosition : int
{
  TopL,
  TopM,
  TopR,
  CenterL,
  CenterM,
  CenterR,
  BottomL,
  BottomM,
  BottomR,
};

struct Letter 
{
  int x;
  int y;
  bool breakableLetter;
};

Letter xLetter {0, 0, false};
Letter oLetter {0, 0, true};

struct Spaceship 
{
  int x;
  int y;
};

Spaceship spaceship {0, 64 - 4};

struct Bullet
{
  int x;
  int y;
  bool hasHitLetter;
};

Bullet bullet {0, 0, false};

int gameBoard[9];

#endif
