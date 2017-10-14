//
// Created by talismanov on 14.10.2017.
//

#ifndef MY_CPP_TRAINING_PERSON_H
#define MY_CPP_TRAINING_PERSON_H

#include <iostream>
#include "Object.h"

using namespace std;

class Person : public Object {
private:
    int age;
    string name;

public:
    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Person::age = age;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Person::name = name;
    }

    void grow() {
        Person::age = getAge() + 1;
    }

    void print() {
        cout << "person.getAge() " << getAge() << " person.getName() " << getName() << endl;
    }

    string toString() {
        return "Person[age=" + to_string(getAge()) + ", name=" + getName() + "]\n";
    }


};


#endif //MY_CPP_TRAINING_PERSON_H
