#include <stdio.h>

int main() {
    const int KOR=0, ENG=1, MAT=2, SCI=3; 
    int score[3][4] = { {72,80,95,60}, {68,98,83,90}, {75,72,84,90} };
    int total;
    double avg;
    int i,j;

    // for(i=0; i<3; i++) {
    //     printf("4과목의 점수 입력: ");

    //     for(j=0; j<4; j++) {
    //         scanf("%d", &score[i][j]);
    //     }

    // }

    // for(i=0; i<3; i++) {
    //     total =0; 

    //     for(j=0; j<4; j++) {
    //         total += score[i][j];
    //     }

    //     avg = total/4.0;
    //     printf("총점: %d. 평균: %2.lf\n", total, avg);
    // }

    //국어 총점 평균 
    int kor_total = 0;
    double kor_avg = 0.0;

    for(i=0; i<3; i++) {
        kor_total += score[i][KOR];
    }
    kor_avg = kor_total/3.0;
    printf("국어 총점: %d, 평균: %.2lf", kor_total, kor_avg);

    return 0;
}