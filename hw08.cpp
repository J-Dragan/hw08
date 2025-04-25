#include "hw08.h"

int main(){
	std::cout << "enter a fraction in a/b format" << std::endl;

	try{
		fractionType fraction1(2,5);
		fractionType fraction2;
		fractionType fraction3;

		std::cin >> fraction2;
		
		fraction3 = fraction2 + fraction1;
		std::cout << fraction1 << " + " << fraction2 << " = " <<  fraction3 << std::endl;

		fraction3 = fraction2 - fraction1;
		std::cout << fraction1 << " - " << fraction2 << " = " << fraction3 << std::endl;

		fraction3 = fraction2 * fraction1;
		std::cout << fraction1 << " * " << fraction2 << " = " << fraction3 << std::endl;

		fraction3 = fraction2 / fraction1;
		std::cout << fraction1 << " / " << fraction2 << " =  "<< fraction3 << std::endl;

		std::cout << fraction1 << " <  " << fraction2 << ":" << (fraction1 < fraction2) << std::endl;
		std::cout << fraction1 << " <=  " << fraction2 << ":" << (fraction1 <= fraction2) << std::endl;
		std::cout << fraction1 << " >  " << fraction2 << ":" << (fraction1 > fraction2) << std::endl;
		std::cout << fraction1 << " >=  " << fraction2 << ":" << (fraction1 >= fraction2) << std::endl;
		std::cout << fraction1 << " == " << fraction2 << ":" << (fraction1 == fraction2) << std::endl;
		std::cout << fraction1 << " != " << fraction2 << ":" << (fraction1 != fraction2) << std::endl;

	}
	catch(std::invalid_argument){
                        std::cerr <<"invalid input" << std::endl;
	

	
	
	
	
	
	
	
	
	
	
	}


	return 0;
}
