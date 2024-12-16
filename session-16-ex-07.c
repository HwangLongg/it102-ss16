#include <stdio.h>
int ar(int *a){
    for (int i = 0;i<4;i++){
        for (int j = 0;j<4;j++){
            if (a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main (){
    int arr[5]={2,1,5,9,3};
    ar(arr);
    for (int i=0;i<5;i++){
        printf ("%d",arr[i]);
    }
return 0;

}