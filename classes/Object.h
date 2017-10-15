//
// Created by talismanov on 14.10.2017.
//

#ifndef MY_CPP_TRAINING_OBJECT_H
#define MY_CPP_TRAINING_OBJECT_H

#include <iostream>

namespace talisman {
    class Object {
    public:
        virtual std::string toString() = 0;
    };
}



#endif //MY_CPP_TRAINING_OBJECT_H
