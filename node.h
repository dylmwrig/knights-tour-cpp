//header for node
//used by linked list for input

 //#ifndef "NODE_H"
//#define "NODE_H"

class Node
{
  private:
    int xLoc_; //holds x location
    int yLoc_; //holds y location
    Node * next_; //pointer to next node
  public:
    Node(); //constructor
    Node(Node * next, int x, int y); //overloaded

  //getters
    Node * getNext(); //return pointer to next node
    int getX(); //returns x location
    int getY(); //returns y location
}; //end Node class

//#endif
