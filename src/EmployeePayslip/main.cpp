#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <locale>
#include "Payslip.h"

using namespace std;

struct group_thousands : numpunct<char>
{
  string do_grouping() const override { return "\3"; }
};

int main()
{
  string name;
  float salary, OTHours;
  bool a, b;
  char choice;

  const auto label_width = 18;
  const auto amt_width = 10;

  do
  {

    cout << "\nPlease provide the correct information.\n\n";
    cout << "Enter Your Name:           ";
    getline(cin, name);

    do
    {

      cout << "Enter Your Salary:         ";
      cin >> salary;

      if (salary < 10000)
      {
        cout << "INVALID ENTRY! Minimum is Php 10,000. Please try again.\n";
      }
      else
      {
        break;
      }

    } while (a = true);

    do
    {

      cout << "Enter Your Overtime Hours: ";
      cin >> OTHours;

      if (OTHours < 1)
      {
        cout << "INVALID ENTRY! Minimum is 1 Hour. Please try again.\n";
      }
      else
      {
        break;
      }

    } while (b = true);

    Payslip employee;
    employee.setPayslip(name, salary, OTHours);
    employee.determinePayGradeAndTaxRate();
    employee.computePay();

    cout << endl;
    cout << "************** EMPLOYEE PAYSLIP **************\n\n";
    cout.imbue(locale(cout.getloc(), new group_thousands));
    cout << "Employee Name:  " << employee.getName() << endl;
    cout << "Basic Salary:   " << setprecision(2) << fixed << "Php " << employee.getSalary() << endl;
    cout << "Pay Grade:      " << employee.getPayGrade() << endl;
    cout.unsetf(ios::floatfield);
    cout << "Overtime Hours: " << employee.getOTHours() << endl;
    cout << "\n---------------------------------------------\n\n";
    cout << setprecision(2) << fixed;
    cout << setw(label_width) << left << "Overtime Pay:" << setw(amt_width) << right << "Php " << employee.getOTPay() << endl;
    cout << setw(label_width) << left << "Gross Pay:" << setw(amt_width) << right << "Php " << employee.getGrossPay() << endl;
    cout << setw(label_width) << left << "Withholding Tax:" << setw(amt_width) << right << "Php " << employee.getWHTax() << endl;
    cout << setw(label_width) << left << "Net Pay:" << setw(amt_width) << right << "Php " << employee.getNetPay() << endl;
    cout << "\n---------------------------------------------\n\n";
    cout << "Would you like to do another computation? (Y/N)\n";
    cin >> choice;
    cin.clear();
    cin.ignore();

  } while (choice != 'N' && choice != 'n');

    //may use _pause();

  system("PAUSE");
  return EXIT_SUCCESS;
}