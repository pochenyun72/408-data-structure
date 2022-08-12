//
// Created by pochenyun on 22-8-13.
//

#ifndef _07_H_
#define _07_H_

#include "../SqList.h"

/**
 * start 01:51
 * end   02:00
 * */
SqList combine(SqList& L, SqList& M) {
    SqList R;
    int i = 0, j = 0, k = 0;
    while (i < L.length && j < M.length) {
        if (L.data[i] < M.data[j]) {
            R.data[k] = L.data[i];
            i++;
        }
        else {
            R.data[k] = M.data[j];
            j++;
        }
        k++;
    }

    for (; i < L.length; i++, k++) {
        R.data[k] = L.data[i];
    }
    for (; j < M.length; j++, k++) {
        R.data[k] = L.data[j];
    }

    R.length = k;
    return R;
}

#endif //_07_H_
