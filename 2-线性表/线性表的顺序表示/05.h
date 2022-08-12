//
// Created by pochenyun on 22-8-13.
//

#ifndef _05_H_
#define _05_H_

#include "../SqList.h"

/**
 * start 01:20
 * end   01:24
 * */
bool del_s_t(SqList &L, ElemType s, ElemType t){
    if(s >= t || L.length <= 0){
        return false;
    }

    int sub_len = 0;
    for(int i = 0, j = 0; i < L.length; i++){
        if(L.data[i] > s && L.data[i] < t){
            L.data[j] = L.data[i + 1];
            sub_len++;
            continue;
        }

        L.data[j] = L.data[i];
        j++;
    }
    return true;
}

#endif //_05_H_
