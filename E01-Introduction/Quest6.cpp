#include <iostream>
#include <cstdlib>

int teste() {
const int ESC = 033, ENTER = 0XD;
std::cout << "ESC: " << ESC << std::endl << "ENTER: " << ENTER;
return EXIT_SUCCESS;
}

int main() {
return teste();
}
