//
// Created by talismanov on 15.10.2017.
//
#include <cmath>
#include <iosfwd>
#include <istream>
#include <iostream>
#include "../classes/Vector.h"
#include "../classes/Container.h"

using namespace std;

double sqrt_sum(Vector& v) {
    double sum = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += sqrt(v[i]);
    }
    return sum;
}

Vector read(istream& is) {
    Vector v(5);
    for (double d; is >> d ; ) {
        v.push_back(d);
    }
    return v;
}

void use(Container& c) {
    const int sz = c.size();

    for (int i = 0; i < sz; ++i) {
        cout << c[i] << "\n";
    }
}