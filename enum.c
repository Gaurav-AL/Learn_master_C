#include<stdio.h>

enum WEEK{
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};

void main(){
    enum WEEK day;
    printf("Saturday is at %d in week days\n",day=SAT);
    printf("Sunday is at %d in week days\n",day=SUN);
    printf("Wednesday is at %d in week days\n",day=WED);
    printf("Thruday is at %d in week days\n",day=THU);
    printf("Friday is at %d in week days\n",day=FRI);
}