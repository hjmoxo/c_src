#include <stdio.h>

int main() {
    int a=20;
    int *pa;
    double b;
    char c;

    printf("a의 값: %d\n", a); //포인터로 a의 값을 바꾸기 전 

    pa = &a;    //포인터에 a의 주소 대입
    *pa = 10;   //포인터로 변수 a에 10 대입 

    printf("a의 값: %d\n", a);
    printf("포인터로 a값: %d\n", *pa);
    
    printf("a변수의 주소: %p\n", &a);
    printf("pa에 저장된 변수의 주소: %p\n", pa);

    // printf("int형 변수의 주소: %u\n", &a);
    // printf("double형 변수의 주소: %u\n", &b);
    // printf("char형 변숭의 주소: %u\n", &c);

    return 0;
}