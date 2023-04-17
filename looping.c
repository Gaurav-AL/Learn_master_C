#include <stdio.h>

//for-loop
void forLoop(int n){
    for(int i = 1 ; i <= 10;i++){
        printf("%d x %d = %d\n",n,i,(n*i));
    }
}

//while loop

void whileLoop(int n){
    int i = 1;
    while(i <= 10){
       printf("%d x %d = %d\n",n,i,(n*i));
       i += 1; 
    }
}

//do-while loop

void doWhileLoop(int n){
    int i = 1;
    do{
      printf("%d x %d = %d\n",n,i,(n*i));
      i += 1;  
    }while(i <= 10);
}

void main(){
    printf("Printing table using for/while/do-while loop\n");

    printf("Using for loop\n");
    forLoop(10);

    printf("Using while loop");
    whileLoop(10);

    printf("Using do-while loop");
    doWhileLoop(10);
}