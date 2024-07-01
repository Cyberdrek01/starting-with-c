#include<stdio.h>
int main()
{
    int num,i, n;
    for(num=1;num<=300;num++)
    {
        n=0;
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                n=1;
                break;
            }
        }
        if(n==0 & num!=1) 
            printf("%d\t", num);
    }

}