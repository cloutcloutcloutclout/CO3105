/*
Gregorian calendar

dayofweek = ([23m/9] + d + 4 + y + [z/4] - [z/100] + [z/400] - w) mod 7

d is day

m is month (1-12)

y is year

z = y-1 if month < 3, else = y (year)

w = 0 if month < 3, else = 2
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    int year;
    int day;
    int month;

    // year
    cout << "Enter a year: ";
    cin >> year;
    // day
    cout << "\n"
         << "Enter a day: ";
    cin >> day;
    // month
    cout << "\n"
         << "Enter a month (1-12): ";
    cin >> month;

    // day of the week;
    // z and w as ints
    int z;
    int w;

    // if month < 3 / else
    if (month < 3)
    {
        z = year - 1;
        w = 0;
    }
    else
    {
        z = year;
        w = 2;
    }

    // calculation
    int ans = ((23 * year / 9) + day + 4 + year + (z / 4) - (z / 100) + (z / 400) - w) % 7;

    return 0;
}