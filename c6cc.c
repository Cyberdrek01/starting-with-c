#include<stdio.h>
int main()
{
    int i;
    float fact=1.0, r, n_r=0;
    for (i=1;i<8;i++)
    {
        fact = fact * i;
        r = i/fact;
        n_r = n_r + r;
    }

    printf("%f", n_r);
}