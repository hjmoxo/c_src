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

void print_book(struct book b1);

int main() {
    struct book b1;
    char temp[100];

    printf("도서명 입력: ");
    //gets(temp);
    b1.title = (char *)malloc(strlen(temp)+1);
    strcpy(b1.title, temp);
    strcpy(b1.author, "서현우");
    b1.page = 663;
    b1.price = 26000;

    print_book(b1);

    return 0;
}

void print_book(struct book b1) {
    
    printf("도서명: %s, 저자: %s, 페이지: %d, 가격: %d\n", 
    b1.title, b1.author, b1.page, b1.price);
}