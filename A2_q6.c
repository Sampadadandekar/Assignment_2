#include <stdio.h>

void main()
 {
    int s1, s2, s3;
    float total, avg;

    printf("Enter marks for three subjects:\n");
    scanf("%d %d %d", &s1, &s2, &s3);

    if (s1 < 35 || s2 < 35 || s3 < 35) {
        printf("Fail\n");
    } else {
        total = s1 + s2 + s3;
        avg = total / 3.0;

        printf("Total marks = %.2f\n", total);
        printf("Average marks = %.2f\n", avg);

        if (avg >= 70) {
            printf("Distinction\n");
        } else if (avg >= 60) {
            printf("First Class\n");
        } else if (avg >= 50) {
            printf("Second Class\n");
        } else if (avg >= 35) {
            printf("Third Class\n");
        } else {
            printf("Fail\n");
        }
    }

    return 0;
}
