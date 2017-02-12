#include "node.h"

#ifndef KNIGHT_STACK_H
#define KNIGHT_STACK_H

#include <cstring> //

class Stack
{
  private:
    Node * top_; //top node
    size_t cur_size_; //size of the stack
  public:
    Stack (void); //constructor

    //TODO destructor may be unecessary
    ~Stack (void); //destructor

    //stack methods
    void push (Node * element);
    void pop (void);

    //getters
    Node * getTop (void) const; //return the top element
    size_t getSize (void) const; //return size
}; //end Stack class
#endif
