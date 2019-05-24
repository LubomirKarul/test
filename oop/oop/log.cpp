#include <iostream>
#include "log.h"

void bonus_log(const char* message) {
	log(message);
	std::cout << "hi";
}
