#include <stdio.h>

int a;

void main(){
    int a = 20;
    printf("a is %d\n",a);

    {
        int a = 30;
        printf("a is %d\n",a);
    }

    {
        printf("a is %d\n",a);
    }
}