#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main()
{

  int rows, columns, reservation, x, y;
  rows = 5;
  columns = 7;
  int seat[rows][columns] = {{1, 2, 3, 4, 5, 6, 7}, {8, 9, 10, 11, 12, 13, 14}, {15, 16, 17, 18, 19, 20, 21}, {22, 23, 24, 25, 26, 27, 28}, {29, 30, 31, 32, 33, 34, 35}};
  bool input;

  cout << endl;
  cout << "\t================= SEAT RESERVATION =================" << endl;
  cout << endl;

  do
  {

    //SEAT TABLES
    for (x = 0; x < 5; x++)
    {
      cout << " ";
      for (y = 0; y < 7; y++)
      {
        cout << "\t" << seat[x][y];
      }
      cout << endl;
    }

    // RESERVATION INPUT
    do
    {
      cout << endl;
      cout << "\tEnter the seat number you want to reserve [1 - 35]: ";
      cin >> reservation;
      cout << endl;

      if (reservation <= 0 || reservation >= 36)
      {
        input = false;
        cout << "\t INVALID SEAT NUMBER. Please enter 1 - 35 only." << endl;
        cout << "\t=====================================================" << endl;
        cout << endl;
      }
      else
      {
        input = true;
      }
    } while (!input);

    //RESERVATION OUTPUT
    rows = (reservation - 1) / 7;
    columns = (reservation - 1) % 7;

    if (seat[rows][columns] == 0)
    {
      cout << "\tSEAT ALREADY TAKEN. Please reserve for another number." << endl;
      cout << "\t=====================================================" << endl;
      cout << endl;
    }
    else
    {
      seat[rows][columns] = 0;
      cout << "\t************ SEAT SUCCESSFULLY RESERVED! ************" << endl;
      cout << "\t=====================================================" << endl;
      cout << endl;
    }

  } while (reservation != 0);

  //may use _pause();
  system("PAUSE");
  return EXIT_SUCCESS;
}