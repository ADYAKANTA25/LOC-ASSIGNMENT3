#include<stdio.h>
int gcd(int x, int y){
    if (y!=0)
    return gcd(y,x%y);
    else
    return x;
}
int main(int argc, char const *argv[])
{
    int a,b;
    printf("ENTER TWO POSITIVE NOS\n");
    scanf("%d %d",&a,&b);
    printf("GCD OF TWO NUMBER %d AND %d IS %d",a,b,gcd(a,b));
    return 0;
}

