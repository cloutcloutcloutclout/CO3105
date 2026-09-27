/*
Optional,
3n+1 solution again

find starting numbers that lead to very large intermediate values in the sequence, relative to the value
of the starting number.

use case: start with 10, largest number is 16 and its 1.6 times bigger than starting value (10)
a < b, program finds within range [a..b] what is biggest ratio

*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    // get the values a & b
    int a, b;
    cout << "enter two numbers: ";
    cin >> a >> b;

    // use case for a < b
    if (a > b)
    {
        cout << "a is bigger than b, ending...";
        return 0;
    }

    // We need to iterate from a all the way to b -> but also store the biggest ratio of  X/largestnumber = ratio
    // also figured it out

    // variables we need are
    float maxratio = 0;    // the ratio itself as a float so it can be decimal
    int number = 0;        // hold the current i value (a to b) so it'll be a integer between or those if biggest
    int biggestnumber = 0; // largest number in that specific while loop to calc
    int biggestnum;        // hold the value of the biggest ratio

    for (int i = a; i <= b; i++)
    {
        number = i;
        while (i != 1)
        {
            if (i % 2 == 0)
            {
                i = i / 2;
            }
            else
            {
                i = i * 3 + 1;
            }
            if (i > biggestnumber)
            {
                biggestnumber = i;
                if (biggestnumber / number > maxratio)
                {
                    maxratio = biggestnumber / number;
                    biggestnum = number;
                }
            }
        }
    }

    cout << biggestnum << endl;
    cout << biggestnumber << endl;
    cout << maxratio;

    return 0;
}