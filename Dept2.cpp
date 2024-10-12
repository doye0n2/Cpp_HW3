// ���� 3�� Dept.cpp
#include "Dept.h" // Dept Ŭ���� ������ �����ϴ� ��� ����
#include <iostream> // ������� ���� iostream ���
using namespace std; // ǥ�� ���ӽ����̽� ���

// ������: �л� ��(size)��ŭ scores �迭�� ���� �Ҵ��ϰ�, passCount�� 0���� �ʱ�ȭ
Dept::Dept(int size) {
    this->size = size;         // ���޹��� size�� ��� ���� size�� �ʱ�ȭ
    scores = new int[size];    // �������� size ũ���� ���� �迭�� �Ҵ�
    passCount = 0;             // 60�� �̻� �л� ���� 0���� �ʱ�ȭ
}

// �Ҹ���: �������� �Ҵ��� scores �迭�� �����Ͽ� �޸� ������ ����
Dept::~Dept() {
    delete[] scores; // �������� �Ҵ��� �迭 �޸� ����
}

// �л� ���� ��ȯ�ϴ� �Լ�
int Dept::getSize() const {
    return size; // ��� ���� size ��ȯ
}

// 60�� �̻��� �л� ���� ��ȯ�ϴ� �Լ�
int Dept::getPassCount() const {
    return passCount; // ��� ���� passCount ��ȯ
}

// �л� ������ �Է¹ް�, 60�� �̻��� �л��� ���� ����ϴ� �Լ�
void Dept::read() {
    cout << size << "���� ���� �Է�>> "; // ����ڿ��� ���� �Է� ��û
    for (int i = 0; i < size; i++) { // �л� ����ŭ �ݺ��Ͽ� ���� �Է�
        cin >> scores[i]; // �л� ���� �Է�
        if (scores[i] >= 60) { // ���� �Է��� ������ 60�� �̻��̸�
            passCount++; // 60�� �̻��� �л� �� ����
        }
    }
}

// Ư�� �л��� ������ 60�� �̻����� Ȯ���ϴ� �Լ�
bool Dept::isOver60(int index) const {
    return scores[index] >= 60; // ���޹��� index�� �л� ������ 60�� �̻����� ���θ� ��ȯ
}
