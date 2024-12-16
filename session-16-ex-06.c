#include <stdio.h>
int c(int a[],int b){
    for (int i = 0 ; i<5;i++){
        if (a[i]==b){
            printf ("vi tri phan tu can tim la %d",i);
        }
    }
    
}
int main (){
    int d[5]={1,2,3,4,5};
    int k;
    printf ("moi nhap so can tim ");
    scanf ("%d",&k);
    c(d,k);
    return 0;
}