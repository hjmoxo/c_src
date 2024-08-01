#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct book
{
    char *title;
    char author[20];
    int page;
    int price;
};

int main() {
    struct book bk;
    char temp[100];

    //bk.title = (char *)malloc(50);

    //strcpy(&bk.title, "이상한 나라의 앨리스");
    printf("도서명 입력: ");
    scanf("%s", bk.title);
    // gets(temp);

    // bk.title = (char *)malloc(strlen(temp+1));
    // strcpy(bk.title, temp); //temp만큼 사이즈가 할당됨 메모리 낭비 없음~ 와 

    printf("저자 입력: ");
    scanf("%s", bk.author);

    printf("페이지수 입력: ");
    scanf("%d", &bk.page);

    printf("가격 입력: ");
    scanf("%d", &bk.price);

    printf("도서명: %s, 저자: %s, 페이지수: %d, 가격: %d\n", 
    bk.title, bk.author, bk.page, bk.price);

    return 0;
}
