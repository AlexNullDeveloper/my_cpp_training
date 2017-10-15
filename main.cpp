#include <iostream>
#include <vector>
#include "classes/Animal.h"
#include "classes/Person.h"
#include "classes/Vector.h"
#include "util/Out.h"

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

double sqrt_sum(Vector& v);

int main () {

    Vector myVector(10);
    for (int i = 0; i < myVector.size(); ++i) {
        myVector[i] = i;
    }

    cout << "sqrt_sum(myVector)=" << sqrt_sum(myVector) << endl;

    try {
        myVector[myVector.size()] = 7;
    } catch (out_of_range e) {
        Out::println("println out_of_range");
    } catch (bad_alloc badAlloc) {
        cout << badAlloc.what() << endl;
    }


    string chooser = "p";

    Object* object;
    if (chooser == "a") {

        object = new Person(10, "liza");

        cout << "person" << endl;
//        Person person;
//        person.setAge(10);
//        person.setName("liza");
//
//        person.print();
//
//        person.grow();
//
//        person.print();
    } else {
        cout << "animal" << endl;
        object = new Animal("balu");
    }

    cout << "person.toString() " << object->toString();

    return 0;
}




