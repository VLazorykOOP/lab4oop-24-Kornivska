#include "vectoruint.h" // Включення заголовного файлу з описом класу VectorUInt
#include <iostream>

using namespace std;

int main() {
	VectorUInt A(5, 2); // Створення вектора A розміром 5 та ініціалізація всіх його елементів значенням 2
	VectorUInt B(3); // Створення вектора B розміром 3 зі значеннями за замовчуванням
	VectorUInt C; // Створення порожнього вектора C

	// Виведення векторів A, B та C на екран
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl;

	// Виведення кількості створених об'єктів VectorUInt
	cout << "Об'єкти: " << A.count << endl;

	// Створення копії вектора A за допомогою конструктора копіювання
	VectorUInt D(A);

	// Виведення вектора D на екран
	cout << "D: " << D << endl;

	// Виведення кількості об'єктів VectorUInt після створення D
	cout << "Об'єкти: " << A.count << endl;

	
