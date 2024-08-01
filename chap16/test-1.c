#include <stdio.h>
#include <stdlib.h>

int main() {
    int **matrix = (int **)malloc(4*sizeof(int *)); //포인터 배열

    for(int i=0; i<4; i++) {
        matrix[i] = (int *)malloc(5*sizeof(int));
    }

    for(int i=0; i<4; i++){
        printf("matrix에 정수 입력: ");
        scanf("%d", &matrix[i]);
    }

    return 0;
}