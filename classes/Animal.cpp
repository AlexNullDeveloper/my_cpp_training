//
// Created by talismanov on 14.10.2017.
//

#include "Animal.h"
using namespace talisman;

const string &Animal::getName() const {
    return name;
}

void Animal::setName(const string &name) {
    Animal::name = name;
}

string Animal::toString() {
    return "Animal[name=" + this->name + "]";
}
