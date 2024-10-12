//���� 1�� Dept.cpp
#include "Dept.h"
#include <iostream>
using namespace std;

// ������: �л� ��(size)�� �޾� ���� �迭(scores)�� �Ҵ��ϰ� passCount�� �ʱ�ȭ
Dept::Dept(int size) {
    this->size = size;        // size ���� �ʱ�ȭ
    scores = new int[size];   // size ũ���� ���� �迭 �Ҵ�
    passCount = 0;            // 60�� �̻��� �л� ���� 0���� �ʱ�ȭ
}

// ���� ������ (���� ����): �ٸ� Dept ��ü�� �޾Ƽ� ���ο� ��ü�� ����
Dept::Dept(const Dept& dept) {
    size = dept.size;                // ������ ��ü�� size ���� ������
    scores = new int[size];          // ���ο� �޸� ������ �Ҵ� (���� ����)
    passCount = dept.passCount;      // passCount ���� ����
    for (int i = 0; i < size; i++) { // �� ������ ����
        scores[i] = dept.scores[i];
    }
}

// �Ҹ���: ���� �迭(scores)�� �޸� ����
Dept::~Dept() {
    delete[] scores;  // �������� �Ҵ��� �迭�� �����Ͽ� �޸� ���� ����
}

// �л� �� ��ȯ �Լ�: size ���� ��ȯ
int Dept::getSize() const {
    return size;  // �л� ��(size)�� ��ȯ
}

// 60�� �̻��� �л� �� ��ȯ �Լ�: passCount ���� ��ȯ
int Dept::getPassCount() const {
    return passCount;  // 60�� �̻��� �л� ���� ��ȯ
}

// �л� ������ �Է¹޴� �Լ�: �л����� ������ �Է¹ް�, 60�� �̻��� �л� ���� ���
void Dept::read() {
    cout << size << "���� ���� �Է�>> ";  // �Է� �ȳ� �޽��� ���
    for (int i = 0; i < size; i++) {
        cin >> scores[i];                 // ���� �Է�
        if (scores[i] >= 60) {            // 60�� �̻��̸�
            passCount++;                  // passCount ����
        }
    }
}
