#include <stdio.h>
int main (){
    int a = 1 ;
    int *ptr = &a;
    printf ("gia tri cua bien %d \n",a);
    printf ("dia chi cua bien %lu \n",&a);
    printf ("gia tri cua bien %d \n",*ptr);
    printf ("dia chi cua bien %lu \n",ptr);
    return 0;

}