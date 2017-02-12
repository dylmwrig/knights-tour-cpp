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
#include "stack.h"
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

  bool inputCheck = true; //firstTime checks if we need to set the node that's being
  int xIn = 0, yIn = 0, loopCount = 0;

  Node * head = new Node();
  Node * prevChoice = new Node();

  head->setX(3);

  Stack test;
  std :: cout << "size before push " << test.getSize() << std :: endl;
  test.push(head);
  std :: cout << test.getTop()->getX();
  std :: cout << "\nsize after push " << test.getSize() << std :: endl;
  test.pop();
  std :: cout << "\nsize after pop " << test.getSize() << std :: endl;
  test.pop();
/*
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

      if (loopCount > 1)
      {
        choice->setX(xIn);
        choice->setY(yIn);
        prevChoice->setNext(choice);
        prevChoice = choice;
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

  Node * choice = head;

  //there are more choices as long as the node is not null
  while (choice != 0)
  {
    choice = choice->getNext(); //set current node to next node
  } //end while
*/
} //end main
