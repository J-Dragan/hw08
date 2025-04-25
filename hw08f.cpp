#include "hw08.h"

//constructor
fractionType::fractionType(int nume, int demo){
	if(demo == 0){
		throw std::invalid_argument("denominator cannot be 0");
	}
	else{
		numerator = nume;
		denominator = demo;
	}
}

//relational
bool fractionType::operator<(const fractionType& other) const{
	return(numerator * other.denominator < denominator *other.numerator);

}
bool fractionType::operator <=(const fractionType& other) const{
	 return(numerator * other.denominator <= denominator *other.numerator);
}
bool fractionType::operator >=(const fractionType& other) const{
	 return(numerator * other.denominator >= denominator *other.numerator);
}
bool fractionType::operator >(const fractionType& other) const{
	 return(numerator * other.denominator > denominator *other.numerator);
}
bool fractionType::operator ==(const fractionType& other) const{
	 return(numerator * other.denominator == denominator *other.numerator);
}
bool fractionType::operator !=(const fractionType& other) const{
	 return(numerator * other.denominator != denominator *other.numerator);
}

//arimthmitic
fractionType fractionType::operator +(const fractionType& other) const{
	return fractionType(numerator * other.denominator+other.numerator * denominator,denominator * other.denominator);
}
fractionType fractionType::operator -(const fractionType& other) const{
	return fractionType(numerator * other.denominator - other.numerator * denominator,denominator * other.denominator);
}
fractionType fractionType::operator *(const fractionType& other) const{
	return fractionType(numerator * other.numerator, denominator * other.denominator);
}
fractionType fractionType::operator /(const fractionType& other) const{
	return fractionType(numerator * other.denominator, denominator * other.numerator);	
}

//cin/cout
std::ostream& operator <<(std::ostream& os, fractionType& fraction){
	os << fraction.numerator << "/" << fraction.denominator;
}
std::istream& operator >>(std::istream& is, fractionType& fraction){
	char slash
	is >> fraction.numerator >> slash >> fraction.denominator;
}














