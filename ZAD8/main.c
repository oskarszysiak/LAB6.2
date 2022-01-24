#include <stdio.h>
#include <stdlib.h>
void bin(int n);
int main()
{
    bin(345);
    return 0;
}
void bin(int n){
    int tab[400];
    int i=0;
    while(n!=0){
        tab[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d", tab[j]);
    }
}
