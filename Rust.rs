// Definición de una estructura simple
struct Persona {
    nombre: String,
    edad: u8,
}

impl Persona {
    // Método para mostrar información de la estructura
    fn mostrar(&self) {
        println!("Nombre: {}, Edad: {}", self.nombre, self.edad);
    }
}

fn main() {
    // Creación de una instancia de la estructura
    let persona1 = Persona {
        nombre: String::from("Juan"),
        edad: 30,
    };

    // "Hola Mundo" y datos de la estructura
    println!("Hola Mundo");
    persona1.mostrar();
}
