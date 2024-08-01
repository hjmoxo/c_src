#include <stdio.h>

int main() {
    int ary[3] = { 10, 20, 30 };
    int *pa; //원래는 int* pa;이런형식 pa는 변수명임 근데 int* pa, pb;는 안됨 아나ㅋㅋ 
    int i;

    pa = ary;   
    //그래서 *pa = ary;가 안됨 *pa는 값이니깐 
    //pa는 주소를 가르켜야 하는데 pa가 가르키는 주소(변수)가 없음
    //pa = ary; ary[0]의 주소를 가르키게 해야함 
    //pa = ary[0]도 안됨 pa는 주소를 가르켜야 하는데 ary[0]은 0번지의 값을 뜻하는거임

    printf("배열의 값: ");
    for(i=0; i<3; i++) {
        printf("%d ", *pa);
        pa++;   //(*pa)++; 이러면 10, 11, 12 나옴 연산자 우선순위 때문
    }

    return 0;
}