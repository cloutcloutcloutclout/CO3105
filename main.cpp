/*

string needs "fail" 3 times in a row and return ALERT! or sum shit

string will be like "ok ok ok fail fail fail ok ok fail ok" probs -> string stream / slice with vector
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    int failcount = 0;
    string text;

    cout << "Enter string: ";
    getline(cin, text);

    cout << text;
    return 0;
}