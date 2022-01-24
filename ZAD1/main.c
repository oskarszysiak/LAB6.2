
#include <stdio.h>
float average(float tab[], int size);
int main()
{
    float tab[]={3,2,3,4,5,67,20.2};
    printf("%f",average(tab, sizeof(tab)/sizeof(float)));
}

float average(float tab[], int size){
    if(size!=0){
        float sum=0;
        for(int i=0; i<size; i++){
            sum=sum+tab[i];
        }
        float avg=sum/size;
        int flo=avg;
        if(flo%2==0){
            printf("Srednia parzysta\n");
        }
        return avg;
    }
}
