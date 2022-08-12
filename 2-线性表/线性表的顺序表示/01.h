//
// Created by pochenyun on 22-8-13.
//

#ifndef _01_H_
#define _01_H_

#include <climits>
#include "../SqList.h"

bool del_min(SqList L, ElemType& value) {
    if (L.length) {
        return false;
    }
    int min_order = 0;
    int min_value = INT_MIN;
    for (int i = 0; i < L.length; i++) {
        if (min_value > L.data[i]) {
            min_order = i;
            min_value = L.data[i];
        }
    }

    L.data[min_order] = L.data[L.length - 1];
    L.length--;
    return min_value;
}

#endif //_01_H_
