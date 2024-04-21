#include "vectoruint.h" // ��������� ����������� ����� � ������ ����� VectorUInt
#include <iostream>

using namespace std;

int main() {
	VectorUInt A(5, 2); // ��������� ������� A ������� 5 �� ����������� ��� ���� �������� ��������� 2
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
	// ��������������� �� ��������������� ������� D �� ��������� ������� ���������
	D++;
	cout << "D: " << D << endl;
	D--;
	cout << "D: " << D << endl;

	// ������ ����������� ���������� ������� �
	cout << "!C: " << !C << endl;

	// ������� ���������� �������� ������� A
	cout << "~A: " << ~A << endl;
	cout << "~A: " << ~A << endl;

	// ��������� ������� A �� �����
	cout << "A: " << A << endl;

	// ��������� ������������ ������� A
	cout << "-A: " << -A << endl;
	cout << "-A: " << -A << endl;
	// ��������� ������������ �������� �� ��������� �� �����������
	cout << "A+D: " << A + D << endl;
	cout << "A-D: " << A - D << endl;
	cout << "A+1: " << A + 1 << endl;
	cout << "A-1: " << A - 1 << endl;
	cout << "A*D: " << A * D << endl;
	cout << "A*2: " << A * 2 << endl;
	cout << "A/D: " << A / D << endl;
	cout << "A/2: " << A / 2 << endl;
	cout << "A%2: " << A % 2 << endl;
	cout << "A|D: " << (A | D) << endl;
	cout << "A|3: " << (A | 3) << endl;
	cout << "A^D: " << (A ^ D) << endl;
	cout << "A^3: " << (A ^ 3) << endl;

	// ��������� �������� ��������� � ��'������ �� �����������
	A += D;
	cout << "A+=D: " << A << endl;
	A -= D;
	cout << "A-=D: " << A << endl;
	A += 3;
	cout << "A+=3: " << A << endl;
	A -= 3;
	cout << "A-=3: " << A << endl;
	A *= D;
	cout << "A*=D: " << A << endl;
	A /= D;
	cout << "A/=D: " << A << endl;
	A *= 3;
	cout << "A*=3: " << A << endl;
	A /= 3;
	cout << "A/=3: " << A << endl;

	// ��������� ������� L, �� � ��ﳺ� ������� A
	VectorUInt L(A);
	cout << "L: " << L << endl;

	// ��������� ������� �������� ������ � ������ 2
	L %= 2;
	cout << "L%=2: " << L << endl;

	// ��������� ������� �������� ��������� � ������ 20
	L |= 20;
	cout << "L|=20: " << L << endl;

	// ��������� ������� �������� ������������ "���" � ������ 10
	L ^= 10;
	cout << "L^10: " << L << endl;

	// ��������� ��ﳿ ������� A
	VectorUInt copyA(A);

	// ��������� ������� ��'���� VectorUInt
	cout << "��'����: " << A.count << endl;

	// ��������� ������� A �� copyA �� ������ �� ��������
	cout << "A==copyA: " << (A == copyA) << endl;
	cout << "A!=copyA: " << (A != copyA) << endl;

	// ��������� �������� �������� ������� A �� �������� 2
	cout << "A[2]: " << A[2] << endl;

	// ��������� ���� ������� Z �� X
	VectorUInt Z(3, 4);
	VectorUInt X(3, 5);

	// ��������� ������� Z �� X �� �����
	cout << "Z: " << Z << endl;
	cout << "X: " << X << endl;

	// ��������� ������� Z �� X �� �����, �����, ����� ��� ������� �� ����� ��� �������
	cout << "Z > X: " << (Z > X) << endl;
	cout << "Z < X: " << (Z < X) << endl;
	cout << "Z >= X: " << (Z >= X) << endl;
	cout << "Z <= X: " << (Z <= X) << endl;

	return 0;
}

	
