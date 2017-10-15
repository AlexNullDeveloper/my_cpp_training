//
// Created by talismanov on 15.10.2017.
//

#ifndef MY_CPP_TRAINING_CONTAINER_H
#define MY_CPP_TRAINING_CONTAINER_H


#include <cmath>

class Container {
public:
    virtual double& operator[](int) = 0;
    virtual int size() const = 0;
    virtual ~Container() {}
};


#endif //MY_CPP_TRAINING_CONTAINER_H
