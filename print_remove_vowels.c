#include<stdio.h>

int isVowel(int c){
    switch(c){
        case 'a':
            printf("%c is %d\n",'a','a');
        case 'e':
            printf("%c is %d\n",'e','e');
        case 'i':
            printf("%c is %d\n",'i','i');
        case 'o':
            printf("%c is %d\n",'o','o');
        case 'u':
            printf("%c is %d\n",'u','u');
        case 'A':
            printf("%c is %d\n",'A','A');
        case 'E':
            printf("%c is %d\n",'E','E');
        case 'O':
            printf("%c is %d\n",'O','O');
        case 'I':
            printf("%c is %d\n",'I','I');
        case 'U':
            printf("%c is %d\n",'U','U');
            return 1;
            break;
    }
    return 0;
}

void printVowels(char* str){
    while(*str){
        if(isVowel(*str))
            printf("%c",*str);
        str++;
    }
    printf("\n");
}

void removeVowel(char* str){
    char *curr = str;
    while(*str){
        if(!isVowel(*str))
            *curr++ = *str;
        str++;
    }
    *curr = '\0';
}

void main(){
    char str[] = "Hello Gaurav";
    printVowels(str);

    removeVowel(str);
    printf("%s\n",str);
}