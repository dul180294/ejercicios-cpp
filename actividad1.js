// Este es un comentario de una sola línea

/*
   Este es un comentario multilínea o de bloque
   Sirve para escribir explicaciones largas o documentar lógica
*/

/*
 * Este es un comentario de documentación (JSDoc)
 * Es muy popular en el ecosistema de JavaScript para documentar funciones,
 * parámetros y tipos, ayudando a que los editores modernos autocompleten mejor
 */

//Alumna: Lucero Villarreal Sotero
//Profesor: Jaciel Luna
//Módulo: Programación

/*ej01- Crea un comentario en el código y coloca el nombre de la asignatura 
- Representa las diferentes sintaxis que existen de crear comentarios en el lenguaje (en una línea, varias...). Escribe el nombre del profesor y tus datos generales
- Crea una variable (y una constante si el lenguaje lo soporta). 
- Crea variables representando todos los tipos de datos primitivos del lenguaje (cadenas de texto, enteros, booleanos...). 
- Imprime por terminal el texto: "¡Hola, [y el nombre del lenguaje]!"


/*-------------------------------
Sintaxis
-------------------------------*/

/*
En JavaScript moderno no necesitas obligatoriamente envolver tu código en clases o funciones
El código se puede ejecutar de arriba hacia abajo directamente
El uso del punto y coma (;) al final de las líneas es opcional en la mayoría de los casos, pero se considera una buena práctica para evitar comportamientos inesperados
*/

/* ¿Cómo se manejan las Librerías en JavaScript?
   Dependiendo del entorno (Navegador o Node.js/Servidor), existen dos formas comunes de importar librerías:

   1. Método tradicional / Servidor (CommonJS):
      const fs = require('fs'); // Importa la librería nativa para manejar archivos.

   2. Método moderno (ES Modules - frontend y backend moderno):
      import { miFuncion } from './miLibreria.js';
*/



/*----------------------------
DEclaración de variales
----------------------------*/
// En JavaScript existen tres palabras clave para declarar variables:
// A. 'var' (Antiguo): Define variables con ámbito de función. Ya NO se recomienda usar 
// porque puede causar errores de lógica (como la re-declaración silenciosa)
var variableAntigua = "No me uses a menos que sea necesario";

//'let' (Moderno): Define variables con ámbito de bloque (solo existen dentro de las llaves donde se crearon)
let edad = 28;
edad = 29; //El valor cambia de 28 a 29

//'const' (Moderno): Define constantes, no se puede reasignar su valor una vez definido
const pi = 3.14159;
// pi = 3.14; // ¡Esto lanzaría un error! Porque es una constante


//En JS las variables son dinámicas; se adaptan al valor que les asignes en el momento
//Tipos primitivos
//String (Cadenas de texto): Se pueden definir con comillas dobles, simples o backticks (comillas invertidas)
const textoSencillo = "Hola Mundo";
const textoConComillasSimples = 'JavaScript es genial';
// Los backticks (``) permiten interpolar (insertar) variables directamente sin concatenar con '+'
const saludoEspecial = `Mensaje: ${textoSencillo} - Detalle: ${textoConComillasSimples}`;

//Number: en JS todos los números (enteros o decimales) pertenecen al tipo 'Number'
const entero = 42;
const decimal = 99.99;

//BigInt: Para números enteros extremadamente grandes que superen el límite seguro de 'Number'
//Se crean agregando una 'n' al final del número
const numeroMasivo = 90071992547409912345n;

//Boolean: Verdadero o Falso.
const programarEsDivertido = true;
const tengoHambre = false;

//Undefined: significa que la variable ha sido declarada pero aún no tiene ningún valor asignado
let variableVacia; // Por defecto su valor es 'undefined'

//Null: representa la ausencia intencional de cualquier valor u objeto
const valorNulo = null;

//Symbol: crea un identificador único e inmutable (se usa para propiedades avanzadas de objetos)
const miSimbolo = Symbol("id_unico");


//Tipos de referencias (Estructuras de datos complejas)

//Objetos (Object): colecciones de propiedades (clave-valor)
const estudiante = {
    nombre: "Juan Pérez",
    edad: 28,
    estaActivo: true
};

//Arreglos (Array): listas ordenadas de datos (pueden mezclar diferentes tipos)
const lenguajesFavoritos = ["JavaScript", "Python", "C++", 100, true];

//Funciones (Function): bloques de código reutilizables, en JS, las funciones son tratadas como tipos de datos
const saludar = function(nombre) {
    return `Hola, ${nombre}!`;
};



/*----------------------------
Impresión
----------------------------*/
// Para imprimir texto o datos en la terminal (consola) de JavaScript, usamos console.log().
console.log("¡Hola! Bienvenido al dinámico mundo de JavaScript.");



/*----------------------------
Imprimir variales
----------------------------*/
console.log("--- Impresión de Variables ---");
console.log("Texto con interpolación:", saludoEspecial);
console.log("Número Entero:", entero);
console.log("Número Decimal:", decimal);
console.log("Número Gigante (BigInt):", numeroMasivo);
console.log("Booleano:", programarEsDivertido);
console.log("Variable sin definir (Undefined):", variableVacia);
console.log("Valor nulo (Null):", valorNulo);
console.log("Símbolo único:", miSimbolo.toString());
console.log("\n--- Impresión de Estructuras Complejas ---");
console.log("Objeto Estudiante:", estudiante);
console.log("Acceder a una propiedad del objeto (nombre):", estudiante.nombre);
console.log("Lista de Lenguajes (Array):", lenguajesFavoritos);
console.log("Acceder al primer elemento del Array:", lenguajesFavoritos[0]);
console.log("Llamada a la función saludar():", saludar("Carlos"));