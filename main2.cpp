// ���� 3�� main.cpp
#include <iostream>   // ����� ����� ���� ���
#include "Dept.h"     // Dept Ŭ���� ������ �����ϴ� ���
using namespace std;  // ǥ�� ���ӽ����̽� ���

// ������ Dept ��ü�� �����Ͽ� ���� �����ڸ� ȣ������ ����
// dept ��ü�� 60�� �̻��� �л� ���� ����ϴ� �Լ�
int countPass(const Dept& dept) {
    int count = 0; // 60�� �̻��� �л� ���� ������ ����
    for (int i = 0; i < dept.getSize(); i++) { // �л� ����ŭ �ݺ�
        if (dept.isOver60(i)) { // �л��� ������ 60�� �̻����� Ȯ��
            count++; // 60�� �̻��� ��� count ����
        }
    }
    return count; // 60�� �̻��� �л� �� ��ȯ
}

int main() {
    Dept com(10);  // �� 10���� �л����� �ִ� �а� com ��ü ����
    com.read();    // �л����� ������ �Է¹���
    int n = countPass(com);  // 60�� �̻��� �л� �� ���
    cout << "60�� �̻��� " << n << "���Դϴ�." << endl; // ��� ���

    return 0; // ���α׷� ���� ����
}
