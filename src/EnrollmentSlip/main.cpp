#include <cstdlib>
#include <cstdio>
#include <iostream>
#include "_pause.h"

using namespace std;

int main()
{

  string studentName, studentCourse, yrName;
  int yrLevel;
  float units, unitPrice, tfee, dpayment, balance;

  // Input Info
  cout << "TO ENROLL, PLEASE ENTER YOUR INFORMATION BELOW:" << endl;
  cout << endl;
  cout << "Your Full Name:         ";
  getline(cin, studentName);
  cout << "Your Program/Course:    ";
  getline(cin, studentCourse);
  cout << "Your Year Level (1-5):  ";
  cin >> yrLevel;
  cout << "No. of Units to Enroll: ";
  cin >> units;
  cout << endl;

  // YrLevel Info
  switch (yrLevel)
  {
  case 1:
    (unitPrice = 1500, yrName = "Freshman");
    break;
  case 2:
    (unitPrice = 1800, yrName = "Sophomore");
    break;
  case 3:
    (unitPrice = 2000, yrName = "Junior");
    break;
  case 4:
    (unitPrice = 2300, yrName = "Senior");
    break;
  case 5:
    (unitPrice = 2300, yrName = "Senior");
    break;
  }

  // Fee Calculations

  tfee = units * unitPrice;
  dpayment = 0.30 * tfee;
  balance = tfee - dpayment;

  // Output Info
  cout << endl;
  cout << "******************** ENROLLMENT SLIP ********************" << endl;
  cout << endl;
  cout << "Student Name   : " << studentName << endl;
  cout << "Program/Course : " << studentCourse << endl;
  cout << "Year Name      : " << yrName << endl;
  cout << "No. of Units   : " << units << endl;
  cout << "Tuition Fee    : " << tfee << endl;
  cout << "Downpayment    : " << dpayment << endl;
  cout << "Balance        : " << balance << endl;
  cout << endl;
  cout << "*********************************************************" << endl;
  cout << endl;

  // can use _pause();

  system("PAUSE");
  return EXIT_SUCCESS;
}