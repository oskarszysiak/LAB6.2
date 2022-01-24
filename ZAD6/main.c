#include <stdio.h>
#include <stdlib.h>
int tri(int n);
int main()
{
 printf("%d",tri(5));
}
int tri(int n){
int sum=0;
while(n>0){
    sum=sum+n;
    n--;
}
return sum;
}
