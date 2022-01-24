#include <stdio.h>
#include <stdlib.h>
int fibRec(int n);
int main()
{
    printf("%d",fibRec(40));
    return 0;
}
int fibRec(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    return fibRec(n-2)+fibRec(n-1);
}
