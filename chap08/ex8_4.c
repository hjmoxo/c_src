#include <stdio.h>
#include <string.h>

int main() {
    char str1[80] = "cat";
    char str2[100];

    // printf("최초 문자열: %s\n", str1);
    // printf("문자열 입력: ");
    // scanf("%s", str1);
    // printf("입력 후 문자열: %s\n", str1);

    // for(int i=0; i<80; i++){
    //     printf("%c ", str1[i]);
    // }

    strcpy(str1, "tiger");
    strcpy(str2, str1);
    printf("%s, %s\n", str1, str2);


    return 0;
}