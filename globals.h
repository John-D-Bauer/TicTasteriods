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

struct Pointer 
{
  int x;
  int y;
  BoxPosition pointerPos;
};

Pointer pointer = {17, 7, BoxPosition::TopL};

BoxPosition pointerPos = BoxPosition::TopL;

int gameBoard[9];

#endif
