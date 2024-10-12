// 문제 3번 main.cpp
#include <iostream>   // 입출력 기능을 위한 헤더
#include "Dept.h"     // Dept 클래스 선언을 포함하는 헤더
using namespace std;  // 표준 네임스페이스 사용

// 참조로 Dept 객체를 전달하여 복사 생성자를 호출하지 않음
// dept 객체의 60점 이상인 학생 수를 계산하는 함수
int countPass(const Dept& dept) {
    int count = 0; // 60점 이상인 학생 수를 저장할 변수
    for (int i = 0; i < dept.getSize(); i++) { // 학생 수만큼 반복
        if (dept.isOver60(i)) { // 학생의 성적이 60점 이상인지 확인
            count++; // 60점 이상일 경우 count 증가
        }
    }
    return count; // 60점 이상인 학생 수 반환
}

int main() {
    Dept com(10);  // 총 10명의 학생들이 있는 학과 com 객체 생성
    com.read();    // 학생들의 성적을 입력받음
    int n = countPass(com);  // 60점 이상인 학생 수 계산
    cout << "60점 이상은 " << n << "명입니다." << endl; // 결과 출력

    return 0; // 프로그램 정상 종료
}
