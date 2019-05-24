#include <iostream>
void bonus_log(const char* message);

void log(const char* message) {
	std::cout << message << std::endl;
}


int main() {
	int a = 5;
	int b = 6;
	int c = a - b;
	log("otto");
	bonus_log("otto");
	b = 5 + 6;
	a = b + c;
	std::cout << a;
	std::cout << b;
	std::cout << c;
	while (c > 0) {
		c--;
		std::cout << c << std::endl;

	}

}