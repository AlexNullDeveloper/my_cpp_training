//
// Created by talismanov on 14.10.2017.
//

#include <iostream>
#include <ctime>
using namespace std;

namespace talisman {
    const int THREE = 3;

    void getSeconds(unsigned long *par);

    void pointerAndArray() {
        int  var[THREE] = {10, 100, 200};
        int  *ptr;

        // let us have array address in pointer.
        ptr = var;

        for (int i = 0; i < THREE; i++) {
            cout << "Address of var[" << i << "] = ";
            cout << ptr << endl;

            cout << "Value of var[" << i << "] = ";
            cout << *ptr << endl;

            // point to the next location
            ptr++;
        }
    }

    void printSeconds() {
        unsigned long sec;
        getSeconds( &sec );

        // print the actual value
        cout << "Number of seconds :" << sec << endl;
    }

    void getSeconds(unsigned long *par) {
        // get the current number of seconds
        *par = time(nullptr);
    }
}

