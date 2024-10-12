//���� 3�� Dept.h
#ifndef DEPT_H  // ��� ���� �ߺ� ���� ���� ��ũ�� ����
#define DEPT_H  // ��� ���� �ߺ� ���� ���� ��ũ�� ����

class Dept {
    int size;       // scores �迭�� ũ��, �� �л� ��
    int* scores;    // ���� �Ҵ� ���� ���� �迭�� �ּ�, �� �л��� ������ ����
    int passCount;  // 60�� �̻��� �л� ���� ����

public:
    Dept(int size);            // ������: size��ŭ�� ũ�⸦ ���� scores �迭�� ���� �Ҵ�
    ~Dept();                   // �Ҹ���: �������� �Ҵ�� �޸𸮸� ����

    int getSize() const;       // �л� ��(size)�� ��ȯ�ϴ� �Լ�
    int getPassCount() const;  // 60�� �̻��� �л� ��(passCount)�� ��ȯ�ϴ� �Լ�
    void read();               // �л� ������ �Է¹ް� passCount�� ����ϴ� �Լ�
    bool isOver60(int index) const; // Ư�� �л�(index)�� ������ 60�� �̻����� Ȯ���ϴ� �Լ�
};

#endif  // ��� ���� �ߺ� ���� ���� ��ũ�� ����
