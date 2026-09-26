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

    cout << "Enter string, type 'end' at the last word: ";
    getline(cin, text);
    stringstream ss;

    ss << text;
    while (ss >> text)
    {
        if (text == "fail")
        {
            failcount++;
            if (failcount == 3)
            {
                cout << "ALERT!" << endl;
                return 0;
            }
        }
        else
        {
            failcount = 0;
        }
    }
    cout << "OKAY!" << endl;
    return 0;
}