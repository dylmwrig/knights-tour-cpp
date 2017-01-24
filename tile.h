tom#ifndef "tile_h"
#define "tile_h"

class Tile
{
  private:
    int yLoc; //y location of tile
    int xLoc; //x location of tile
    int value; //number value of the tile
    int heur; //heuristic value of the tile

    int findHeur(int x, int y); //computes heuristic value

  public:

    //setters
    void setYLoc(int y);
    void setXLoc(int x);
    void setValue(int value);

    //getters
    int getValue();
    int getHeur();

    //constructors
    Tile();
    Tile(int x, int y); //overloaded with x and y location

}; //end Tile class
#endif
