//
//  swap.cpp
//  Activity-19
//
//  Created by Juwon Hong on 10/7/24.
//

#include "swap.h"

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

