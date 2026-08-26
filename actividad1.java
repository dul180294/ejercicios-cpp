// Este es un comentario de una sola línea

/*
   Este es un comentario multilínea o de bloque
   Útil para explicaciones detalladas
*/

/**
 * Este es un comentario de documentación (Javadoc)
 * Es exclusivo de Java y se utiliza para generar documentación HTML 
 * automática de nuestro código mediante herramientas del sistema
 */

//Alumna: Lucero Villarreal Sotero
//Profesor: Jaciel Luna
//Módulo: Programación

/*
ej01- Crea un comentario en el código y coloca el nombre de la asignatura 
- Representa las diferentes sintaxis que existen de crear comentarios en el lenguaje (en una línea, varias...). Escribe el nombre del profesor y tus datos generales
- Crea una variable (y una constante si el lenguaje lo soporta). 
- Crea variables representando todos los tipos de datos primitivos del lenguaje (cadenas de texto, enteros, booleanos...). 
- Imprime por terminal el texto: "¡Hola, [y el nombre del lenguaje]!"
*/


/*---------------------------------------------------
Sintaxis
---------------------------------------------------*/

//En Java, todo el código debe estar dentro de una clase (class)
//El nombre de la clase debe coincidir exactamente con el nombre del archivo
public class actividad1 {

// El método "main" es el punto de partida obligatorio de cualquier aplicación Java
// public: accesible desde cualquier lado
// static: no requiere crear un objeto para ejecutarse
// void: no devuelve ningún valor
// String[] args: permite recibir argumentos externos (parámetros) desde la terminal
    public static void main(String[] args) {



/*----------------------------------------------
Declaración de variables y tipos de datos
----------------------------------------------*/     
// Java es un lenguaje de tipado fuerte. Debes declarar el tipo de variable antes de su nombre

//Enteros
    byte numeroMuyPequeño = 127;        // 1 byte, tiene un rango de -128 a 127
    short numeroPequeño = 32767;        // 2 bytes, tiene un rango de -32,768 a 32,767
    int edad = 28;      // 4 bytes, el más utilizado para enteros cotidianos
    long numeroGigante = 9223372036854775807L;      // 8 bytes, requiere una 'L' al final para indicar que es Long

//Decimales
    float pi = 3.14159f;        // 4 bytes, requiere una 'f' al final
    double constanteGravedad = 9.80665;

//Caracteres (un solo símbolo)
    char inicialNombre = 'J';       //Siempre entre comillas simples (' ')

//Booleanos (Verdadero o Falso)
    boolean meGustaProgramar = true;      //Guarda true o false, no se puede imprimir como 1 o 0 directamente

//Cadenas de texto (Clase String)
// Nota: String en Java no es un tipo de dato primitivo, es una clase (por eso empieza con mayúscula)
    String nombreEstudiante = "Juan Pérez"; //Siempre entre comillas dobles (" ")


/*-----------------------------------------------
Imprimir
-----------------------------------------------*/
// System.out.println imprime el texto en la consola y automáticamente hace un salto de línea.
    System.out.println("¡Hola! Bienvenido al mundo de Java.");




/*-----------------------------------------------
Imprimir variales
-----------------------------------------------*/
// En Java concatenamos (unimos) textos y variables usando el operador de suma (+).
    System.out.println("Nombre del estudiante: " + nombreEstudiante);
    System.out.println("Inicial del nombre: " + inicialNombre);
    System.out.println("Edad: " + edad + " años");
    System.out.println("Número Byte: " + numeroMuyPequeño);
    System.out.println("Número Short: " + numeroPequeño);
    System.out.println("Número Long: " + numeroGigante);
    System.out.println("Número Float (pi): " + pi);
    System.out.println("Número Double (gravedad): " + constanteGravedad);
        
// Al imprimir un booleano en Java, la consola mostrará literalmente "true" o "false".
    System.out.println("¿Le gusta programar?: " + meGustaProgramar);

    }
}