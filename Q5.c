#include<stdio.h>
int largest(int *ptr,int n){
    for(int i=1;i<n;++i){
        if (ptr[0]<ptr[i])
        ptr[0]=ptr[i];
    }
    return ptr[0];
    }
int main(int argc, char const *argv[])
{
    int n;
    int arr[10];
    printf("Enter the size of an array :\n");
    scanf("%d",&n);
    printf("\n Enter the elements of an array \n");
    for(int i=0;i<n;++i)
{
    printf("Enter number%d:",i+1);
    scanf("%d \n",&arr[i]);
}
int c=largest(arr,n);
printf("The largest element in an array is :%d",c);
    return 0;
}

