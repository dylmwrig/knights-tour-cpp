//used by singly linked list for taking user input
//therefore, should contain array data (for storing x and y coordinates)
//in addition to one pointer which points to the next node's location

//set each value to null

#include "node.h"
//#include <cstddef> nullptr???

Node :: Node()
{
  xLoc_ = 0;
  yLoc_ = 0;
  next_ = 0;
} //end constructor

Node :: Node(Node * next, int x, int y)
{
  Node :: xLoc_ = x;
  Node :: yLoc_ = y;
  Node :: next_ = next;
} //end overloaded constructor

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
