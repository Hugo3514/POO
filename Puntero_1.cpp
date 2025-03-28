#include <iostream>

int main() {
    // Declarar una variable
    int edad = 25;
    std::cout << "Edad: " << edad << std::endl; // Salida: Edad: 25

    // Declarar un puntero a un entero
    int* punteroEdad;

    // Asignar la direcci�n de memoria de 'edad' a 'punteroEdad'
    punteroEdad = &edad;

    std::cout << "Direcci�n de memoria a la que apunta punteroEdad: " << punteroEdad << std::endl;
    std::cout << "Valor al que apunta punteroEdad: " << *punteroEdad << std::endl; // Salida: Valor al que apunta punteroEdad: 25

    // Modificar el valor a trav�s del puntero
    *punteroEdad = 40;
    std::cout << "Edad despu�s de modificar a trav�s del puntero: " << edad << std::endl; // Salida: Edad despu�s de modificar a trav�s del puntero: 40

    // Demostraci�n de asignaci�n de una segunda variable
    int edad2 = 100;
    punteroEdad = &edad2; // Ahora apunta a edad2

    std::cout << "Valor al que apunta punteroEdad despu�s de reasignar: " << *punteroEdad << std::endl; // Salida: 100

    return 0;
}
