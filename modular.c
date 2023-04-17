#include <stdio.h>
int sum(int a, int b){
    return a+b;
}

float avg(int a, int b){
    return (a+b)/2;
}

int diff(int a, int b){
    return a-b;
}

int mul(int a, int b){
    return a*b;
}

/*
    Warning will be given if you put these function below the main function because it will
    not be visible to main then, here global and local scope applies.
*/
void main(){
    printf("sum of two number is %d\n",sum(10,20));
    printf("Average of two number is %.2f\n",avg(10,20));
    printf("Difference of two number is %d\n",diff(10,20));
    printf("Mulitpliation of two number is %d\n",mul(10,20));
   
}