#ifndef BAYES_H
#define BAYES_H

#include<stdio.h>
#include<stdlib.h>

typedef struct array{
    int len;
    int *array;
} Array;

Array sa2A(int in[]){
	Array t;
	t.len=sizeof(in)/sizeof(int);
	for(int i=0;i<t.len;i++)t.array[i]=in[i];
	return t;
}

#endif