public class ConstructorExample {

    // No arguments constructor
    public ConstructorExample() {
        System.out.println("No arguments constructor called");
    }

    // Default constructor
    public ConstructorExample(int defaultValue) {
        System.out.println("Default constructor called with default value: " + defaultValue);
    }

    // Parameterized constructor with different types of parameters
    public ConstructorExample(String strParam) {
        System.out.println("Parameterized constructor called with String parameter: " + strParam);
    }

    public ConstructorExample(int intParam1, int intParam2) {
        System.out.println("Parameterized constructor called with two int parameters: " + intParam1 + ", " + intParam2);
    }

    public static void main(String[] args) {
        // Creating objects using different constructors
        ConstructorExample obj1 = new ConstructorExample();  // No arguments constructor
        ConstructorExample obj2 = new ConstructorExample(10);  // Default constructor
        ConstructorExample obj3 = new ConstructorExample("Hello");  // Parameterized constructor with String parameter
        ConstructorExample obj4 = new ConstructorExample(5, 7);  // Parameterized constructor with two int parameters
    }
}