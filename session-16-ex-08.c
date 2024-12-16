#include <stdio.h>
#include <string.h>
int swap (char *inputString,char *reverseString){
    int j=0;
   for (int i =strlen(inputString)-1;i>=0;i--){
            reverseString[j]=inputString[i];
            j++;

   }
}
int main (){
    char k[]={"hellowworld"};
    char n[100];
    swap (k,n);
    printf ("%s",n);
    return 0;

}