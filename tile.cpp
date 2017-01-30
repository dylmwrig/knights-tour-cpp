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
//it does this by seeing if the coordinates are within a certain range
//mostly checking for if they are at certain points on the edge of the board
//which means there are less tiles possible to move to that tile from, giving it a greater value
//the reason this is done through a series of consecutive if statements is so that the same
//conditions which would iterate a tile within 2 tiles from the edge will also
//iterate the tiles on the corners
void Tile :: findHeur(int x, int y)
{
  int rtn = 0;
  heur = 0; //would this be done already

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
