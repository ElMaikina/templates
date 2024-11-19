class Persona:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def __str__(self):
        return f"Nombre: {self.nombre}, Edad: {self.edad}"

def main():
    # Creación de una instancia de la clase
    persona1 = Persona("Juan", 30)
    
    # "Hola Mundo" y datos de la clase
    print("Hola Mundo")
    print(persona1)

if __name__ == "__main__":
    main()
