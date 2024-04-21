#include "vectoruint.h" // ��������� ����������� ����� � ������ ����� VectorUInt
#include <iostream>

using namespace std;

int main() {
	VectorUInt A(5, 2); // ��������� ������� A ������� 5 �� ������������ ��� ���� �������� ��������� 2
	VectorUInt B(3); // ��������� ������� B ������� 3 � ���������� �� �������������
	VectorUInt C; // ��������� ���������� ������� C

	// ��������� ������� A, B �� C �� �����
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl;

	// ��������� ������� ��������� ��'���� VectorUInt
	cout << "��'����: " << A.count << endl;

	// ��������� ��ﳿ ������� A �� ��������� ������������ ���������
	VectorUInt D(A);

	// ��������� ������� D �� �����
	cout << "D: " << D << endl;

	// ��������� ������� ��'���� VectorUInt ���� ��������� D
	cout << "��'����: " << A.count << endl;

	