#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float fx(float x)
{
return((x*x)-25);
}
int main()
{
        float x0,x1,x2,y0,y1,y2,e=0.0001;
        int i=0;
        printf("\nBisect Method");
        printf("\nEnter value of x0:");
        scanf("%f",&x0);
        printf("\nEnter value of x1:");
        scanf("%f",&x1);
        y0=fx(x0);
        y1=fx(x1);
        if((y0*y1)>0)
        {
                printf("\n\tStarting values unsuitable");
        }
        printf("\n_______________________________________________");
        printf("\n\ti\tx0\tx1\tx2\ty0\ty1\ty2");
        printf("\n_______________________________________________");
        while((fabs((x1-x0)/x1)>e))
        {
                x2=(x0+x1)/2;
                y2=fx(x2);
                printf("\n\t%d\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f",i,x0,x1,x2,y0,y1,y2);
                i++;
                if(y0*y2>0)
                        x0=x2;
                else
                {       
                        x1=x2;
                        y0=fx(x0);
                        y1=fx(x1);
                }
        }
        printf("\n_______________________________________________");
        printf("\n\n\tSolution Converges to a root");
        printf("\n\n\tNumber of iterations=%d",i);
        printf("\n\n\tx2=%.4f y2=%.4f",x2,y2);
        printf("\n_______________________________________________");
        return 0;
}