//문제 1번 Dept.cpp
#include "Dept.h"
#include <iostream>
using namespace std;

// 생성자: 학생 수(size)를 받아 동적 배열(scores)을 할당하고 passCount를 초기화
Dept::Dept(int size) {
    this->size = size;        // size 값을 초기화
    scores = new int[size];   // size 크기의 동적 배열 할당
    passCount = 0;            // 60점 이상인 학생 수를 0으로 초기화
}

// 복사 생성자 (깊은 복사): 다른 Dept 객체를 받아서 새로운 객체를 생성
Dept::Dept(const Dept& dept) {
    size = dept.size;                // 복사할 객체의 size 값을 가져옴
    scores = new int[size];          // 새로운 메모리 공간을 할당 (깊은 복사)
    passCount = dept.passCount;      // passCount 값도 복사
    for (int i = 0; i < size; i++) { // 각 점수도 복사
        scores[i] = dept.scores[i];
    }
}

// 소멸자: 동적 배열(scores)의 메모리 해제
Dept::~Dept() {
    delete[] scores;  // 동적으로 할당한 배열을 해제하여 메모리 누수 방지
}

// 학생 수 반환 함수: size 값을 반환
int Dept::getSize() const {
    return size;  // 학생 수(size)를 반환
}

// 60점 이상인 학생 수 반환 함수: passCount 값을 반환
int Dept::getPassCount() const {
    return passCount;  // 60점 이상인 학생 수를 반환
}

// 학생 성적을 입력받는 함수: 학생들의 점수를 입력받고, 60점 이상인 학생 수를 계산
void Dept::read() {
    cout << size << "개의 점수 입력>> ";  // 입력 안내 메시지 출력
    for (int i = 0; i < size; i++) {
        cin >> scores[i];                 // 점수 입력
        if (scores[i] >= 60) {            // 60점 이상이면
            passCount++;                  // passCount 증가
        }
    }
}
