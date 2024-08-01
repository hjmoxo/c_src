#include <stdio.h>

int main() {
    int ary[5];

    for(int i=0; i<5; i++) {
        //printf("ary[%d]에 들어갈 정수 입력: ", i);
        ary[i] += i;
    }

    for(int j=0; j<6; j++) {
        printf("%d ", ary[j]);
    }

    return 0;

}
