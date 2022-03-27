#include<stdio.h>
#include<stdlib.h>

void main(){
    printf("[----- [Cho Daehyeon] [2016039075] -----]\n");

    int list[5];
    int *plist[5];
    list[0] = 10;
    list[1] = 11;

    plist[0] = (int *)malloc(sizeof(int));      // plist[0]에 int크기만큼 메모리를 할당하고 int형의 데이터 저장

    printf("list[0] \t= %d\n", list[0]);                // list[0]에 들어있는 정수 값 출력
    printf("address of list \t= %p\n", list);           // list를 가리키고 있는 주소 출력
    printf("address of list[0] \t= %p\n", &list[0]);    // list의 첫번째 인덱스를 가리키고 있는 포인터 주소 출력
    printf("address of list + 0 \t= %p\n", list + 0);   // list + 0 = &list[0](주소값)
    printf("address of list + 1 \t= %p\n", list + 1);   // list + 1 = &list[1]
    printf("address of list + 2 \t= %p\n", list + 2);   // list + 2 = &list[2]
    printf("address of list + 3 \t= %p\n", list + 3);   // list + 3 = &list[3]
    printf("address of list + 4 \t= %p\n", list + 4);   // list + 4 = &list[4]
    printf("address of list[4] \t= %p\n", &list[4]);    // list의 마지막 인덱스를 가리키고 있는 포인터 주소 출력

    free(plist[0]);     // 할당받은 메모리 해제
}