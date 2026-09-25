/*

[15 points] Write a program that reads three integers from the standard input,
 and output their average (as a floating point number) to the standard output.
You can assume the input is correct (i.e. actually integers) and each of the integers fit inside a C++ int.
 (Similar assumptions apply to the other questions.)

Sample input 1:
1 2 3

Sample output 1:
2

*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    int total = a + b + c;
    float answer = total / 3.0;
    cout << answer;

    return 0;
}