#include <stdio.h>

union student {
    int i;
    short sh;
    char ch;
};

int main() {
    union student num = {0x12345678};

    printf("i : %12p\n", num.i);
    printf("sh : %12p\n", num.sh);
    printf("ch : %12p\n", num.ch);

    return 0;
}