#include <iostream>

int main() {
    int contador = 0;
    int incremento = 1;

    // Aumentar el contador
    contador += incremento;
    std::cout << "Contador aumentado: " << contador << std::endl;

    // Disminuir el contador
    contador -= incremento;
    std::cout << "Contador disminuido: " << contador << std::endl;

    // Reiniciar el contador si es mayor que 10
    if (contador > 10) {
        contador = 0;
    }
    std::cout << "Contador reiniciado: " << contador << std::endl;

    return 0;
}

