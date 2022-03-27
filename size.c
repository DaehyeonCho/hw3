#include<stdio.h>
#include<stdlib.h>

void main(){
    printf("[----- [Cho Daehyeon] [2016039075] -----]\n");
    int **x;        // 더블포인터 변수 선언

    printf("sizeof(x) = %1u\n", sizeof(x));         // 포인터 변수 x의 크기 출력
    printf("sizeof(*x) = %1u\n", sizeof(*x));       // 포인터 변수 *x의 크기 출력
    printf("sizeof(**x) = %1u\n", sizeof(**x));     // int형 공간을 가리키는 포인터이므로 4바이트
}