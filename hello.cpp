#include <iostream>

int main(void)
{
	std::cout << "Please input :" << std::endl;
	int c1 = 0, c2 = 0;
	std::cin >> c1 >> c2;
	std::cout << "The product is:" << c1 << " * " << c2 << " = " << c1*c2 << std::endl;
	std::cout << "c1: " << c1 << std::endl;
	std::cout << "c2: " << c2 << std::endl;
	std::cout << "c1 * c2: " << c1*c2 << std::endl;
	std::cout << "hello, world!" << std::endl;

	std::cout << "The sums of " << c1;
	std::cout  << " and " << c2;
	std::cout  << " is " << c1+c2 << std::endl;
	return 0;
}
