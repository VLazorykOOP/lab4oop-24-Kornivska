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
