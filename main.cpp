//
//  main.cpp
//  Activity-19
//
//  Created by Juwon Hong on 10/7/24.
//

#include <iostream>
#include "swap.h"
using namespace std;

int main() {
    int x = 60, y = 20;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(&x, &y);

    cout << "After swap: x = " << x << ", y = " << y << endl;

    return 0;
}

