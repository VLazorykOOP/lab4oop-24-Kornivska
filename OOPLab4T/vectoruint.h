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
