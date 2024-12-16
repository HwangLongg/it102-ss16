#include <stdio.h>
 int n(int *a,int b,int c){
    for (int i = 5;i>c;i--){
           a[i]=a[i-1];
           a[c]=b;
        }
    }
 int main (){
    int arr[]={1,2,3,4,5};
    int d,k;
    printf ("moi nhap");
    scanf ("%d",&d);
    scanf ("%d",&k);
    n(arr,d,k);
    for (int i =0;i<6;i++){
        printf ("%d",arr[i]);
    }
    return 0;

 }