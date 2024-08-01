#include <stdio.h>
#include <pthread.h>

void* thread_main(void* arg);

int main() {
    pthread_t t_id;
    int thread_param = 5;

    pthread_create(&t_id, NULL, thread_main, (void*)&thread_param); 
    //thread_main는 함수인데 이걸 인자값으로 넘겨줌 그래서 함수 포인터가 필요
    
    sleep(10); puts("end of main");

    return 0;
}

void* thread_main(void* arg) {
    int i;
    int cnt = *((int*)arg); //void로 넘어왔으니깐 int로 형변환

    for(i=0; i<cnt; i++) {
        sleep(1); puts("running thread");
    }

    return NULL;
}
