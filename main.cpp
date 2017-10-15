#include <iostream>
#include <vector>
#include "day1stuff/Person.h"
#include "day1stuff/Animal.h"

using namespace std;
using namespace talisman;

void allStuff();

void pointerAndArray();

void printSeconds();

void printVectorAscOrder(vector<int> &vectorOfIntegers);

void printVectorDescOrder(vector<int> &vectorOfIntegers);

void printArray(int *array) {
    for (int i = 0; i < 5; ++i) {
        cout << "i " << i << " value " << *(array + i) <<endl;
    }
}

int main () {

    string chooser = "p";

    Object object;
    if (chooser == "p") {
        cout << "person" << endl;
        Person person;
        person.setAge(10);
        person.setName("liza");

        person.print();

        person.grow();

        person.print();
        object = person;
    } else {
        cout << "animal" << endl;
        Animal animal;
        animal.setName("balu");
        object = animal;
    }

    cout << "person.toString() " << object.toString();

    return 0;
}




