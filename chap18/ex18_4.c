#include <stdio.h>

int main() {

    int ch;

    while(1) {
        
        //ch = getchar();
        ch = fgetc(stdin); //stdin이 파일 포인터 
        if (ch == EOF) { 
            printf("EOF가 입력됨\n");
            break; 
        } //EOF는 컨트롤+D

        //putchar(ch);
        fputc(ch, stdout);
    }

    return 0;
}