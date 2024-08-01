#include <stdio.h>

int main(int argc, char *argv[]) {
    //argc는 개수를 의미함 ./main clover heart = 3개 
    //int *grav[] 이거의 의미는 (=) char *str[] { "abc", "def" } 문자열 여러개 입력가능 
    //[ ]는 <-가 공백일 경우 입력한 문자열만큼 배열의 크기를 자동으로 정해줘서 
    // ./main 10 20 30 -> 의 결과는 argv[0]=./main [1]=10 [2]=20 

    //atoi(str) -> 문자열을 정수로 변환
    //atof(str) -> 문자열을 실수형으로 변환
    //itoa(a, tmp. 10) -> 변환할 정수, 문자열을 저장할 변수, 변환할 진수 10이면 10진수 2는 2진수

    // printf("argc: %d\n", argc);

    // for(int i=0; i<argc; i++ ) {
    //     printf("argv[%d]: %s\n", i, argv[i]); 
    // }   

    int i;
    int num;

    for(i=0; i<argc; i++) {

        num = argc; 

        if( (num-1)<3 ) {
            printf("잘못된 입력, ./main 을 제외한 3개 이상 입력해주세요.\n");
            return 0;
        }
        else {
            printf("argv[%d]의 값: %s \n", i, argv[i]);
        }
    }

    printf("%s + %s = %s\n", argv[1], argv[2], argv[3] );


    return 0;
}