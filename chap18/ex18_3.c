#include <stdio.h>

int main() {

    FILE *fp;
    char str[] = "banana";
    int i;
    int ch;

    fp = fopen("a.txt", "w");
    
    if (fp == NULL) {
        printf("파일이 열리지 않았습니다\n");
        return 1;
    }

    i = 0;
    while(str[i] != '\0'){ //널 문자가 아니라면 무한반복

        fputc(str[i], fp); //str[i]번지 위치에 글자 입력 
        i++; //i번지 위치 변경
    }
    fputc('\n', fp);
    fclose(fp);

    return 0;
}