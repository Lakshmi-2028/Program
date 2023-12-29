public class Calculator {

    public int multiply(int a, int b) {
        return a * b;
    }

    public double multiply(double a, double b, double c) {
        return a * b * c;
    }

    public static void main(String[] args) {
        Calculator calc = new Calculator();

        int resultInt = calc.multiply(5, 7);
        System.out.println("Result of multiplying two integers: " + resultInt);

        double resultDouble = calc.multiply(2.5, 3.0, 4.2);
        System.out.println("Result of multiplying three doubles: " + resultDouble);
    }
}
