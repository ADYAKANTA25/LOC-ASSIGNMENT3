#include<stdio.h>
int prime(int x, int y){
    if(y==1){
    return 1;
    }
    else{
        if(x%y==0)
        {
            return 0;
        }
        else{
            return prime(x,y-1);
        }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
   int pro=prime(n,n/2);
    if(pro==1)
    printf("%d IS A PRIME NUMBER",n);
    else 
    printf("%d is not a prime number",n);
    return 0;
}

