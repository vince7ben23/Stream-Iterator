#pragma once
#include <iostream>

using namespace std;

template <class T>
class my_istream_iterator
{
private:
    istream &istrm_;
    T value_;

public:
    my_istream_iterator(istream &istrm) : istrm_(istrm)
    {
        istrm_ >> value_;
    }

    T &operator*() { return value_; }

    // operator -> should return either is a pointer or something can become a pointer
    // T *operator->() { return &value_; }

    // Pre-increment operator
    my_istream_iterator &operator++()
    {
        istrm_ >> value_;
        return *this;
    }

    // Post-increment operator
    my_istream_iterator &operator++(int)
    {
        my_istream_iterator &tmp = *this;
        (*this).operator++();
        return tmp;
    }
};