//
// Created by talismanov on 14.10.2017.
//
using namespace std;

#include <vector>
#include <set>
#include <map>
#include <iterator>
#include "iostream"

namespace talisman {
    void printVector(vector<string> &values) {

        for (auto name : values) {
            cout << "for(auto name : values) { " << name << endl;
        }
    }

    void printSet(const set<string> &setOfNames) {
        for (auto iter = setOfNames.begin(); iter != setOfNames.end(); iter++) {

            cout << *iter << endl;
        }
    }

    void printMap(map<string, string> &parameters) {
        for (auto it = parameters.begin(); it != parameters.end(); it++) {

            cout << it->first  // string (key)
                 << ':'
                 << it->second   // string's value
                 << endl;
        }
    }

    void printVectorDescOrder(vector<int> &vectorOfIntegers) {// Print in reverse order:
        copy(vectorOfIntegers.rbegin(),
             vectorOfIntegers.rend(),
             ostream_iterator<int>(cout, ",")
        );
        cout << "\n";
    }

    void printVectorAscOrder(vector<int> &vectorOfIntegers) {
        copy(vectorOfIntegers.begin(),
             vectorOfIntegers.end(),
             ostream_iterator<int>(cout, ",")
        );
        cout << "\n";
    }
}
