#include <stdio.h>
int ketqua (int a,int b,int *sum ){
    *sum = a + b ;
    return *sum;

}
int main (){
    int n = 2 ;
    int m = 3 ;
    int tong ;
   tong= ketqua (n,m,&tong);
   printf ("%d",tong);
   return 0;
}