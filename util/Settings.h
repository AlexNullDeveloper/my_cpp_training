//
// Created by talismanov on 15.10.2017.
//

#ifndef MY_CPP_TRAINING_SETTINGS_H
#define MY_CPP_TRAINING_SETTINGS_H


#include "PropertiesReader.h"

class Settings {

public:
    static Settings& getInstance()
    {
        // согласно стандарту, этот код ленивый и потокобезопасный
        static Settings s;
        return s;
    }

    void readFile(string fileName);

    string get(string key);

private:
    Settings() {
        readFile("../resources/application.properties");
    }  // конструктор недоступен
    ~Settings() {  } // и деструктор

    // необходимо также запретить копирование
    Settings(Settings const&); // реализация не нужна
    Settings& operator= (Settings const&);  // и тут

    map<string, string> properties;

};


#endif //MY_CPP_TRAINING_SETTINGS_H
