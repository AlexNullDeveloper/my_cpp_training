//
// Created by talismanov on 15.10.2017.
//

#ifndef MY_CPP_TRAINING_PROPERTIESREADER_H
#define MY_CPP_TRAINING_PROPERTIESREADER_H

#include <iostream>
#include <map>

using namespace std;

class PropertiesReader {
private:
    map<string, string> properties;
public:
    void readFile(string fileName);

    const map<string, string> &getProperties() const;
};


#endif //MY_CPP_TRAINING_PROPERTIESREADER_H
