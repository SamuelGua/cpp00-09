#include <iostream>
#include <cstdlib>  // Pour strtod
#include <cstring>  // Pour strlen

int main() {
    const char* str = "123.0000001000";
    double num = std::strtof(str, NULL);

        std::cout.precision(18);  // Pour afficher plus de chiffres après la virgule
        std::cout << "Le nombre converti est : " << num << std::endl;
    return 0;
}
