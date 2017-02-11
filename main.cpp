/*
 Knight's tour without recursion, giving practice with the stack
 Given an initial position, make a chess knight visit every tile in a board only once
 Use basic knight's tour heuristic (visit the tile with the least amount of entry points) for the first 32 moves
 -following this, turn off the heuristic and find each move exhaustively
 -use backtracking with the stack to make corrections when you go down the wrong path

 In order to get the starting points for the knight, prompt the user and store their desired positions in a singly linked list
 you should not have to ask for how many positions they'll be inputting, so amount is unknown

 save everything in an output file
 */

#include "node.h"
#include "tile.h"
#include <iostream>

//display the board (similar to in my final last semester)
void printBoard(Tile board[][8])
{
  for (int i = 0; i < 8; i++)
  {
    std :: cout << "|";
    for (int j = 0; j < 8; j++)
    {
      std :: cout << board[i][j].getValue() << "|";
    } //end for
    std :: cout << "\n"; //newline on new row
  } //end for
} //end printBoard

int main()
{
  Tile board [8][8];

  //I'm just doing this temporarily; I'm trying to figure out how to efficiently initialize a 2d array to one value
  //but neither of the methods I've used have worked so here we are
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      board[i][j].setXLoc(i);
      board[i][j].setYLoc(j);
      board[i][j].findHeur(i, j);
    } //end for
  } //end for

  printBoard(board);

  //Node * pointer = 0;
  //Node root; //Node * root ??
  //std :: cout << "\n\nroot data " << root.getX();

/*
  int x = 0;
  int y = 2;
  Node * first = new Node (x, y);

  x = 9;
  y = 1;
  Node * second = new Node(x, y);
  first->setNext(second);

  std :: cout << first->getNext()->getX();

  Node * choice = first;

*/

  bool inputCheck = true; //firstTime checks if we need to set the node that's being
  int xIn = 0, yIn = 0, loopCount = 0;

  Node * head = new Node();
  //Node * head = choice; //store the head node
  Node * prevChoice = new Node();
/*
  choice.setX(2);
  head.setNext(choice);
  prevChoice.setX(8);
  choice.setNext(prevChoice);
  std :: cout << "BEFORE CHOICE IS CHANGED " << head.get->getX() << std :: endl;
  choice.setX(3);
  std :: cout << "AFTER " << head->getNext().getX();
  prevChoice.setNext(choice);
  std :: cout << head.getNext().getX() << std :: endl;
  std :: cout << head.getNext().getNext().getX() << std :: endl;
  std :: cout << head.getNext().getNext().getNext().getX();
  */

  //take user input as long as two conditions are met, that the input is a number
  //or if it is not within bounds
  while (inputCheck)
  {
    std :: cout << "Enter initial x and y positions, respectively.\n";
    std :: cout << "When you are done entering inputs, enter a non number or a number out of range.\n";

    std :: cin >> xIn >> yIn;

    if (std :: cin.fail()) //if input cannot be stored as an int
    {
      inputCheck = false;
      std :: cin.clear();
    } //end if

    else //this is a number
    {
      std :: cin.clear();

      if (xIn < 0 || xIn > 7 || yIn < 0 || yIn > 7) //validate range
      {
        inputCheck = false;
        break;
      } //end if

      Node * choice = new Node();

      std :: cout << "INSIDE INPUTCHECK\n";
      std :: cout << "x and y " << xIn << " " << yIn << std :: endl;

      if (loopCount > 1)
      {
        choice->setX(xIn);
        choice->setY(yIn);
        prevChoice->setNext(choice);
        std :: cout << "first if prev then next " << prevChoice->getX() << " " << prevChoice->getY() << " next " << prevChoice->getNext()->getX() << " " << prevChoice->getNext()->getX() << std :: endl;
        prevChoice = choice;
        /*
        if (head->getNext() == 0)
        {
          head->setNext(choice);
        } //end if

        else
        {
          *prevChoice = *choice;
          prevChoice->setNext(choice);
        } //end else
        */

      } //end if

      else if (loopCount == 1)
      {
        choice->setX(xIn);
        choice->setY(yIn);
        head->setNext(choice);
        prevChoice = choice;
        loopCount++;
      } //end else if

      //this is the first loop
      else
      {
        head->setX(xIn);
        head->setY(yIn);
        loopCount++;
      } //end else
    } //end else
  } //end while
/*
  std :: cout << "head before choice assignment " << head->getX() << " " << choice->getY() << std :: endl;
*/

  std :: cout << "AFTER LOOP " << head->getX() << " " << head->getNext()->getX() << " " << head->getNext()->getNext()->getX() << std :: endl;


  Node * choice = head;
  std :: cout << "choice = head x and y " << choice->getX() << " " << choice->getY() << std :: endl;

  std :: cout << "YOU CAN HAVE IT " << choice->getNext()->getX() << std :: endl;


  //there are more choices as long as the node is not null
  while (choice != 0)
  {
    std :: cout << "x and y " << choice->getX() << " " << choice->getY() << std :: endl;
    choice = choice->getNext(); //set current node to next node
  } //end while


/*
  Node * test = new Node();
  Node * test2 = new Node(3,4);
  test->setNext(test2);
  std :: cout << test->getNext()->getX();
  if (test->getNext() == 0)
  {
    std :: cout << "test next is null \n";
  }
  else if (test2->getNext() == 0)
  {
    std :: cout << "test2 next is null\n";
  }
  else{
    std :: cout << "neither is null?";
  }
  */
} //end main
