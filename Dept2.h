//문제 3번 Dept.h
#ifndef DEPT_H  // 헤더 파일 중복 포함 방지 매크로 시작
#define DEPT_H  // 헤더 파일 중복 포함 방지 매크로 정의

class Dept {
    int size;       // scores 배열의 크기, 즉 학생 수
    int* scores;    // 동적 할당 받을 정수 배열의 주소, 각 학생의 성적을 저장
    int passCount;  // 60점 이상인 학생 수를 저장

public:
    Dept(int size);            // 생성자: size만큼의 크기를 가진 scores 배열을 동적 할당
    ~Dept();                   // 소멸자: 동적으로 할당된 메모리를 해제

    int getSize() const;       // 학생 수(size)를 반환하는 함수
    int getPassCount() const;  // 60점 이상인 학생 수(passCount)를 반환하는 함수
    void read();               // 학생 성적을 입력받고 passCount를 계산하는 함수
    bool isOver60(int index) const; // 특정 학생(index)의 성적이 60점 이상인지 확인하는 함수
};

#endif  // 헤더 파일 중복 포함 방지 매크로 종료
