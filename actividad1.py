# Este es un comentario de una sola línea

"""
Este es un comentario multilínea utilizando triples comillas dobles
Técnicamente, en Python esto es una cadena de texto (string) multilinea que
no se asigna a ninguna variable, por lo que el intérprete la ignora y
los programadores la utilizan como comentarios o para documentar (Docstrings)
"""

#Alumna: Lucero Villarreal Sotero
#Profesor: Jaciel Luna
#Módulo: Programación
"""ej01- Crea un comentario en el código y coloca el nombre de la asignatura 
- Representa las diferentes sintaxis que existen de crear comentarios en el lenguaje (en una línea, varias...). Escribe el nombre del profesor y tus datos generales
- Crea una variable (y una constante si el lenguaje lo soporta).
- Crea variables representando todos los tipos de datos primitivos del lenguaje (cadenas de texto, enteros, booleanos...)
- Imprime por terminal el texto: "¡Hola, [y el nombre del lenguaje]!"""



"""---------------------------------------------------
 Sintaxis
---------------------------------------------------"""
""" En Python la sintaxis es limpia:
 - No se usan puntos y comas (;) para terminar las instrucciones
 - Los bloques de código se definen con sangría o "indentación" (normalmente 4 espacios)"""

#Para la librería usamos la palabra clave 'import', existen tres formas comunes:

# 1.Importar una librería completa:
import math  #importa toda la librería matemática nativa

# 2.Importar algo específico de una librería:
from datetime import datetime  #importa solo la clase datetime de la librería datetime

# 3. Importar una librería con un alias (nombre más corto)
import pandas as pd #(muy común en análisis de datos, requiere instalación previa)


"""---------------------------------------------------
 Impresión
---------------------------------------------------"""
# Para mostrar texto en la terminal de Python, usamos la función print()
print("¡Hola! Bienvenido al amigable mundo de Python")



"""---------------------------------------------------
 Declaración de variables
---------------------------------------------------"""
#En Python no necesitas usar palabras clave (como 'let', 'const', 'int' o 'var'), para declarar variables simplemente escribes el nombre de la variable, el signo '=' y su valor
#El estilo estándar para nombrar variables en Python es snake_case (todo en minúsculas separado por guiones bajos)

edad = 28  #Python detecta automáticamente que es un entero
edad = 29  #Las variables pueden cambiar de valor y de tipo en cualquier momento


"""---------------------------------------------------
 Tipos de datos
---------------------------------------------------"""

# --- Numericos ---
entero = 42         #Tipo: int (enteros de precisión arbitraria, no tienen límite de tamaño)
decimal = 99.99     # Tipo: float (números decimales de punto flotante)
complejo = 3 + 5j   # Tipo: complex (números complejos con parte real e imaginaria 'j')

# --- Texto (Strings) ---
texto_sencillo = "Hola Mundo"  # Tipo: str (se pueden usar comillas dobles o simples)
# Formateo moderno (f-strings): similar a los backticks de JavaScript, permite meter variables directamente
saludo_especial = f"Mensaje personalizado: {texto_sencillo} y mi edad es {edad}"

# --- Booleano ---
programar_es_genial=True   #Tipo: bool (Verdadero), es importante que la primera letra sea mayúscula
tengo_hambre=False         #Tipo: bool (Falso)

# --- Tipo nulo ---
valor_nulo = None       #Tipo: NoneType (ausencia de valor, null en otros lenguajes)

# --- Estructura de datos / Colecciones ---
#Listas (Lists): Colecciones ordenadas y mutables (se pueden cambiar), equivalente a los Arrays
lenguajes_favoritos = ["Python", "JavaScript", "C++", 100, True]  # Pueden mezclar tipos

#Tuplas (Tuples): Colecciones ordenadas pero INMUTABLES (no se pueden modificar una vez creadas) y se definen con paréntesis ()
coordenadas = (19.4326, -99.1332)

#Diccionarios (Dictionaries): Colecciones de pares clave-valor, equivalente a los Objetos de JS, y se definen con llaves {}
estudiante = {
    "nombre": "Juan Pérez",
    "edad": 28,
    "esta_activo": True
}

#Conjuntos (Sets): Colecciones desordenadas de elementos ÚNICOS (no permite duplicados), y se definen con llaves {}
numeros_unicos = {1, 2, 3, 3, 4}  # El número 3 duplicado se eliminará automáticamente


"""==========================================
 Imprimir variables
 =========================================="""

print("Impresión de Variables Primitivas")
print("Texto formateado (f-string):", saludo_especial)
print("Número Entero:", entero)
print("Número Decimal:", decimal)
print("Número Complejo:", complejo)
print("Booleano:", programar_es_genial)
print("Valor Nulo (None):", valor_nulo)

print("\n--- Impresión de Colecciones ---")
print("Lista de Lenguajes:", lenguajes_favoritos)
print("Acceder al primer elemento de la lista:", lenguajes_favoritos[0])
print("Tupla inmutable:", coordenadas)
print("Diccionario Estudiante:", estudiante)
print("Acceder a un valor del diccionario (nombre):", estudiante["nombre"])
print("Conjunto (Set) sin duplicados:", numeros_unicos)


#Demostración del uso de una librería importada (math)
raiz_cuadrada = math.sqrt(64)
print(f"\nUso de librería 'math' -> La raíz cuadrada de 64 es: {raiz_cuadrada}")