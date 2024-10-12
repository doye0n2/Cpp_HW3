// 문제 3번 Dept.cpp
#include "Dept.h" // Dept 클래스 선언을 포함하는 헤더 파일
#include <iostream> // 입출력을 위한 iostream 헤더
using namespace std; // 표준 네임스페이스 사용

// 생성자: 학생 수(size)만큼 scores 배열을 동적 할당하고, passCount를 0으로 초기화
Dept::Dept(int size) {
    this->size = size;         // 전달받은 size로 멤버 변수 size를 초기화
    scores = new int[size];    // 동적으로 size 크기의 정수 배열을 할당
    passCount = 0;             // 60점 이상 학생 수를 0으로 초기화
}

// 소멸자: 동적으로 할당한 scores 배열을 해제하여 메모리 누수를 방지
Dept::~Dept() {
    delete[] scores; // 동적으로 할당한 배열 메모리 해제
}

// 학생 수를 반환하는 함수
int Dept::getSize() const {
    return size; // 멤버 변수 size 반환
}

// 60점 이상인 학생 수를 반환하는 함수
int Dept::getPassCount() const {
    return passCount; // 멤버 변수 passCount 반환
}

// 학생 성적을 입력받고, 60점 이상인 학생의 수를 계산하는 함수
void Dept::read() {
    cout << size << "개의 점수 입력>> "; // 사용자에게 점수 입력 요청
    for (int i = 0; i < size; i++) { // 학생 수만큼 반복하여 점수 입력
        cin >> scores[i]; // 학생 점수 입력
        if (scores[i] >= 60) { // 만약 입력한 점수가 60점 이상이면
            passCount++; // 60점 이상인 학생 수 증가
        }
    }
}

// 특정 학생의 성적이 60점 이상인지 확인하는 함수
bool Dept::isOver60(int index) const {
    return scores[index] >= 60; // 전달받은 index의 학생 점수가 60점 이상인지 여부를 반환
}
