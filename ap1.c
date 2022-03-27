#include<stdio.h>
#include<stdlib.h>

void main(){
    printf("[----- [Cho Daehyeon] [2016039075] -----]\n");

    int list[5];                // 5개의 정수 저장하는 배열 선언
    int *plist[5] = {NULL,};    // 5개의 정수에 대한 주소 저장하는 배열 선언

    plist[0] = (int *)malloc(sizeof(int));  // plist[0]에 int크기만큼의 메모리 할당하고 int형 데이터 저장

    list[0] = 1;                // list배열 첫 번째 인덱스에 0 저장
    list[1] = 100;              // list배열 두 번재 인덱스에 100 저장

    *plist[0] = 200;            // plist배열 첫 번째 인덱스의 주소가 가리키는 곳에 200 저장

    printf("value of list[0] = %d\n", list[0]);         // list[0]값 출력
    printf("address of list[0] = %p\n", &list[0]);      // list[0]주소 출력
    printf("value of list = %p\n", list);               // list를 가리키는 주소 출력
    printf("address of list(&list) = %p\n", &list);     // list[0]을 가리키는 주소 출력

    printf("-----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);         // list[1]값 출력
    printf("address of list[1] = %p\n", &list[1]);      // list[1]주소 출력
    printf("value of *(list+1) = %d\n", *(list + 1));   // *(list + 1) = list[1] 실제 값
    printf("address of list+1 = %p\n", list+1);         // list + 1 = &list[1]

    printf("-----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);     // *plist[0]값 출력
    printf("&plist[0] = %p\n", &plist[0]);              // plist[0]을 가리키는 포인터 주소 출력
    printf("&plist = %p\n", &plist);                    // plist의 첫 번째 인덱스를 가리키는 주소 출력
    printf("plist = %p\n", plist);                      // value of plist = plist[0]을 가리키는 포인터 주소
    printf("plist[0] = %p\n", plist[0]);                // plist[0]에 저장된 주소 출력
    printf("plist[1] = %p\n", plist[1]);                // 아무런 값도 저장하지 않음
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);

    free(plist[0]);     // 할당받은 메모리 해제

}