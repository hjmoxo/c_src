#include <stdio.h>

void print_ary_index(int index, int *pa);

int main() {
    int i;
    int num[5];
    int index;

    for(i=0; i<5; i++) {
        printf("정수 입력: ");
        scanf("%d", &num[i]);
    }

    while(1) {
        printf("출력하고 싶은 숫자의 위치를 입력하세요(1~5): ");
        scanf("%d", &index);

        if( index >= 0 && index <=5 ) {
            print_ary_index(index, num);
        }
        else {
            break;
        }
    }

    // while(1) { //0빼고 다 참 
    //     printf("종료하고 싶으면 00 입력\n");
    //     printf("출력하고 싶은 번호 입력: ");
    //     scanf("%d", &a);

    //     if( a == 00 ) break;

    //     printf("num[%d]의 값은: %d\n", a, num[a-1]);
    //     printf("\n");
    // }

    printf("종료");
    
    return 0;
 
}

void print_ary_index(int index, int *ary) {

    printf("num[%d]의 값은: %d\n", index, ary[index-1]);

}