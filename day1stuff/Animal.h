//
// Created by talismanov on 14.10.2017.
//

#ifndef MY_CPP_TRAINING_ANIMAL_H
#define MY_CPP_TRAINING_ANIMAL_H


#include "Object.h"

class Animal : public Object {
private:
    string name;
public:
    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Animal::name = name;
    }

public:
    string toString() {
        return "Animal[name=" + this->name + "]";
    }
};


#endif //MY_CPP_TRAINING_ANIMAL_H
