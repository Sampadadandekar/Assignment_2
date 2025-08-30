#include <stdio.h>

int main() {
    double gs, dPer, dAmt, net;
    printf("Enter gross sales amount: ");
    scanf("%lf", &gs);

    if (gs > 20000)
    {
        dPer = 0.15;
    }
    else if (gs > 10000)
    {
        dPer = 0.10;
    }
    else
    {
        dPer = 0.05;

    dAmt = gs * dPer;
    net = gs - dAmt;


    printf("Gross Sales: %.2f\n", gs);
    printf("Discount Rate: %.0f%%\n", dPer * 100);
    printf("Discount Amount: %.2f\n", dAmt);
    printf("Net Sales: %.2f\n", net);
 }
    return 0;

}
