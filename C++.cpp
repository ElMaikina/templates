#include <iostream>
#include <string>

// Definición de una clase simple
class Persona {
private:
    std::string nombre;
    int edad;

public:
    // Constructor
    Persona(std::string nombre, int edad) : nombre(nombre), edad(edad) {}

    // Método para mostrar información
    void mostrar() const {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << std::endl;
    }
};

int main() {
    // Instancia de la clase
    Persona persona1("Juan", 30);

    // "Hola Mundo" y datos de la clase
    std::cout << "Hola Mundo" << std::endl;
    persona1.mostrar();

    return 0;
}
