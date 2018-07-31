#include <iostream>
#include "Subject.h"

int main() {
	std::cout << "Chaos Theory" << std::endl;
	Subject subj(10, 10, 10, 10, 10);
	
	std::cout << subj.getStr() << std::endl;

	std::cin.get();
	return 0;
}

