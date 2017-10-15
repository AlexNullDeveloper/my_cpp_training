//
// Created by talismanov on 15.10.2017.
//

#ifndef MY_CPP_TRAINING_VECTOR_CONTAINER_H
#define MY_CPP_TRAINING_VECTOR_CONTAINER_H


#include "Container.h"
#include "Vector.h"

class Vector_container : public Container {
Vector v;
public:
    Vector_container(int s) : v(s) {}
    ~Vector_container() {}
    double& operator[](int i) { return v[i];}
    int size() const { return v.size();}
};


#endif //MY_CPP_TRAINING_VECTOR_CONTAINER_H
