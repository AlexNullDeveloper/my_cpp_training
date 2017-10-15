//
// Created by talismanov on 14.10.2017.
//

#ifndef MY_CPP_TRAINING_PERSON_H
#define MY_CPP_TRAINING_PERSON_H

#include <iostream>
#include "Object.h"

using namespace std;
namespace talisman {
    class Person : public Object {
    private:
        int age;
        string name;

    public:
        int getAge() const;

        void setAge(int age);

        const string &getName() const;

        void setName(const string &name);

        void grow();

        void print();

        string toString() override;

    };
}



#endif //MY_CPP_TRAINING_PERSON_H
