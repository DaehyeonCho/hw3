#include <stdio.h>

struct student1{        // student1 구조체 정의
    char lastName;
    int studentID;
    char grade;
};
typedef struct{         // typedef로 student2 구조체 정의
    char lastName;
    int studentID;
    char grade;
} student2;             // 구조체 별칭 정의

int main(){
    printf("[----- [Cho Daehyeon] [2016039075] -----]\n");
    struct student1 st1 = {'A', 100, 'A'};      // struct 키워드를 이용해 구조체 선언

    printf("st1.lastName = %c\n", st1.lastName);    // 점으로 구조체 멤버에 접근
    printf("st1.studentID = %d\n", st1.studentID);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'};     // 구조체 별칭 student2로 st2 변수 선언

    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentID = %d\n", st2.studentID);
    printf("st2.grade %c\n", st2.grade);

    student2 st3;
    st3 = st2;          // st3 구조체에 st2 구조체의 내용 복사

    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentID = %d\n", st3.studentID);
    printf("st3.grade %c\n", st3.grade);

    /*
    if(st3 == st2)          // 구조체는 == 연산자로 동등성을 검사할 수 없음
        printf("equal\n");
    else
        printf("not equal\n");
    */
    return 0;
}