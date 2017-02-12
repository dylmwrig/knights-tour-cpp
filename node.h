//header for node
//used by linked list for input

#ifndef KNIGHT_NODE_H
#define KNIGHT_NODE_H

class Node
{
  private:
    int xLoc_; //holds x location
    int yLoc_; //holds y location
    Node * next_; //pointer to next node
  public:
    Node(); //constructor
    Node(int x, int y); //overloaded
    ~Node(); //destructor

    //setters
    void setX(int x);
    void setY(int y);
    void setNext(Node * next);

    //getters
    Node * getNext(); //return pointer to next node
    int getX(); //returns x location
    int getY(); //returns y location
}; //end Node class

#endif
