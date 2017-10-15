//
// Created by talismanov on 14.10.2017.
//

#include "Person.h"
using namespace talisman;


string Person::toString() {
    return "Person[age=" + to_string(getAge()) + ", name=" + getName() + "]\n";
}

void Person::setName(const string &name) {
    Person::name = name;
}


void Person::print() {
    cout << "person.getAge() " << getAge() << " person.getName() " << getName() << endl;
}

void Person::grow() {
    Person::age = Person::getAge() + 1;
}

const string &Person::getName() const {
    return name;
}

void Person::setAge(int age) {
    Person::age = age;
}

int Person::getAge() const {
    return age;
}