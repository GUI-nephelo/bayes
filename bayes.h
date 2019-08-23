#ifndef BAYES_H
#define BAYES_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



typedef struct{
    int len;
    int *array;
} Array;


#define Array(in) (Array){(sizeof(in)/sizeof(int)),in}

#endif