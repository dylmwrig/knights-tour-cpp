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
  int x = 4;
  int y = 2;
  Node * first = new Node (x, y);

  x = 9;
  y = 1;
  Node * second = new Node(x, y);
  first->setNext(second);

  std :: cout << first->getNext()->getX();
} //end main
