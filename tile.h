#ifndef TILE_H
#define TILE_H

class Tile
{
  private:
    int yLoc_; //y location of tile
    int xLoc_; //x location of tile
    int rank_; //number value of the tile
    int heur_; //heuristic value of the tile

  public:
    void findHeur(int x, int y); //computes heuristic value

    //setters
    void setYLoc(int y);
    void setXLoc(int x);
    void setRank(int rank);

    //getters
    int getRank();
    int getHeur();

    //constructors
    Tile();
    Tile(int x, int y); //overloaded with x and y location

}; //end Tile class
#endif
