/*
collatz conjecture.

if odd -> multiply 3, add 1
if even -> divide by 2
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    // declare number
    int collatz;

    // get number
    cout << "enter number to be in collatz conjecture: ";
    cin >> collatz;

    // test
    cout << collatz;

    return 0;
}