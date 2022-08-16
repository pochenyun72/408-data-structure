/**
 * Created by pochenyun on 22-8-16-11-35.
 * end:50
*/

#ifndef _09_H_
#define _09_H_

#include <algorithm>
#include "../SqList.h"
void find(SqList &L, int n, ElemType x){
    L.length = n;
    int l = 0, r = L.length - 1, mid;
    while(l >= 0 && r < L.length && l <= r){
        mid = l + ((r - l) >> 1);
        if(L.data[mid] < x){
            l = mid + 1;
        }
        if(L.data[mid] > x){
            r = mid - 1;
        }
        if(L.data[mid] == x){
            break;
        }
    }

    if(L.data[mid] == x && mid + 1 < L.length){
        std::swap(L.data[mid], L.data[mid + 1]);
    }
    if(l > r){
        L.length += 1;
        int i;
        for(i = L.length - 1; i > r; i++){
            L.data[i + 1] = L.data[i];
        }
        L.data[i + 1] = x;
    }
}

#endif //_09_H_
