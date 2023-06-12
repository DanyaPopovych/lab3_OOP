#include <iostream>
using namespace std;
class CFixedPointNumber
{
private:
    int intN;
    int drobN;
    
public:
    CFixedPointNumber();
    CFixedPointNumber(int numberA, int numberB);
    void setInt(int intN);
    int getInt()const;
    int getDouble()const;
    void setDouble(double number);
    float getDoubleOfNumber()const;
    CFixedPointNumber addiction(const CFixedPointNumber& another)const;
    CFixedPointNumber substraction(const CFixedPointNumber& another)const;
    CFixedPointNumber dividing(const CFixedPointNumber& another)const;
    CFixedPointNumber muptiplying(const CFixedPointNumber& another)const;
    };
