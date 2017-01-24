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
