#include <stdio.h>
#include <string.h>
int ar(int *arr){
    int *ptr = arr;
    for (int i = 0;i<5;i++){
        printf ("arr[%d]=%d",i,*(ptr + i));
    }

}
int main (){
    int b[5]={1,2,3,4,5};
    ar(&b);
    return 0;

}
