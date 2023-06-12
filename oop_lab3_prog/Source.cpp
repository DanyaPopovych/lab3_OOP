#include "Header.h"

CFixedPointNumber::CFixedPointNumber() {
	intN = 0;
	drobN = 0;
}

CFixedPointNumber::CFixedPointNumber(int numberA, int numberB) {
	intN = numberA;
	drobN = numberB;
}

void CFixedPointNumber::setInt(int integer) {
	intN = integer;
}

int CFixedPointNumber::getInt()const {
	return intN;
}
int CFixedPointNumber::getDouble()const {
	return drobN;
}
void CFixedPointNumber::setDouble(double number) {
	intN = (int)(number);
	drobN = (int)((number - intN) * 100);
}
float CFixedPointNumber::getDoubleOfNumber()const {
	double intN1 = (double)(intN);
	double drobN1 = (double)(drobN);
	return (intN1 + drobN1/100);
}
CFixedPointNumber CFixedPointNumber::addiction(const CFixedPointNumber& another)const{
	int intNumber = intN + another.intN;
	int drobNumber = drobN + another.drobN;
	if (drobNumber >= 100) {
		intNumber++;
		drobNumber -= 100;
	}
	return CFixedPointNumber(intNumber, drobNumber);
}
CFixedPointNumber CFixedPointNumber::substraction(const CFixedPointNumber& another)const {
	int intNumber = intN - another.intN;
	int drobNumber = drobN - another.drobN;
	if (drobNumber < 100) {
		intNumber--;
		drobNumber += 100;
	}
	return CFixedPointNumber(intNumber, drobNumber);
}

CFixedPointNumber CFixedPointNumber::muptiplying(const CFixedPointNumber& another)const {
	int intNumber;
	int drobNumber;
	if (drobN == 0 && another.drobN == 0) {
		drobNumber =0;
		intNumber = intN * another.intN;
		
	}
	else if (drobN == 0) {
		intNumber = (intN * another.intN) + (drobN * another.drobN) / 100;
		drobNumber = (intN * another.drobN);
		if (drobNumber >= 100) {
			intNumber++;
			drobNumber-=100;
		}
	}
	else if(another.drobN == 0){
		intNumber = (intN * another.intN) + (drobN * another.drobN) / 100;
		drobNumber = (another.intN * drobN);
		if (drobNumber >= 100) {
			intNumber++;
			drobNumber-=100;
		}
	}
	else if (drobN != 0 && another.drobN != 0) {
		drobNumber = ((another.drobN * drobN) / 100) + (another.drobN * intN) + (another.intN * drobN);

		intNumber = intN * another.intN;
		if (drobNumber >= 100) {
			intNumber++;
			drobNumber -= 100;
		}
	}
	return CFixedPointNumber(intNumber, drobNumber);
}

CFixedPointNumber CFixedPointNumber::dividing(const CFixedPointNumber& another)const {
	int intNumber;
	int drobNumber;
	int totalFractionalPart;
	int anotherTotalFractionalPart;
	totalFractionalPart = intN * 100 + drobN;
	anotherTotalFractionalPart = another.intN * 100 + another.drobN;
	intNumber = totalFractionalPart / anotherTotalFractionalPart;
	drobNumber = ((totalFractionalPart % anotherTotalFractionalPart) * 100) / anotherTotalFractionalPart;
	return CFixedPointNumber(intNumber, drobNumber);
	
}