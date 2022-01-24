#include <stdio.h>
#include <stdlib.h>
int factorialRec(int n);
int main()
{
    printf("%d", factorialRec(3));
}
int factorialRec(int n){
    if(n==1){
        return 1;
    }
    return n*factorialRec(n-1);
}
