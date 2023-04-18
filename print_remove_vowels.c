#include<stdio.h>

int isVowel(int c){
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'O':
        case 'I':
        case 'U':
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