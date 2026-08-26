//Este es un comentario de una sola línea
/*
Este es un comentario
de varias líneas
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

//---------------------------------------------------
// Sintaxis
//---------------------------------------------------

// #include se usa para importar bibliotecas de código que C++ necesita para funcionar
#include <iostream> // iostream (Input/Output Stream) nos permite usar la terminal para leer y escribir datos
#include <string>   // Necesario para poder utilizar variables de texto libre (strings)

/*Todo programa en C++ necesita obligatoriamente una función llamada "main" (principal)
El sistema operativo siempre buscará esta función para iniciar la ejecución del programa*/  
int main() {


//Declaración de variales

//Enteros
    short numeroCorto = 32767;      // Ocupa 2 bytes, tiene un rango de -32,768 a 32,767
    int edad = 28;      // El más común, ocupa 4 bytes
    long numeroLargo = 2147483647L;     // Ocupa 4 u 8 bytes dependiendo de la plataforma
    long long distanciaEstrellas = 9223372036854775807LL;       // 8 bytes y se usa para números masivos
    
// Variación: 'unsigned' (sin signo), solo permite positivos, pero duplica el límite superior
    unsigned int soloPositivos = 4000000000U;

//Decimales
    float pi = 3.14159f;        // ..................iempre termina con 'f'
    double constantegravedad = 9.81;

//Caracteres (Un solo símbolo)
    char inicialnombre = 'J';       // Guarda una sola letra o símbolo, siempre se deben usar comillas simples (' ')

//Booleanos (Verdadero o Falso)
    bool megustaprogramar = true;       // Puede ser true (verdadero) o false (falso), son el 1 o 0

//Cadenas de texto (Strings)
    std::string nombreestudiante = "Juan Pérez"; // Texto de múltiples palabras, siempre se deben usar comillas dobles (" ")



//Inprimir en la pantalla.......
//std::cout, se traduce como "Console Output" (Salida por Consola)
// <<, son los operadores de inserción, indican el flujo de los datos hacia la salida
// std::endl, significa "End Line" (Fin de Línea), sirve para hacer un salto de línea
    std::cout << "¡Hola! Bienvenido al mundo de C++" << std::endl;



//Inprimir variables...
// Podemos encadenar múltiples datos usando el operador << consecutivamente
    std::cout << "Nombre del estudiante: " << nombrestudiante << std::endl;
    std::cout << "Inicial del nombre: "    << inicialnombre << std::endl;
    std::cout << "Edad: "                  << edad << " años" << std::endl;
    std::cout << "Número corto (short): "  << numerocorto << std::endl;
    std::cout << "Número largo (long): "   << numerolargo << std::endl;
    std::cout << "Número ultra largo: "    << distanciaestrellas << std::endl;
    std::cout << "Solo positivos (unsigned): " << solopositivos << std::endl;
    std::cout << "Número Float (pi): "      << pi << std::endl;
    std::cout << "Número Double (gravedad): " << constantegravedad << std::endl;

//En lenguaje C++, al imprimir un booleano directamente mostrará '1' para true y '0' para false
    std::cout << "¿Le gusta programar? (1 = Sí, 0 = No): " << megustaprogramar << std::endl;


//Al final de main() o codigo, retornamos 0 para indicarle al sistema que el programa finalizó con éxito.
    return 0; 

}