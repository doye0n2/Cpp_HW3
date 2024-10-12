//문제 1번 main.cpp
#include <iostream>
#include "Dept.h"
using namespace std;

int main() {
    Dept com(10);  // 총 10명의 학생들로 구성된 Dept 객체 com 생성
    com.read();    // 학생들의 성적을 입력받고 60점 이상인 학생 수를 계산
    cout << "60점 이상은 " << com.getPassCount() << "명입니다." << endl; // 60점 이상인 학생 수 출력

    return 0;      // 프로그램 종료
}
