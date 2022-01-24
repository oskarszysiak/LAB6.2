#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main()
{
    printf("%d",factorial(10));
}

int factorial(int n){
    int result=1;
    while(n>=1){
        result=result*n;
        n--;
    }
    return result;
}
