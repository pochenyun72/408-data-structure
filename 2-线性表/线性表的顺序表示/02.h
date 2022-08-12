//
// Created by pochenyun on 22-8-13.
//

#ifndef _02_H_
#define _02_H_

#include <algorithm>
#include "../SqList.h"

/** space O(1) */
void reverse(SqList& L){
    for(int i = 0; i < L.length / 2; i++){
//        std::swap(L.data[i], L.data[L.length - i - 1]);//多写点吧
        ElemType tmp = L.data[i];
        L.data[i] = L.data[L.length - i - 1];
        L.data[L.length - i - 1] = tmp;
    }
}

#endif //_02_H_
