//
// Created by pochenyun on 22-8-13.
//

#ifndef _06_H_
#define _06_H_

#include "../SqList.h"
/**
 * start 01:35
 * end   01:45
 * */
bool del_repeat(SqList &L){
    if(L.length <= 0){
        return false;
    }
    ElemType repeat = 0;
    for(int i = 0, j = 1; i < L.length && j < L.length; j++){
        if(L.data[i] != L.data[j]){
            i++;
            L.data[i] = L.data[j];
        }
        repeat++;
    }

    L.length -= repeat;
    return true;
}

#endif //_06_H_
