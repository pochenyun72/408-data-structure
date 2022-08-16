/**
 * Created by pochenyun on 22-8-16-11-28.
 * end in 35
*/

#ifndef _08_H_
#define _08_H_

#include <algorithm>
#include "../SqList.h"

void reverse(SqList &L, int i, int j){
    while(i < j && i >= 0 && j < L.length){
        std::swap(L[i], L[j]);
    }
}

void trans(SqList &L, int m, int n){
    L.length = m + n;
    reverse(L, 0, m + n - 1);
    reverse(L, 0, m - 1);
    reverse(L, m, m + n - 1);
}

#endif //_08_H_
