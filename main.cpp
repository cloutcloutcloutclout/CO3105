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
    float maxratio = 0.0; // the ratio itself as a float so it can be decimal
    int number = 0;       // hold the current i value (a to b) so it'll be a integer between or those if biggest
    int biggestnum;
    int biggestnumber; // hold the value of the biggest ratio

    for (int i = a; i <= b; i++)
    {
        int curr = i;          // current i value in the for loop goes into the while loop instead of infinite breaking
        number = curr;         // number is current value in the for loop and stores it to biggestnum at the end depending on ratio
        int localmaxvalue = 0; // store a local maximum value and put into each loop

        while (curr != 1)
        {
            if (curr % 2 == 0)
            {
                curr = curr / 2;
            }
            else
            {
                curr = curr * 3 + 1;
            }
            if (curr > localmaxvalue)
            {
                localmaxvalue = curr;
                if ((float)localmaxvalue / number > maxratio)
                {
                    maxratio = (float)localmaxvalue / number;
                    biggestnum = number;
                    biggestnumber = localmaxvalue;
                }
            }
        }
    }

    cout << biggestnum << endl;
    cout << biggestnumber << endl;
    cout << maxratio;

    return 0;
}

/*
ORIGINAL PYTHON CODE I USED TO CALCULATE THIS BEFOREHAND

a = int(input("Number one: "))
b = int(input("Number two: "))

maxratio = 0
number = 0
biggestnumber = 0
biggestnum = 0

for i in range(a,b + 1):
  number = i
  while(i != 1):
    if i % 2 == 0:
      i = i / 2
    else:
      i = i * 3 + 1
    if i > biggestnumber:
      biggestnumber = i
      if biggestnumber / number > maxratio:
        maxratio = biggestnumber / number
        biggestnum = number

print(biggestnum)
print(biggestnumber)
print(maxratio)
*/