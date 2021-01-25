#include <iostream>
#include <string>

using namespace std;

class Payslip
{
private:
    string eName, ePayGrade;
    float eSalary, eOTHours, eOTPay, eGrossPay, eNetPay, eWHTax, eTaxRate, eFixedValues;
    float SSS = 500, PagIbig = 200, PhilHealth = 100;

public:
    void setPayslip(string name, float salary, float OTHours)
    {
        eName = name;
        eSalary = salary;
        eOTHours = OTHours;
    }

    void determinePayGradeAndTaxRate()
    {

        if (eSalary >= 10000 && eSalary < 15000)
        {
            ePayGrade = 'A';
            eTaxRate = 0.10;
        }
        else if (eSalary >= 15000 && eSalary < 20000)
        {
            ePayGrade = 'B';
            eTaxRate = 0.10;
        }
        else if (eSalary >= 20000 && eSalary < 25000)
        {
            ePayGrade = 'A';
            eTaxRate = 0.15;
        }
        else if (eSalary >= 25000 && eSalary < 30000)
        {
            ePayGrade = 'B';
            eTaxRate = 0.15;
        }
        else if (eSalary >= 30000 && eSalary < 35000)
        {
            ePayGrade = 'A';
            eTaxRate = 0.20;
        }
        else if (eSalary >= 35000 && eSalary < 40000)
        {
            ePayGrade = 'B';
            eTaxRate = 0.20;
        }
        else if (eSalary >= 40000 && eSalary < 45000)
        {
            ePayGrade = 'A';
            eTaxRate = 0.25;
        }
        else if (eSalary >= 45000 && eSalary < 50000)
        {
            ePayGrade = 'B';
            eTaxRate = 0.25;
        }
        else if (eSalary >= 50000 && eSalary < 55000)
        {
            ePayGrade = 'A';
            eTaxRate = 0.30;
        }
        else
        {
            eSalary >= 55000;
            ePayGrade = 'B';
            eTaxRate = 0.30;
        }
    }

    void computePay()
    {
        eOTPay = eOTHours * (0.01 * eSalary);
        eGrossPay = eSalary + eOTPay;
        eWHTax = eGrossPay * eTaxRate;
        eFixedValues = SSS + PagIbig + PhilHealth;
        eNetPay = eGrossPay - eWHTax - eFixedValues;
    }

    string getName()
    {
        return eName;
    }

    float getSalary()
    {
        return eSalary;
    }

    string getPayGrade()
    {
        return ePayGrade;
    }

    float getOTHours()
    {
        return eOTHours;
    }

    float getOTPay()
    {
        return eOTPay;
    }

    float getGrossPay()
    {
        return eGrossPay;
    }

    float getWHTax()
    {
        return eWHTax;
    }

    float getNetPay()
    {
        return eNetPay;
    }
};