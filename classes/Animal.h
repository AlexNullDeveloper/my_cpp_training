//
// Created by talismanov on 14.10.2017.
//

#ifndef MY_CPP_TRAINING_ANIMAL_H
#define MY_CPP_TRAINING_ANIMAL_H


#include "Object.h"
using namespace std;

namespace talisman {
    class Animal : public Object {
    private:
        string name;
    public:

        Animal() {
            name = "empty animal name";
        }

        Animal(string name) {
            this->name = name;
        }

        const string &getName() const;

        void setName(const string &name);

        string toString() override;
    };
}



#endif //MY_CPP_TRAINING_ANIMAL_H
