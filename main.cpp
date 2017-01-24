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

#include <iostream>

//display the board (similar to in my final last semester)
void printBoard(int board[][8])
{
  for (int i = 0; i < 8; i++)
  {
    std :: cout << "|";
    for (int j = 0; j < 8; j++)
    {
      std :: cout << board[i][j] << "|";
    } //end for
    std :: cout << "\n";
  } //end for
} //end printBoard

int main()
{
  //int fill [8] = {-1, -1, -1, -1, -1, -1, -1, -1};
  //int board [8][8] = {fill, fill, fill, fill, fill, fill, fill, fill};

  int board [8][8];

  //I'm just doing this temporarily; I'm trying to figure out how to efficiently initialize a 2d array to one value
  //but neither of the methods I've used have worked so here we are
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      board[i][j] = -1;
    } //end for
  } //end for

  printBoard(board);
} //end main
