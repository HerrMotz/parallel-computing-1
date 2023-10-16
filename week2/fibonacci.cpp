#include <iostream>

int fibonacci(int n) {
	if (n == 0) {
		return 0;
	} else if (n == 1) {
		return 1;
	} else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main() {
	std::string input;
	std::cout << "Programm for calculating the nth element in the fibonacci sequence. Enter n:" << std::endl;
	std::getline(std::cin, input);
	int output = std::stoi(input);
	std::cout << "Result: " << fibonacci(output) << std::endl;
}
