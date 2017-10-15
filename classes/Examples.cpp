//
// Created by talismanov on 14.10.2017.
//
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <ctime>
#include <iomanip>
#include <algorithm>

using namespace std;
namespace talisman {
    void printSet(const set<string> &setOfNames);

    void printMap(map<string, string> &parameters);

    void printHelloWorld();

    double square(double x);

    void printVector(vector<string> &values);

    void initNames(vector<string> &names);

    void random();

    void printArray();

    void printMyArray(double array[], int size);

    int * populateArray();

    void pointerMagic();

    enum color{red, blue, green};

    void pointerMagic() {
        int  *ptr = NULL;
        cout << "The value of ptr is " << ptr ;


        if(ptr) {
            cout << "succeeds if p is not null ";
        }     // succeeds if p is not null

        if (0) {
            cout << "if(0)";
        }

        if (1) {
            cout << "if(1)";
        }

        if(!ptr) {
            cout << "succeeds if p is null ";
        }    // succeeds if p is null


    }


    void printMyArray(double array[], int size) {

        for (int i = 0; i < size; ++i) {
            cout << "array[i]; " << array[i] << endl;
        }


//    cout << "sizeof(array) " << sizeof(array) << endl;
//    cout << "sizeof(array[0]) " << sizeof(array[0]) << endl;
//
//    for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i) {
//        cout << "array[i] " << array[i];
//    }
//
//    for (auto& item : array) {
//
//    }
//
//
//    for(auto& elem: array){
//
//    }


    }

    void printArray() {
        int n[ 10 ]; // n is an array of 10 integers

        // initialize elements of array n to 0
        for ( int i = 0; i < 10; i++ ) {
            n[ i ] = i + 100; // set element at location i to i + 100
        }
        cout << "Element" << setw( 13 ) << "Value" << endl;

        // output each array element's value
        for ( int j = 0; j < 10; j++ ) {
            cout << setw( 7 )<< j << setw( 13 ) << n[ j ] << endl;
        }
    }

    void random() {
        int i;
        int j;
        // set the seed
        srand( (unsigned)time(nullptr) );
//    srand( 2 );

        /* generate 10  random numbers. */
        for( i = 0; i < 10; i++ ) {
            // generate actual random number
            j = rand();
            cout <<" Random Number : " << j << endl;
        }
    }

    void allStuff() {
        printHelloWorld();

        string name = "aleksander";

        vector<int> integers = {0,1,3};

        string mister {"mr burnes"};

        cout << "mister " << mister << endl;

        for(auto it = integers.begin(); it != integers.end(); ++it) {
            cout << "inside loop " << *it << endl;
        }


        for(auto it = integers.begin(); it != integers.end(); ++it) {
            cout << "inside loop " << *it << endl;
        }

        vector<string> names;
        initNames(names);

        printVector(names);

        set<string> setOfNames;

        setOfNames.insert("alloha");
        setOfNames.insert("petushka");
        setOfNames.insert("alloha");

        printSet(setOfNames);

        map<string, string> parameters;
        parameters.insert(make_pair<string,string>("url", "localhost:8080"));
        parameters.insert(make_pair<string,string>("login","talismanov"));
        parameters.insert(make_pair<string,string>("password","123456"));


        printMap(parameters);
    }




    void initNames(vector<string> &names) {
        names.emplace_back("alexander");
        names.emplace_back("talismanov");
    }

//void printVector(vector<string> &names) {
//    for(auto i = names.begin(); i != names.end(); ++i) {
//        // process i
//
////        cout << "i->at(1) " << i->at(1) << endl;
//
//        string name = *i.base();
//        cout << name << endl; // this will print all the contents of *features*
//    }
//
//
//    for(auto i = names.begin(); i != names.end(); ++i) {
//        // process i
//
//        string name = *i.base();
//        cout << name << endl; // this will print all the contents of *features*
//    }
//
//    for(auto name : names) {
//        cout << "for(auto name : names) { " << name << endl;
//    }
//}


    void printHelloWorld() { std::cout << "Hello, World!" << std::endl; }

    double square(double x) {
        return x * x;
    }

}

