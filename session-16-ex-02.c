#include <stdio.h>
int swap (int *a , int *b ){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main (){
    int number = 10;
    int number2 = 20;
    swap (&number,&number2);
    printf ("number = %d \n",number);
    printf ("number2 = %d ",number2);
    return 0;
}