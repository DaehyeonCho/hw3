#include<stdio.h>

void print1(int *ptr, int rows);

int main(){
    printf("[----- [Cho Daehyeon] [2016039075] -----]\n");
    int one[] = {0, 1, 2, 3, 4};        // 0부터 4까지의 정수를 저장하는 배열 선언

    printf("one = %p\n", one);          // one 배열을 가리키는 주소 출력
    printf("&one = %p\n", &one);        // one 배열 주소 출력
    printf("&one[0] = %p\n", &one[0]);  // one[0]을 가리키는 주소 출력
    printf("\n");
    print1(&one[0], 5);                 // one[0]부터 one[4]까지 각각의 인덱스를 가리키는 주소 차례대로 출력

    return 0;
}

void print1(int *ptr, int rows){        // print1 함수 정의
    int i;
    printf("Address \t Contens\n");
    for(i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i));     // 참조한 배열의 첫 번째 인덱스부터 rows-1 번째 인덱스까지 각각의 인덱스를 가리키는 주소 차례대로 출력
    printf("\n");
}