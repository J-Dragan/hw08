#ifndef hw08_H
#define hw08_H
#include <iostream>

class fractionType{
	private:
		int numerator;
		int denominator;



	public:
		//constructor
		fractionType(int nume = 1, int demo = 1);


		//relational
		bool operator <(const fractionType& other) const;
		bool operator <=(const fractionType& other) const;
		bool operator >=(const fractionType& other) const;
		bool operator >(const fractionType& other) const;
		bool operator ==(const fractionType& other) const;
		bool operator !=(const fractionType& other) const;

		//arimthmitic 
		fractionType operator +(const fractionType& other) const;
		fractionType operator -(const fractionType& other) const;
		fractionType operator *(const fractionType& other) const;
		fractionType operator /(const fractionType& other) const;

		//cin/cout
		friend std::ostream& operator <<(std::ostream& os, const fractionType& fraction);
		friend std::istream& operator >>(std::istream& is, const fractionType& fraction);





};

#endif
