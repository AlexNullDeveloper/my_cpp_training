//
// Created by talismanov on 15.10.2017.
//

#include "Settings.h"

#include <fstream>

using namespace std;

void Settings::readFile(string fileName) {
    // open a file in read mode.
    ifstream infile;
    infile.open(fileName, ios::in);

    string str;
    size_t found;
    string key;
    string value;
//    map<string, string> prop = getProperties();
    while (getline(infile, str)) {
        found = str.find('=');
        key = str.substr(0, found);
        value = str.substr(found + 1);
        properties.insert(make_pair<string,string>(static_cast<string &&>(key),
                                             static_cast<string &&>(value)));
    }

    cout << "prop.find(\"database.url\")->second " << properties.find("database.url")->second << endl;
    cout << "prop.find(\"database.user\")->second " << properties.find("database.user")->second << endl;
    cout << "prop.find(\"database.password\")->second " << properties.find("database.password")->second << endl;

    // close the opened file.
    infile.close();
}

string Settings::get(string key) {

    string value = properties.find(key)->second;
    cout << "value " << value << endl;
    return value;
}