//
// Created by pochenyun on 22-8-13.
//

#ifndef _SQLIST_H_
#define _SQLIST_H_
typedef int ElemType;
const int MAX_SIZE = 50;
typedef struct SqList
{
    ElemType data[MAX_SIZE];
    int length;
} SqList;
#endif //_SQLIST_H_
