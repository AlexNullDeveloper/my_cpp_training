//
// Created by talismanov on 15.10.2017.
//

#ifndef MY_CPP_TRAINING_SETTINGS_H
#define MY_CPP_TRAINING_SETTINGS_H


#include "PropertiesReader.h"

class Settings {

public:
    static Settings& Instance()
    {
        // согласно стандарту, этот код ленивый и потокобезопасный
        static Settings s;
        return s;
    }

private:
    Settings() {
        PropertiesReader propertiesReader;
        propertiesReader.readFile("../resources/application.properties");
    }  // конструктор недоступен
    ~Settings() {  } // и деструктор

    // необходимо также запретить копирование
    Settings(Settings const&); // реализация не нужна
    Settings& operator= (Settings const&);  // и тут

};


#endif //MY_CPP_TRAINING_SETTINGS_H
