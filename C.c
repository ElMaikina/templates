#include <stdio.h>

// Definición de un struct simple
struct Persona {
    char nombre[50];
    int edad;
};

int main() {
    // Declaración e inicialización de un struct
    struct Persona persona1 = {"Juan", 30};

    // "Hola Mundo" y datos del struct
    printf("Hola Mundo\n");
    printf("Nombre: %s, Edad: %d\n", persona1.nombre, persona1.edad);

    return 0;
}
