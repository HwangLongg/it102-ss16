#include <stdio.h>
 int n(int *a,int c){
    for (int i = c;i<4;i++){
           a[i]=a[i+1];
           
        }
    }
 int main (){
    int arr[]={1,2,3,4,5};
    int k;
    printf ("moi nhap");
   
    scanf ("%d",&k);
    n(arr,k);
    for (int i =0;i<4;i++){
        printf ("%d",arr[i]);
    }
    return 0;

 }