#include<stdio.h>
int evenodd(int a)
{
    if (a%2==0)
    printf("it is an even number");
    else
    printf("it is an odd number");
    return 0;
}
int main(int argc, char const *argv[])
{
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
   int check=evenodd(num);
    return 0;
}
