//문제 1번 Dept.h
#ifndef DEPT_H // 헤더 파일 중복 포함 방지
#define DEPT_H

// Dept 클래스는 학생들의 성적을 저장하고 관리하는 역할을 한다.
class Dept {
    int size;       // 학생 수 (scores 배열의 크기)
    int* scores;    // 학생들의 성적을 저장할 동적 할당된 정수 배열의 주소
    int passCount;  // 60점 이상인 학생의 수

public:
    Dept(int size);                 // 생성자: 학생 수를 인자로 받아 배열을 동적으로 할당하고 초기화
    Dept(const Dept& dept);         // 복사 생성자: 객체를 복사할 때 호출되며, 깊은 복사를 수행
    ~Dept();                        // 소멸자: 동적으로 할당된 메모리를 해제

    int getSize() const;            // 학생 수(size)를 반환하는 함수
    int getPassCount() const;       // 60점 이상인 학생 수(passCount)를 반환하는 함수
    void read();                    // 학생들의 성적을 입력받아 scores 배열에 저장하고 60점 이상인 학생 수를 계산하는 함수
};

#endif // 헤더 파일 끝
