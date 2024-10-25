#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include "iterator/istream_iterator.hpp"
#include "iterator/ostream_iterator.hpp"

using namespace std;

int main()
{
    my_ostream_iterator<string> output_it(cout, ", ");
    vector<string> vec{"one", "two", "three", "end"};
    copy(vec.begin(), vec.end(), output_it);
    cout << endl;

    my_istream_iterator<int> input_it(cin);
    int n1, n2, n3, n4;
    n1 = *input_it;
    input_it++;
    n2 = *input_it;
    input_it++;
    n3 = *input_it;
    ++input_it;
    n4 = *input_it;
    cout << n1 << "," << n2 << "," << n3 << "," << n4 << endl;

    my_istream_iterator<string> input_it_2(cin);
    string s1, s2;
    s1 = *input_it_2;
    input_it_2++;
    s2 = *input_it_2;
    cout << s1 << "," << s2 << endl;

    return 0;
}