#include <stdio.h>

//정렬 알고리즘
int main() {
    int a[5] = {3, 2, 1, 6, 5};
    int i, j, temp;

    for(i=0; i< (sizeof(a)/sizeof(a[0])) - 1; i++) {
        for(j=i+1; j<(sizeof(a)/sizeof(a[0])); j++) {
            if( a[i] > a[j] ) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(i=0; i<5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}