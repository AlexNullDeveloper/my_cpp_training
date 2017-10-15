//
// Created by talismanov on 15.10.2017.
//

#include "PropertiesReader.h"
#include <fstream>

using namespace std;

void PropertiesReader::readFile(string fileName) {
    // open a file in read mode.
    ifstream infile;
    infile.open(fileName, ios::in);

    string str;
    size_t found;
    string key;
    string value;
    map<string, string> prop = getProperties();
    while (getline(infile, str)) {
        found = str.find('=');
        key = str.substr(0, found);
        value = str.substr(found + 1);
        prop.insert(make_pair<string,string>(static_cast<string &&>(key),
                                             static_cast<string &&>(value)));
    }

    cout << "prop.find(\"database.url\")->second " << prop.find("database.url")->second << endl;
    cout << "prop.find(\"database.user\")->second " << prop.find("database.user")->second << endl;
    cout << "prop.find(\"database.password\")->second " << prop.find("database.password")->second << endl;

    // close the opened file.
    infile.close();
}

const map<string, string> &PropertiesReader::getProperties() const {
    return properties;
}
