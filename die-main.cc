/*
*   Author: Gavin Dassatti
*   Date: 1/15/20
*   description: driver file for die class
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "die.h"
using namespace std;

// function prototypes

int main(){
    Die d;

    cout << "Face Value: " << d << endl;
    Die d12(12);
    cout << "Face Value: " << d12 << endl;
    d12.setNumSides(24);
    for(size_t i = 0; i < 6; i++){
        cout << "Roll: " << d12.roll << endl;
    }

    return 0;
}