#include <stdio.h>
void main ()
{
    float net, g, a, d;
    printf("Enter gross salary : .\n");
    scanf("%f", &g);

    if (g>10000)
    {
        a=g*0.1;
        d=g*0.03;
    }
    else if (g>5000)
    {
        a=g*0.07;
        d=g*0.02;
    }
      net = g+a-d
      printf("net salary is %f", net);
}
