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

//display the board
void printBoard(Tile board[][8])
{
  for (int i = 0; i < 8; i++)
  {
    std :: cout << "|";
    for (int j = 0; j < 8; j++)
    {
      if (board[i][j].getRank() > -1 &&board[i][j].getRank() < 10)
      {
        std :: cout << "0";
      } //end if

      std :: cout << board[i][j].getRank() << "|";
    } //end for
    std :: cout << "\n"; //newline on new row
  } //end for
} //end printBoard

//knight's tour
//pass in initial x and y location for the knight to start at
//use stack data structure to hold move history
//use heuristics for the first 32 moves
void tour(Tile board[][8], int x, int y)
{
  Stack history;

  int bestX, bestY, bestHeur = 0; //holds loc of best move and best heur for comparisons
  int count = 1; //used to set the value of each tile replaced
  int pathNum = 0; //used for backtracking

  bool keepGoing = true; //break loop when complete
  bool heurCheck = true; //only check heuristics for the first half

  Node * choice = new Node(); //hold the base "choice" node from which each move option will be exhausted

  while (keepGoing)
  {
    //the next two will need to be created on each run through so create them within the loop
    Node options[8]; //there can be no more than 8 move options
    Node * option = new Node(); //store the possible move, goes in "options" array
    int optCount = 0; //holds index of array

    bestHeur = -1;
    pathNum =

    //basic checks which need to be done to check every direction
    //only check heuristic values if we're in the first half of the program
    //if we're not checking heuristics, store the value right away (as we're being exhaustive)
    //first thing to do is check if the tile is even within range
    //simultaneously check if the tile has not been moved to already (marked with a -1)
    if (x > 1 && y > 0 && board[x - 2][y - 1].getRank() == -1 )
    {
      option->setX(x - 2);
      option->setY(y - 1);
      options[]

      if (heurCheck)
      {

      } //end if

      if (board[x - 2][y - 1].getHeur() > bestHeur)
      {
        bestX = (x - 2);
        bestY = (y - 1);
        bestHeur = board[x - 2][y - 1].getHeur();
      } //end if
    } //end if

    if (x > 1 && y < 7)
    {
      if (board[x - 2][y + 1].getRank() == -1 && board[x - 2][y + 1].getHeur() > bestHeur)
      {
        bestX = (x - 2);
        bestY = (y + 1);
        bestHeur = board[x - 2][y + 1].getHeur();
      } //end if
    } //end if

    if (x > 0 && y < 6)
    {
      if (board[x - 1][y + 2].getRank() == -1 && board[x - 1][y + 2].getHeur() > bestHeur)
      {
        bestX = (x - 1);
        bestY = (y + 2);
        bestHeur = board[x - 1][y + 2].getHeur();
      } //end if
    } //end if

    if (x < 7 && y < 6)
    {
      if (board[x + 1][y + 2].getRank() == -1 && board[x + 1][y + 2].getHeur() > bestHeur)
      {
        bestX = (x + 1);
        bestY = (y + 2);
        bestHeur = board[x + 1][y + 2].getHeur();
      } //end if
    } //end if

    if (x < 6 && y < 7)
    {
      if (board[x + 2][y + 1].getRank() == -1 && board[x + 2][y + 1].getHeur() > bestHeur)
      {
        bestX = (x + 2);
        bestY = (y + 1);
        bestHeur = board[x + 2][y + 1].getHeur();
      } //end if
    } //end if

    if (x < 6 && y > 0)
    {
      if (board[x + 2][y - 1].getRank() == -1 && board[x + 2][y - 1].getHeur() > bestHeur)
      {
        bestX = (x + 2);
        bestY = (y - 1);
        bestHeur = board[x + 2][y - 1].getHeur();
      } //end if
    } //end if

    if (x < 7 && y > 1)
    {
      if (board[x + 1][y - 2].getRank() == -1 && board[x + 1][y - 2].getHeur() > bestHeur)
      {
        bestX = (x + 1);
        bestY = (y - 2);
        bestHeur = board[x + 1][y - 2].getHeur();
      } //end if
    } //end if

    if (x > 0 && y > 1)
    {
      if (board[x - 1][y - 2].getRank() == -1 && board[x - 1][y - 2].getHeur() > bestHeur)
      {
        bestX = (x - 1);
        bestY = (y - 2);
        bestHeur = board[x - 1][y - 2].getHeur();
      } //end if
    } //end if

    //if the program tries to overwrite the same x and y location with an incremented value
    //that means that it made a mistake and needs to backtrack
    if (bestX == x && bestY == y)
    {
      history.pop();
      x = history.getTop->getX();
      y = history.getTop->getY();
      count--;
    } //end if

    else if (bestHeur == -1) //otherwise, if there are no options, the tour is complete
    {
      keepGoing = false;
    } //end else if

    else //otherwise it is a good selection
    {
      std :: cout << "count before increment " << count << std :: endl;
      std :: cout << "bestHeur " << bestHeur << std :: endl;
      std :: cout << "x and y before reassignment " << x << " " << y << std :: endl;
      x = bestX;
      y = bestY;
      choice->setX(x);
      choice->setY(y);
      history.push(choice);
      std :: cout << "x and y after reassignment " << x << " " << y << std :: endl;
      board[bestX][bestY].setRank(count);
      printBoard(board);
      count++;
    } //end else
  } //end while

  std :: cout << "best x, best y, bestheur " << bestX << " " << bestY << " " << bestHeur << std :: endl;
  printBoard(board);
}

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

  tour(board, 1, 2);
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
