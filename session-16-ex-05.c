#include <stdio.h>
void d(int a[],int b,int c){
    a[c]=b;
    for (int i = 0;i<5;i++){
        
        printf ("%d \n",a[i]);
    }
}
int main (){
    int k[5]={1,2,3,4,5};
    int n ,m ;
    printf ("moi nhap");
    scanf ("%d",&n);
    scanf ("%d",&m);
    d(k,n,m);
    return 0;

}