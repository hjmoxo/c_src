#include <stdio.h>
#include <string.h>


int main() {
    FILE *afp, *bfp, *cfp;

    char aWord[10][20]; //a.txt 단어 저장
    char bWord[10][20]; //b.txt 단어 저장
    char cWord[10][20]; //c.txt 단어 저장
    
    char *ares; //파일 단어 포인터로 읽어오기
    char *bres;
    
    int ch;
    int check[10];

    //포인터 파일 열기
    afp = fopen("a.txt", "r");
    if (afp == NULL) {
        printf("파일이 열리지 않았습니다\n");
        return 1;
    }

    bfp = fopen("b.txt", "r");
    if (afp == NULL) {
        printf("파일이 열리지 않았습니다\n");
        return 1;
    }

    cfp = fopen("c.txt", "w");
    if (afp == NULL) {
        printf("파일이 열리지 않았습니다\n");
        return 1;
    }

    //a.txt랑 b.txt랑 파일 읽어오기 
    for(int i=0; i<10; i++) {
        fscanf(afp, "%s", aWord[i]);
        fscanf(bfp, "%s", bWord[i]);
    }

    int i, j;
    int temp;
    int cnt;
    //문자열 비교 
    for(i=0; i<10; i++) {
        
        for(j=0; j<10; j++) {
            
            if ( strcmp(aWord[j], bWord[i]) == 0 ) { 
                temp = 0;
                break; 
            } //같으면 0
            else { temp = 1; } //다르면 1
        }

        if (temp == 1) {
            strcpy(cWord[cnt], bWord[i]);
            cnt++;
        }
        
    }

    //c,txt에 입력하는 작업 필요 "w"
    for(int i=0; i<10; i++) {
        printf("%s ", cWord[i]);
    }


    //파일 닫기 
    fclose(afp);
    fclose(bfp);
    fclose(cfp);


    return 0;
}


//a.txt fgets 형식으로 읽어오기 
// for(int i=0; i<10; i++) {
//         ares = fgets(aWord[i], sizeof(aWord[0]), afp);
//         i++;
//         if( ares == NULL && bres == NULL ) { break; }
//     }
