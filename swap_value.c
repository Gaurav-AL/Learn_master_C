#include <stdio.h>

void valueSwap(int p1, int p2){
    printf("Address of p1 = %p ,Address of p2 = %p\n",&p1,&p2);
    int temp = p1;
    p1 = p2;
    p2 = temp;
}
void referenceSwap(int *p1,int *p2){
    printf("Address of p1 = %p ,Address of p2 = %p\n",p1,p2);
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void main(){
    int a = 10,b=20;
    printf("Before valueSwap a = %d , b = %d\n",a,b);
    valueSwap(a,b);
    printf("After valueSwap a = %d , b = %d\n",a,b);

    printf("Before referenceSwap a = %d , b = %d\n",a,b);
    referenceSwap(&a,&b);
    printf("After referenceSwap a = %d , b = %d\n",a,b);
}