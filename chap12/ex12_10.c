#include <stdio.h>
#include <string.h>

int main() {
    char str[80] = "Straw";

    strcat(str, "Berry"); //문자열 끝에 있는 '\n'은 사라지고 "berry"가 붙음 
    printf("%s\n", str);
    strncat(str, "Piece", 3); //문자열 끝에 있는 '\n'이 사라지고 "piece"의 3번째 문자까지 붙임
    printf("%s\n", str);

    
    printf("str에 들어갈 문자열 입력: ");
    scanf("%s", str);    

    char str2[80] = "clover";
    printf("strcmp(%s, %s) = %d\n", str, str2, strcmp(str, str2) ); //문자열이 같으면 0, 다르면 음수 혹은 양수를 반환 
    
    printf("%d\n", strcmp(str, str2));

    return 0;
}