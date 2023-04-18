#include <stdio.h>
/*
    Void pointer can point to any type of pointers, demonstrating it's usecase.
    It need to type casted to whatever data type it is going to point at,else
    error will be thrown.
*/
enum DATATYPE {
    CHAR,
    INT,
    FLOAT,
    STRING
};

void printValues(void * p, enum DATATYPE type){
    switch(type){
        case CHAR:
            printf("Character is %c\n",*(char*)p);
            break;
        case INT:
            printf("Integer is %d\n",*(int*)p);
            break;
        case STRING:
            printf("String is %s\n",(char*)p);
            break;
        case FLOAT:
            printf("Float is %0.2f\n",*(float*)p);
            break;
        default:
            printf("Unmatched data type");
    }
}

void main(){
    int a = 10;
    char c = 'H';
    char str[] = "Hello my world";
    float pi = 3.14f;

    printValues(&a,INT);
    printValues(&c,CHAR);
    printValues(str,STRING);
    printValues(&pi,FLOAT);
}