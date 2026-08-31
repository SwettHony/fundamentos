public class OperacionesBasicas {
    public static void main(String[] args) {
        Complejo c1 = new Complejo(3, 4);
        Complejo c2 = new Complejo(1, 2);
        
        Complejo sumaC = OperacionCompleja.suma(c1, c2);
        Complejo restaC = OperacionCompleja.resta(c1, c2);
        Complejo prodC = OperacionCompleja.multiplicacion(c1, c2);
        Complejo divC = OperacionCompleja.division(c1, c2);
        
        System.out.println("Suma Complejos: " + sumaC);
        System.out.println("Resta Complejos: " + restaC);
        System.out.println("Multiplicación Complejos: " + prodC);
        System.out.println("División Complejos: " + divC);
        
        Racional r1 = new Racional(3, 4);
        Racional r2 = new Racional(2, 5);
        
        Racional sumaR = OperacionRacional.suma(r1, r2);
        Racional restaR = OperacionRacional.resta(r1, r2);
        Racional prodR = OperacionRacional.multiplicacion(r1, r2);
        Racional divR = OperacionRacional.division(r1, r2);
        
        System.out.println("Suma Racionales: " + sumaR);
        System.out.println("Resta Racionales: " + restaR);
        System.out.println("Multiplicación Racionales: " + prodR);
        System.out.println("División Racionales: " + divR);
    }
}

class Complejo {
    double real;
    double imag;
    
    public Complejo(double r, double i) {
        this.real = r;
        this.imag = i;
    }
    
    @Override
    public String toString() {
        return real + " + " + imag + "i";
    }
}

class OperacionCompleja {
    public static Complejo suma(Complejo c1, Complejo c2) {
        double realRes = c1.real + c2.real;
        double imagRes = c1.imag + c2.imag;
        return new Complejo(realRes, imagRes);
    }
    
    public static Complejo resta(Complejo c1, Complejo c2) {
        double realRes = c1.real - c2.real;
        double imagRes = c1.imag - c2.imag;
        return new Complejo(realRes, imagRes);
    }
    
    public static Complejo multiplicacion(Complejo c1, Complejo c2) {
        double realRes = c1.real * c2.real - c1.imag * c2.imag;
        double imagRes = c1.real * c2.imag + c1.imag * c2.real;
        return new Complejo(realRes, imagRes);
    }
    
    public static Complejo division(Complejo c1, Complejo c2) {
        double denominador = c2.real * c2.real + c2.imag * c2.imag;
        double realRes = (c1.real * c2.real + c1.imag * c2.imag) / denominador;
        double imagRes = (c1.imag * c2.real - c1.real * c2.imag) / denominador;
        return new Complejo(realRes, imagRes);
    }
}

class Racional {
    int numerador;
    int denominador;
    
    public Racional(int num, int den) {
        this.numerador = num;
        this.denominador = den;
    }
    
    @Override
    public String toString() {
        return numerador + "/" + denominador;
    }
}

class OperacionRacional {
    public static Racional suma(Racional r1, Racional r2) {
        int numRes = r1.numerador * r2.denominador + r2.numerador * r1.denominador;
        int denRes = r1.denominador * r2.denominador;
        return new Racional(numRes, denRes);
    }
    
    public static Racional resta(Racional r1, Racional r2) {
        int numRes = r1.numerador * r2.denominador - r2.numerador * r1.denominador;
        int denRes = r1.denominador * r2.denominador;
        return new Racional(numRes, denRes);
    }
    
    public static Racional multiplicacion(Racional r1, Racional r2) {
        int numRes = r1.numerador * r2.numerador;
        int denRes = r1.denominador * r2.denominador;
        return new Racional(numRes, denRes);
    }
    
    public static Racional division(Racional r1, Racional r2) {
        int numRes = r1.numerador * r2.denominador;
        int denRes = r1.denominador * r2.numerador;
        return new Racional(numRes, denRes);
    }
}
