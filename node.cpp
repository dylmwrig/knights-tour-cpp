//used by singly linked list for taking user input
//therefore, should contain array data (for storing x and y coordinates)
//in addition to one pointer which points to the next node's location

//set each value to null

#include "node.h"
#include <iostream> //used for testing, remove later
//#include <cstddef> nullptr???

Node :: Node()
{
  xLoc_ = 0;
  yLoc_ = 0;
  next_ = 0;
} //end constructor

Node :: Node(int x, int y)
{
  Node :: xLoc_ = x;
  Node :: yLoc_ = y;
} //end overloaded constructor

Node :: ~Node()
{

} //end destructor

//setters
void Node :: setX(int x)
{
  Node :: xLoc_ = x;
} //end setter

void Node :: setY(int y)
{
  Node :: yLoc_ = y;
} //end setter

void Node :: setNext(Node * next)
{
  Node :: next_ = next;
} //end setter

//getters
Node * Node :: getNext()
{
  return next_;
} //end getter

int Node :: getX()
{
  return xLoc_;
} //end getter

int Node :: getY()
{
  return yLoc_;
}
