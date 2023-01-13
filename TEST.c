//
// Created by yash on 13/1/23.
//

#include<stdio.h>
#include <malloc.h>
#define MALLOC(p,n,type)  \
p=(type*)malloc(n*sizeof(type))
void main(){
    int a,*p,n=4;
    printf("Welcome to Dynamic memory allocation");
    p=(int*)malloc(sizeof(int)*n);
    *p=5;
    *(p+1)=6;
    printf("Memory is allocated \n");
    printf("The values are %d and %d \n",*p,*(p+1));
    free(p);
    p=(int*)calloc(n,sizeof(int));
    printf("The values after free are %d and %d \n",*p,*(p+1));

}
