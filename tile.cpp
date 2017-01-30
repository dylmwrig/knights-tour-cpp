#include "tile.h"

//setters
void Tile :: setYLoc(int y)
{
  Tile :: yLoc = y;
} //end setter

void Tile :: setXLoc(int x)
{
  Tile :: xLoc = x;
} //end setter

void Tile :: setValue(int val)
{
  Tile :: value = val;
} //end setter

//getters
int Tile :: getValue()
{
  return value;
} //end getter

int Tile :: getHeur()
{
  return heur;
} //end getter

//find the heuristic value given x and y coordinates
void Tile :: findHeur(int x, int y)
{
  int rtn = 0;
  heur = 0; //would this be done already?

  if ((x < 2) || (x > 5))
  {
    rtn++;
  } //end if

  if ((y < 2) || (y > 5))
  {
    rtn++;
  } //end if

  if ((x == 0) || (x == 7))
  {
    rtn++;
  } //end if

  if ((y == 0) || (y == 7))
  {
    rtn++;
  } //end if
/*
  if ((x == 1) || (x == 6) || (y == 1) || (y == 6))
  {
    rtn++;
  } //end if
*/

  Tile :: heur = rtn;
} //end findHeur

Tile :: Tile()
{
  heur = 0;
  value = -1;
} //end constructor

Tile :: Tile(int x, int y)
{
  xLoc = x;
  yLoc = y;
  value = -1; //default value; is this done by the default constructor already?
  findHeur(x,y);
} //end overloaded
