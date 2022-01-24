#include <stdio.h>
#include <stdlib.h>
int triRec(int n);
int main()
{
    printf("%d", triRec(5));
    return 0;
}

int triRec(int n){
if(n==1){
    return 1;
}
return n+triRec(n-1);
}
