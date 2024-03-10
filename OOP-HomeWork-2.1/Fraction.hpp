#pragma once
#include<iostream>
class Fraction {
public:
	// геттеры:
	long long Numerator()const { return numerator_;	}
	long long Denominator()const { return denominator_; }
	bool Positive()const { return positive_; }
	// сеттеры:
	void Numerator(long long num) { numerator_ = num; }
	void Denominator(long long den) { denominator_ = den; }
	void Positive(long long pos) { positive_ = pos; }
	// конструктор по умолчанию:
	Fraction() : numerator_{ 0 }, denominator_{ 1 }, positive_{ true } 
	{ };
	// конструктор с параметрами:
	Fraction(long long num, long long den);
	// метод, возвращающий состояние правильности дроби:
	bool CorrectFraction();	
	// метод вывода дроби:
	void showFraction(Fraction fr);
	// метод вывода дроби в виде действительного числа:
	void showRealNum(Fraction fr);
	// метод сложения двух дробей:
	Fraction Sum(Fraction fr1, Fraction fr2);
	// метод сложения дроби и целого числа:
	Fraction SumWithNum(Fraction fr1, long long num);
	// метод вычитания двух дробей:
	Fraction Sub(Fraction fr1, Fraction fr2);
	// метод вычитания из дроби целого числа:
	Fraction SubWithNum(Fraction fr1, long long num);
	// метод умножения двух дробей:
	Fraction Multi(Fraction fr1, Fraction fr2);
	// метод умножения дроби и целого числа:
	Fraction MultiWithNum(Fraction fr1, long long num);
	// метод деления двух дробей:
	Fraction Divide(Fraction fr1, Fraction fr2);
	// метод деления дроби на целое число:
	Fraction DivideWithNum(Fraction fr1, long long num);
	// определение простых чисел:
	bool simpleNum(long long num);
	// сокращение дроби:
	Fraction ShortenFr(Fraction fr);

private:
	long long numerator_;	// числитель	
	long long denominator_;	// знаменатель
	bool positive_;			// знак перед дробью (true - положительный / false - отрицательный)
	long long modul_num;	// модуль числителя
	long long modul_den;	// модуль знаменателя
	void SetModNum() { numerator_ < 0 ? modul_num = -numerator_ : modul_num = numerator_; }			// заполнение модуля числителя
	void SetModDen() { denominator_ < 0 ? modul_den = -denominator_ : modul_den = denominator_; }	// заполнение модуля знаменателя
	void SetPos();			// установка знака дроби
};