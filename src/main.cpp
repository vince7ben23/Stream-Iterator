#include <iostream>
#include <string>
#include "iterator/istream_iterator.hpp"

using namespace std;

int main()
{
    my_istream_iterator<int> inputInt(cin);
    int n1, n2, n3, n4;
    n1 = *inputInt;
    inputInt++;
    n2 = *inputInt;
    inputInt++;
    n3 = *inputInt;
    ++inputInt;
    n4 = *inputInt;
    cout << n1 << "," << n2 << "," << n3 << "," << n4 << endl;

    my_istream_iterator<string> inputStr(cin);
    string s1, s2;
    s1 = *inputStr;
    inputStr++;
    s2 = *inputStr;
    cout << s1 << "," << s2 << endl;

    return 0;
}