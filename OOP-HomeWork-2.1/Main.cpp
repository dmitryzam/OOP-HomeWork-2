#include<iostream>
#include<cmath>		// для round (округление до N знаков после запятой)
#include"Fraction.hpp"


int main() {
	setlocale(LC_ALL, "RU");
	int x;
	std::cout << "====================\nСложение двух дробей:\n";
	Fraction fr1(3, 15);
	fr1.showFraction(fr1);
	Fraction fr2(4, 18);
	fr2.showFraction(fr2);
	Fraction fr3;	
	fr3 = fr3.Sum(fr1, fr2);
	fr3.showFraction(fr3);
	fr3.showRealNum(fr3);

	std::cout << "====================\nРазность двух дробей:\n";
	Fraction fr4(2, 3);
	fr4.showFraction(fr4);
	Fraction fr5(1, 4);
	fr5.showFraction(fr5);
	Fraction fr6;	
	fr6 = fr6.Sub(fr4, fr5);
	fr6.showFraction(fr6);
	std::cout << "====================\nУмножение двух дробей:\n";
	Fraction fr7(24, 35);
	fr7.showFraction(fr7);
	Fraction fr8(25, 36);
	fr8.showFraction(fr8);
	Fraction fr9;
	fr9 = fr9.Multi(fr7, fr8);
	fr9.showFraction(fr9);

	std::cout << "====================\nДеление двух дробей:\n";
	Fraction fr10(4, 7);
	fr10.showFraction(fr10);
	Fraction fr11(2, 5);
	fr11.showFraction(fr11);
	Fraction fr12;
	fr12 = fr12.Divide(fr10, fr11);
	fr12.showFraction(fr12);

	std::cout << "====================\nСложение дроби и целого числа:\n";
	Fraction fr13(1, 3);
	fr13.showFraction(fr13);
	x = 3;
	std::cout << "x = " << x << '\n';
	Fraction fr14;
	fr14 = fr14.SumWithNum(fr13, x);
	fr14.showFraction(fr14);

	std::cout << "====================\nВычитание из дроби целого числа:\n";
	Fraction fr15(10, 3);
	fr15.showFraction(fr15);
	x = 3;
	std::cout << "x = " << x << '\n';
	Fraction fr20;
	fr20 = fr20.SubWithNum(fr15, x);
	fr20.showFraction(fr20);

	std::cout << "====================\nУмножение дроби и целого числа:\n";
	Fraction fr16(3, 8);
	fr16.showFraction(fr16);
	x = 5;
	std::cout << "x = " << x << '\n';
	Fraction fr17;
	fr17 = fr17.MultiWithNum(fr16, x);
	fr17.showFraction(fr17);

	std::cout << "====================\nДеление дроби на целое число:\n";
	Fraction fr18(5, 9);
	fr8.showFraction(fr18);
	x = 2;
	std::cout << "x = " << x << '\n';
	Fraction fr19;
	fr19 = fr19.DivideWithNum(fr18, x);
	fr19.showFraction(fr19);

	return 0;
}