#ifndef VECTORUINT_H // Початок директиви умовного компілятора: перевірка, чи VECTORUINT_H ще не визначено
#define VECTORUINT_H // Визначення маркера VECTORUINT_H, щоб уникнути подвійного включення заголовкового файлу

#include <iostream> // Включення заголовкового файлу для використання вводу та виводу зі стандартної бібліотеки

class VectorUInt { // Визначення класу VectorUInt
private: // Початок приватної секції класу
	unsigned int* arr; // Вказівник на масив беззнакових цілих чисел
	unsigned int size; // Розмір масиву
	int codeError; // Поле для коду помилки

public: // Початок публічної секції класу
	static unsigned int count; // Статичне поле для зберігання кількості об'єктів класу
	VectorUInt(); // Конструктор за замовчуванням
	VectorUInt(unsigned int elems); // Конструктор з параметром - створення вектору заданого розміру
	VectorUInt(unsigned int elems, unsigned int value); // Конструктор з параметрами - створення вектору заданого розміру та заповнення його значенням
	VectorUInt(VectorUInt& inp); // Конструктор копіювання
	~VectorUInt(); // Деструктор#pragma once
	VectorUInt operator++(int); // Перегрузка оператора постфіксного інкремента
	VectorUInt operator--(int); // Перегрузка оператора постфіксного декремента
	bool operator!(); // Перегрузка оператора логічного заперечення
	VectorUInt operator~(); // Перегрузка оператора бітового заперечення
	VectorUInt operator-(); // Перегрузка оператора від'ємного числа
	VectorUInt operator=(VectorUInt& input); // Перегрузка оператора присвоєння
	VectorUInt operator+(VectorUInt& input); // Перегрузка оператора додавання векторів
	VectorUInt operator+(unsigned int input); // Перегрузка оператора додавання вектора та беззнакового цілого числа

	// Додаткові перегрузки операторів арифметичних операцій, бітових операцій та операцій присвоєння

	friend std::ostream& operator<<(std::ostream& os, const VectorUInt& out); // Дружня функція для виводу вектора в потік
	friend std::istream& operator>>(std::istream& is, const VectorUInt& in); // Дружня функція для зчитування вектора з потоку вводу

	// Додаткові перегрузки операторів порівняння, індексування та виклику

	bool operator>(VectorUInt& input); // Перевантаження оператора "більше"
	bool operator>=(VectorUInt& input); // Перевантаження оператора "більше або дорівнює"
	bool operator<(VectorUInt& input); // Перевантаження оператора "менше"
	bool operator<=(VectorUInt& input); // Перевантаження оператора "менше або дорівнює"
};

#endif // Завершення директиви умовного компілятора: VECTORUINT_H
