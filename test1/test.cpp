#include "pch.h"
#include "C:\Users\Danylo\Documents\University\OOP\ООП\lab3\oop_lab3_prog\Header.h"

TEST(CFixedPointNumber, EqualZero) {
	CFixedPointNumber a(0, 00);
	CFixedPointNumber b(0, 00);

	CFixedPointNumber sum = a.addiction(b);
	CFixedPointNumber substract = a.substraction(b);
	CFixedPointNumber multiply = a.muptiplying(b);
	CFixedPointNumber division = a.dividing(b);

	EXPECT_EQ(sum.getDoubleOfNumber(), 0);
	EXPECT_EQ(substract.getDoubleOfNumber(), 0);
	EXPECT_EQ(multiply.getDoubleOfNumber(), 0);
	EXPECT_EQ(division.getDoubleOfNumber(), 0);
}

TEST(CFixedPointNumber, intNumbers) {
	CFixedPointNumber a(3, 00);
	CFixedPointNumber b(4, 00);

	CFixedPointNumber sum = a.addiction(b);
	CFixedPointNumber substract = a.substraction(b);
	CFixedPointNumber multiply = a.muptiplying(b);
	CFixedPointNumber division = a.dividing(b);

	EXPECT_EQ(sum.getDoubleOfNumber(), 7.00);
	EXPECT_EQ(substract.getDoubleOfNumber(), -1.00);
	EXPECT_EQ(multiply.getDoubleOfNumber(), 12.00);
	EXPECT_EQ(division.getDoubleOfNumber(), 0.75);
}

TEST(CFixedPointNumber, DoubleNumber) {
	CFixedPointNumber a(5, 53);
	CFixedPointNumber b(3, 65);

	CFixedPointNumber sum = a.addiction(b);
	CFixedPointNumber substract = a.substraction(b);
	CFixedPointNumber multiply = a.muptiplying(b);
	CFixedPointNumber division = a.dividing(b);

	EXPECT_EQ(sum.getDoubleOfNumber(), 9.18);
	EXPECT_EQ(substract.getDoubleOfNumber(), 1.88);
	EXPECT_EQ(multiply.getDoubleOfNumber(), 20.18);
	EXPECT_EQ(division.getDoubleOfNumber(), 1.51);
}

TEST(CFixedPointNumber, DoubleValues) {
	CFixedPointNumber a(5, 89);

	EXPECT_EQ(a.getDoubleOfNumber(), 5.89);
}