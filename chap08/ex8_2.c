#include <stdio.h>

int main() {
    
    int score[3];
    int i;
    int total=1;
    double avg;
    unsigned long count = sizeof(score)/sizeof(score[0]);

    for(i=0; i<count; i++) {
        scanf("%d", &score[i]);
    }

    for(i=0; i<count; i++) {
        total += score[i];
    }
    avg = total/5.0;

    for(i=0; i<count; i++) {
        printf("%5d", score[i]);
    }
    printf("\n");

    printf("평균: %.1lf\n", avg);

    
    return 0;
}