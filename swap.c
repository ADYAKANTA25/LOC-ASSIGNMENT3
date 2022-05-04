#include<stdio.h>
int swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int main(int argc, char const *argv[])
{
    int x,y;
    printf("Enter the values of x ad y \n");
    scanf("%d \n %d",&x,&y);
    printf("\n Before swapping values of x and y are %d and %d",x,y);
    swap(&x,&y);
    printf("\n After swapping, values of x and y are %d,%d",x,y);
    return 0;
}
