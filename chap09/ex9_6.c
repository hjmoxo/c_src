#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    double *pd;

    //pd = p;
    printf("포인트 p: %d\n", p);
    printf("포인트 *p:%d\n", *p);
    printf("%lf\n", *pd);

    return 0;
}