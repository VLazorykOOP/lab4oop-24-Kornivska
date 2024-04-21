#ifndef VECTORUINT_H // ������� ��������� �������� ����������: ��������, �� VECTORUINT_H �� �� ���������
#define VECTORUINT_H // ���������� ������� VECTORUINT_H, ��� �������� ��������� ��������� ������������� �����

#include <iostream> // ��������� ������������� ����� ��� ������������ ����� �� ������ � ���������� ��������

class VectorUInt { // ���������� ����� VectorUInt
private: // ������� �������� ������ �����
	unsigned int* arr; // �������� �� ����� ����������� ����� �����
	unsigned int size; // ����� ������
	int codeError; // ���� ��� ���� �������

public: // ������� ������� ������ �����
	static unsigned int count; // �������� ���� ��� ��������� ������� ��'���� �����
	VectorUInt(); // ����������� �� �������������
	VectorUInt(unsigned int elems); // ����������� � ���������� - ��������� ������� �������� ������
	VectorUInt(unsigned int elems, unsigned int value); // ����������� � ����������� - ��������� ������� �������� ������ �� ���������� ���� ���������
	VectorUInt(VectorUInt& inp); // ����������� ���������
	~VectorUInt(); // ����������#pragma once
	VectorUInt operator++(int); // ���������� ��������� ������������ ����������
	VectorUInt operator--(int); // ���������� ��������� ������������ ����������
	bool operator!(); // ���������� ��������� �������� �����������
	VectorUInt operator~(); // ���������� ��������� ������� �����������
	VectorUInt operator-(); // ���������� ��������� ��'������ �����
	VectorUInt operator=(VectorUInt& input); // ���������� ��������� ���������
	VectorUInt operator+(VectorUInt& input); // ���������� ��������� ��������� �������
	VectorUInt operator+(unsigned int input); // ���������� ��������� ��������� ������� �� ������������ ������ �����

	// �������� ���������� ��������� ������������ ��������, ������ �������� �� �������� ���������

	friend std::ostream& operator<<(std::ostream& os, const VectorUInt& out); // ������ ������� ��� ������ ������� � ����
	friend std::istream& operator>>(std::istream& is, const VectorUInt& in); // ������ ������� ��� ���������� ������� � ������ �����

	// �������� ���������� ��������� ���������, ������������ �� �������

	bool operator>(VectorUInt& input); // �������������� ��������� "�����"
	bool operator>=(VectorUInt& input); // �������������� ��������� "����� ��� �������"
	bool operator<(VectorUInt& input); // �������������� ��������� "�����"
	bool operator<=(VectorUInt& input); // �������������� ��������� "����� ��� �������"
};

#endif // ���������� ��������� �������� ����������: VECTORUINT_H
