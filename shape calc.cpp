#include <iostream>

using namespace std;

int main()
{
    int year;
    int month;
    bool leap;
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "\nEnter a year: ";
    cin >> year;


    //determines if the year is a leap year
    if (year % 100 == 0 && year % 400 == 0)
        leap = true;
    else if (year % 100 != 0 && year % 4 == 0)
        leap = true;
    else
        leap = false;


    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        cout << "\n31";
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        cout << "\n30";
    else if (month == 2 && leap == true)
        cout << "\n29";
    else if (month == 2 && leap == false)
        cout << "\n28";
    else
        cout << "\nPlease make sure the month is between 1 and 12";


    return 0;
}