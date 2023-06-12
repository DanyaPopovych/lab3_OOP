#include "Header.h"

int main() {
	CFixedPointNumber a(5, 53);
	CFixedPointNumber b(2, 00);

	CFixedPointNumber sum = a.addiction(b);
	cout << sum.getDoubleOfNumber() << endl;

	CFixedPointNumber sub = a.substraction(b);
	cout << sub.getDoubleOfNumber() << endl;

	CFixedPointNumber mul = a.muptiplying(b);
	cout << mul.getDoubleOfNumber() << endl;
	if (b.getDoubleOfNumber() != 0) {
		CFixedPointNumber div = a.dividing(b);
		cout << div.getDoubleOfNumber() << endl;
	}
	else {
		cout << "Denominator is 0."<< endl;
	}
}