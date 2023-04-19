#define MAX(a,b) a > b ? a : b
#define MUL(a,b) a*b
#define MAX_2(a,b) (a)>(b)?(a):(b)
#include <stdio.h>

void main(){
    int a = 10,b=20;

    // Best Case
    int c = MAX(a ,b);
    printf("Maximum of %d and %d is %d\n",a,b,c);

    //Macros expansion troubles
    int d = MUL(a + 2,b);
    printf("Multiplication of %d and %d is %d\n",a,b,d);  //required was 120 but here it is 30 
    //a = 10 + 2, b = 10, therefore a*b <=> 10 + 2 * 20 = 50

    //using second MAX_2 function is best appraoch but it also has anomalies

    int e = MAX_2(++a,++b);
    printf("Maximum of %d and %d is %d\n",a,b,e); // output should be 20 but here it is 22

}
