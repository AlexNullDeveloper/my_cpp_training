#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <algorithm>

using namespace std;

//vector<int> vec;
//
//struct Record {
//    string name;
//};

void printHelloWorld();

double square(double x);

void iterateOverNames(vector<string> &names);

void initNames(vector<string> &names);


void allStuff();

void random();

void printArray();

void printMyArray(double array[], int size);

int * populateArray();

void pointerMagic();

class Person {

private:int age;
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
};

enum color{red, blue, green};

int main() {
//    allStuff();
//
//    map<string, Person*> mapOfPeople;
//    mapOfPeople.insert(make_pair<string,Person>("talismanov",new Person()));

//    random();
//
//    int array[6];
//    int array2[] = {2,3,4,5};
//
//    for (int number : array2) {
//        cout << "number " << number << endl;
//    }
//
////    for (int number : array) {
////        cout << "number " << number << endl;
////    }
//
//    string texts[] = {"Apple", "Banana", "Orange"};
//
//    cout << "sizeof(texts); " << sizeof(texts);
//    cout << "sizeof(texts[0])" << sizeof(texts[0]);
//
//    for( unsigned int a = 0; a < sizeof(texts)/sizeof(texts[0]); a = a + 1 )
//    {
//        cout << "value of a: " << texts[a] << endl;
//    }

//    printArray();

    // an array with 5 elements.
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};



    for (double item : balance) {
        cout << " item "  << item << endl;
    }


//    cout << "sizeof(array) " << sizeof(balance) << endl;
//    cout << "sizeof(array[0]) " << sizeof(balance[0]) << endl;


    int size = sizeof(balance)/sizeof(balance[0]);

//    printMyArray(balance, size);

//    int * populatedArray = populateArray();
//
//
//    for ( int i = 0; i < 5; i++ ) {
//        cout << "*(populatedArray + " << i << ") : ";
//        cout << *(populatedArray + i) << endl;
//    }


    // a pointer to an int.


//    pointerMagic();

    //    a < sizeof(texts)/sizeof(texts[0])


    return 0;
}

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

int * populateArray() {
    int array[] = {1,2,3,4,5};
    return array;
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
    srand( (unsigned)time( NULL ) );
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

    iterateOverNames(names);

    set<string> setOfNames;

    setOfNames.insert("alloha");
    setOfNames.insert("petushka");
    setOfNames.insert("alloha");

    for (auto iter = setOfNames.begin(); iter != setOfNames.end() ; iter++) {

        cout << *iter << endl;
    }

    map<string, string> parameters;
    parameters.insert(make_pair<string,string>("url", "localhost:8080"));
    parameters.insert(make_pair<string,string>("login","talismanov"));
    parameters.insert(make_pair<string,string>("password","123456"));


    for (auto  it = parameters.begin(); it != parameters.end(); it++ )
    {

        cout << it->first  // string (key)
             << ':'
             << it->second   // string's value
             << endl ;
    }
}

void initNames(vector<string> &names) {
    names.push_back("alexander");
    names.push_back("talismanov");
}

void iterateOverNames(vector<string> &names) {
    for(auto i = names.begin(); i != names.end(); ++i) {
        // process i

//        cout << "i->at(1) " << i->at(1) << endl;

        string name = *i.base();
        cout << name << endl; // this will print all the contents of *features*
    }


    for(auto i = names.begin(); i != names.end(); ++i) {
        // process i

        string name = *i.base();
        cout << name << endl; // this will print all the contents of *features*
    }

    for(auto name : names) {
        cout << "for(auto name : names) { " << name << endl;
    }
}


void printHelloWorld() { std::cout << "Hello, World!" << std::endl; }

double square(double x) {
    return x * x;
}