#include "Box.h"
#include<iostream>

// Implement setters and getters
void Box::setlength(double l)
{
  length=l;
}

void Box::setheight(double h)
{
  height=h;
}

void Box::setwidth(double w)
{
  width=w;
}
// Implemenet the calcVolume() unction

int Box :: getlength()
{
  return length;
}

int Box :: getheight()
{
  return height;
}

int Box :: getwidth()
{
  return width;
}

int Box::calcVolume() 
{
  return length*height*width;
  
}
