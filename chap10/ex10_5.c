#include <stdio.h>

void print_ary(int *pa, int a);

int main() {
    int ary[5] = { 3,20,30,40,50 };

    print_ary(ary, sizeof(ary)/sizeof(ary[0]) );

    return 0;
}

void print_ary(int *pa, int a) {
    int i;

    printf("%d \n", *pa );

    for(i=0; i<*pa; i++) {
        printf("%d ", pa[i] ); //*( pa + i )도 됨 
    }
}