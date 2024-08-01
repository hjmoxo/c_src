#include <stdio.h>

//얘의 이름은 "구조체"!
struct student
{
    int id;
    char name[50];
    int ko, en, ma;
    int total;
    double score;
    char grade;
};

//정렬 함수
void swap_total(struct student *s);
//출력 함수
void print_student(struct student *s);
//입력 함수
void input_info(struct student *s);

int main() {
    struct student s[5];
    int i;

    //입력 함수
    input_info(s);

    printf("# 정렬 전 데이터... \n");

    //출력 함수
    print_student(s);

    printf("\n");    
    printf("# 정렬 후 데이터...\n");

    //정렬 swap 함수 
    swap_total(s);

    //정렬후 
    for(i=0; i<5; i++) {
        printf("%3d %3s %3d %3d %3d %3d %3.1lf %3c\n", 
        s[i].id, s[i].name, s[i].ko, s[i].en, s[i].ma, s[i].total, s[i].score, s[i].grade);
    }

    return 0;
}

void swap_total(struct student *s) {
    int i;
    struct student temp;

    for(i=0; i<4; i++) {
        
        for(int j=0; j<4-i; j++) {

            if(s[j].total < s[j+1].total) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;

            }
    
        }

    }
    
}

void print_student(struct student *s) {
    int i;

     for(i=0; i<5; i++) {
        printf("%3d %3s %3d %3d %3d %3d %3.1lf %3c\n", 
        s[i].id, s[i].name, s[i].ko, s[i].en, s[i].ma, s[i].total, s[i].score, s[i].grade);
    }
}

void input_info(struct student *s) {
    int i;

    for(i=0; i<5; i++) {
        printf("학번: ");
        scanf("%d", &s[i].id);
        printf("이름: ");
        scanf("%s", s[i].name);
        printf("국어, 영어, 수학 점수: ");
        scanf("%d %d %d", &s[i].ko, &s[i].en, &s[i].ma);

        s[i].total = s[i].ko+s[i].en+s[i].ma;
        s[i].score = (double)s[i].total/3;
        
        if( s[i].score >=  90) { s[i].grade = 'A'; } 
        else if( s[i].score >= 80 && s[i].score < 90 ) { s[i].grade = 'B'; }
        else if( s[i].score >= 70 && s[i].score < 80 ) { s[i].grade = 'C'; }
        else { s[i].grade = 'F'; }

        printf("\n");
    }
}