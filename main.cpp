//���� 1�� main.cpp
#include <iostream>
#include "Dept.h"
using namespace std;

int main() {
    Dept com(10);  // �� 10���� �л���� ������ Dept ��ü com ����
    com.read();    // �л����� ������ �Է¹ް� 60�� �̻��� �л� ���� ���
    cout << "60�� �̻��� " << com.getPassCount() << "���Դϴ�." << endl; // 60�� �̻��� �л� �� ���

    return 0;      // ���α׷� ����
}
