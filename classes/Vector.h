//
// Created by talismanov on 15.10.2017.
//

#ifndef MY_CPP_TRAINING_VECTOR_H
#define MY_CPP_TRAINING_VECTOR_H


#include <initializer_list>

class Vector {
public:
    Vector(int s);
    double& operator[](int i);
    int size()const;

    ~Vector() { delete[] elem; }

    Vector(std::initializer_list<double>);

    void push_back(double);

private:
    double* elem;
    int sz;
};


#endif //MY_CPP_TRAINING_VECTOR_H
