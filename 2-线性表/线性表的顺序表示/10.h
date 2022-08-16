/**
 * Created by pochenyun on 22-8-16-11-54.
 * end 56
*/

#ifndef _10_H_
#define _10_H_

#include <algorithm>
#include "../SqList.h"
void reverse(SqList &L, int i, int j){
    while(i < j && i >= 0 && j < L.length){
        std::swap(L.data[i], L.data[j]);
    }
}

void trans(SqList &L, int n, int p){
    L.length = n;
    reverse(L, 0, n - 1);
    reverse(L, 0, n - p - 1);
    reverse(L, n - p, n - 1);
}
#endif //_10_H_
