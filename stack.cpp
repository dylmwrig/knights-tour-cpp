#include "stack.h"
#include "node.h"

#include <iostream> //for error message

Stack :: Stack(void)
{
  top_ = 0; //set the first value to null
  cur_size_ = 0;
} //end constructor

Stack :: ~Stack(void)
{

} //end destructor

//insert a new top element of the stack
//if the stack is empty, just fill the top contents with the element's contents
//if not empty, create a "temporary" node to be added to the stack. Fill its contents with the contents
//of the inserted element and set its next node as the previous top
//finally, set the address of top equal to the address of this new element
void Stack :: push(Node * element)
{
  if (top_ == 0)
  {
    top_ = new Node();
    * top_ = * element; //set the top node equal to the passed in node, by value not reference
  } //end if

  else
  {
    Node * tempTop = new Node();
    * tempTop = * element;
    tempTop->setNext(top_);
    top_ = tempTop;
  } //end else

  cur_size_++; //size is increased by one
} //end push

//remove the top element of the stack
//do nothing if the stack is empty: no need to throw an exception and interrupt the program
//as this stack is being used in a very controlled environment and shouldn't reach that point anyway
//otherwise, reassign the top node to the node before it and delete the previous top element
void Stack :: pop(void)
{
  if (top_ == 0)
  {
    std :: cout << "Unable to remove elements as the stack is empty\n";
  } //end if

  else
  {
    Node * toDelete = top_;
    top_ = top_->getNext();
    delete toDelete;
    cur_size_--;
  } //end else
} //end pop

//getters
//return the top element of the stack
Node * Stack :: getTop(void) const
{
  if (top_ == 0)
  {
    std :: cout << "No elements in stack.\n";
  } //end if

  else
  {
    return top_;
  } //end else
} //end getter

size_t Stack :: getSize(void) const
{
  return cur_size_;
} //end getter
