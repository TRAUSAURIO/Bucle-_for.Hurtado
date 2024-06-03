#include <iostream>

int main() {
    // Usando un bucle for para imprimir los múltiplos de 5 entre 1 y 100
    for (int i = 1; i <= 100; ++i) {
        if (i % 5 == 0) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
