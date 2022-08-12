//
// Created by pochenyun on 22-8-13.
//

#ifndef _03_H_
#define _03_H_

#include "../SqList.h"
/**
 * time O(n)
 * space O(1)
 * speed 13
 * */
void value_x(SqList& L, ElemType x){
    int j = 0;
    int sub_len = 0;
    for(int i = 0; i < L.length; i++){
        if(L.data[i] == x){
            L.data[j] = L.data[i + 1];
            sub_len++;
            continue;
        }

        L.data[j] = L.data[i];
        j++;
    }

    L.length -= sub_len;
}

#endif //_03_H_
