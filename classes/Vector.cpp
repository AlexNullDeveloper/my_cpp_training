//
// Created by talismanov on 15.10.2017.
//

#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector(int s) {
    if (s < 0) {
        throw length_error{"error"};
    }

    this->elem = new double[s];
    this->sz = s;

    for (int i = 0; i < s; ++i) {
        elem[i] = 0;
    }

}

double& Vector::operator[](int i) {

    if (i < 0 || i >= size()) {
        throw out_of_range{"Vector::operator[]"};
    }

    return elem[i];
}

int Vector::size()const {
    return sz;
}

Vector::Vector(std::initializer_list<double> list) : elem{ new double[list.size()]}, sz{static_cast<int>(list.size())}{
    copy(list.begin(), list.end(), elem);
}

void Vector::push_back(double) {

}
