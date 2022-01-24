#include <stdio.h>
#include <stdlib.h>
int fib(int n);
int main()
{
    printf("%d", fib(40));
}
int fib(int n){
    int zero=0, first=1;
    for(int i=0; i<n; i++){
        first=zero+first;
        zero=first-zero;
    }
    return zero;
}

