public class Java {

    // Definición de una clase simple
    static class Persona {
        String nombre;
        int edad;

        Persona(String nombre, int edad) {
            this.nombre = nombre;
            this.edad = edad;
        }

        @Override
        public String toString() {
            return "Nombre: " + nombre + ", Edad: " + edad;
        }
    }

    public static void main(String[] args) {
        // Creación de una instancia de la clase
        Persona persona1 = new Persona("Juan", 30);

        // "Hola Mundo" y datos de la clase
        System.out.println("Hola Mundo");
        System.out.println(persona1);
    }
}
