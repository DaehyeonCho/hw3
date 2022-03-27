#include<stdio.h>
#define MAX_SIZE 100

float sum(float [], int);           // sum 함수 정의
float input[MAX_SIZE], answer;      // 100개의 실수 저장하는 input 배열 선언, 계산값 저장하는 answer 변수 선언
int i;
void main(void){
    printf("[----- [Cho Daehyeon] [2016039075] -----]\n");
    for(i = 0; i < MAX_SIZE; i++)
        input[i] = i;               // input 배열에 0부터 99까지 저장

    printf("address of input = %p\n", input);   // input 배열을 가리키는 주소 출력

    answer = sum(input, MAX_SIZE);              // sum 함수 호출
    printf("THe sum is : %f\n", answer);        // 0부터 99까지 더한 값 출력
}

float sum(float list[], int n){         // sum 함수 정의
    printf("value of list = %p\n", list);       // list가 참조한 배열의 주소 출력
    printf("address of list = %p\n", &list);    // list의 주소 출력

    int i;
    float tempsum = 0;          // tempsum 변수 초기화
    for(i = 0; i < n; i++)
        tempsum += list[i];     // list가 참조한 배열에 저장된 실수를 차례대로 tempsum 변수에 더함
    return tempsum;             // tempsum 반환
}