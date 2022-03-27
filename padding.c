#include<stdio.h>

struct student{         // student 구조체 선언
    char lastname[13];  // 13바이트
    int studentID;       // 4바이트
    short grade;        // 2바이트
};

int main(){
    printf("[----- [Cho Daehyeon] [2016039075] -----]\n");
    struct student pst; // pst student 구조체 생성

    printf("size of student = %1d\n", sizeof(struct student));  // student 구조체 크기 출력(24바이트)
    printf("size of int = %1d\n", sizeof(int));                 // int 자료형 크기 출력(4바이트)
    printf("size of short = %1d\n", sizeof(short));             // short 자료형 크기 출력(2바이트)

    return 0;
}
