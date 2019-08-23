#include"bayes.h"

int main()
{    

    //printf("hello world!!");
    int a[] = {3,2,3,7,10};
    
    Array b= Array(a);
    printf("len: %d\n",b.len);
    for (int i=0;i<b.len;i++)
    printf("%d\n",b.array[i]);
}