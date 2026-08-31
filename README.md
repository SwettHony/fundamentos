# Fundamentos

Ejercicios de los primeros semestres de MAC — de cuando estaba aprendiendo la sintaxis y lógica básica de programación. Se agrupan aquí en vez de darle un repo a cada uno.

## C

| Ejercicio | Qué hace |
|---|---|
| `hola-mundo` | El clásico primer programa. |
| `calcular-edad` | Calcula edad a partir del año de nacimiento. |
| `edad-peso-altura` | Captura y muestra edad, peso, altura y año de nacimiento. |
| `calculo-iva` | Calcula el IVA (16%) y el total de un producto. |
| `tarifa-estacionamiento` | Calcula tarifa de estacionamiento con tolerancia de 15 min y cobro por hora. |
| `clasificar-angulo` | Clasifica un ángulo como agudo, obtuso o recto. |
| `signo-de-numero` | Indica si un número es positivo, negativo o neutro (cero). |
| `swap-con-punteros` | Intercambia el valor de dos variables usando punteros. |
| `factorial-recursivo` | Calcula el factorial de un número con recursividad. |
| `numeros-primos` | Imprime los primeros 20 números primos con `for` anidados. |

## Java

| Ejercicio | Qué hace |
|---|---|
| `complejos-y-racionales` | Suma, resta, multiplicación y división de números complejos y racionales usando clases. |
| `competidor-applet` | Comparador visual con `Scrollbar` — versión con `Applet` (API obsoleta, removida en Java 11+, se incluye como referencia histórica). |
| `competidor-swing` | La misma idea del comparador, migrada a `JFrame`/Swing. |
| `formulario-basico` | Formulario simple con campos de texto y un botón (Swing), ejercicio de GUI básico. |

## Compilar y correr (C)

```bash
gcc c/hola-mundo/HolaMundo.c -o hola-mundo
./hola-mundo
```

## Compilar y correr (Java)

```bash
javac java/complejos-y-racionales/OperacionesBasicas.java
java -cp java/complejos-y-racionales OperacionesBasicas
```

⚠️ `competidor-applet/Competidor.java` no compila con versiones modernas de Java (el paquete `java.applet` fue removido en JDK 11) — se conserva como pieza histórica, no como código funcional.
