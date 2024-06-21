#include <iostream>
using namespace std;

// #include "helloworld.h"  // #2

int helloHuman(){

    char name[10];

    cout << "Hello World! \a\n";
    
    cin >> name;

    cout << "Hello " << name << endl;

    return 0;
}