#include <iostream>

int main() {
    // Declarar una variable
    int edad = 25;
    std::cout << "Edad: " << edad << std::endl; // Salida: Edad: 25

    // Declarar un puntero a un entero
    int* punteroEdad;

    // Asignar la dirección de memoria de 'edad' a 'punteroEdad'
    punteroEdad = &edad;

    std::cout << "Dirección de memoria a la que apunta punteroEdad: " << punteroEdad << std::endl;
    std::cout << "Valor al que apunta punteroEdad: " << *punteroEdad << std::endl; // Salida: Valor al que apunta punteroEdad: 25

    // Modificar el valor a través del puntero
    *punteroEdad = 40;
    std::cout << "Edad después de modificar a través del puntero: " << edad << std::endl; // Salida: Edad después de modificar a través del puntero: 40

    // Demostración de asignación de una segunda variable
    int edad2 = 100;
    punteroEdad = &edad2; // Ahora apunta a edad2

    std::cout << "Valor al que apunta punteroEdad después de reasignar: " << *punteroEdad << std::endl; // Salida: 100

    return 0;
}
