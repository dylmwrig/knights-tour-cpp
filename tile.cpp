#include "tile.h"

//setters
Tile :: setYLoc(int y)
{
  Tile :: yLoc = y;
} //end setter

Tile :: setXLoc(int x)
{
  Tile :: xLoc = x;
} //end setter

Tile :: setValue(int val)
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
Tile :: findHeur(int x, int y)
{
  int rtn = 0;
  heur = 0; //would this be done

  if ((x < 2) || (x > 6))
  {
    heur++;
  } //end if

  if ((y < 2) || (y > 6))
  {
    heur++;
  } //end if

  if ((x == 0) || (x == 7))
  {
    heur++;
  } //end if

  if ((y == 0) || (y == 7))
  {
    heur++;
  } //end if

  return rtn;
} //end getHeuristic

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
  heur = findHeur(x,y);
} //end overloaded
