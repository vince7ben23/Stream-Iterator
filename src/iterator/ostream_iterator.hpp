#pragma once
#include <iostream>
#include <iterator>
using namespace std;

/* The behavior of std::copy
template <class InputIterator, class OutputIterator>
OutputIterator copy(InputIterator first, InputIterator last, OutputIterator result)
{
    while (first != last)
    {
        *result = *first;
        ++result;
        ++first;
    }
    return result;
}
*/

template <class T>
class my_ostream_iterator : public iterator<output_iterator_tag, T>
{
private:
    ostream &ostrm_;
    string delimiter_;
    bool first_element_;

public:
    // define iterator traits, we inherent iterator<output_iterator_tag, T> to save the works.
    // using difference_type = std::ptrdiff_t;
    // using value_type = T;
    // using pointer = T *;
    // using reference = T &;
    // using iterator_category = std::output_iterator_tag;

    my_ostream_iterator(ostream &ostrm, const string &delimiter = " ")
        : ostrm_(ostrm), delimiter_(delimiter), first_element_(true) {}

    my_ostream_iterator &operator*() { return *this; }

    my_ostream_iterator &operator++() { return *this; }

    my_ostream_iterator &operator=(const T &val)
    {
        if (first_element_)
        {
            ostrm_ << val;
            first_element_ = false;
        }
        else
            ostrm_ << delimiter_ << val;

        return *this;
    }
};