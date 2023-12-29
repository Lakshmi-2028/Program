class Member {
    String name;
    int age;
    String phoneNumber;
    String address;
    double salary;

    public Member(String name, int age, String phoneNumber, String address, double salary) {
        this.name = name;
        this.age = age;
        this.phoneNumber = phoneNumber;
        this.address = address;
        this.salary = salary;
    }

    public void printSalary() {
        System.out.println("Salary: " + salary);
    }
}

class Employee extends Member {
    String specialization;

    public Employee(String name, int age, String phoneNumber, String address, double salary, String specialization) {
        super(name, age, phoneNumber, address, salary);
        this.specialization = specialization;
    }

    @Override
    public void printSalary() {
        System.out.println("Employee Salary: " + salary);
    }
}

class Manager extends Member {
    String department;

    public Manager(String name, int age, String phoneNumber, String address, double salary, String department) {
        super(name, age, phoneNumber, address, salary);
        this.department = department;
    }

    @Override
    public void printSalary() {
        System.out.println("Manager Salary: " + salary);
    }
}

public class Main {
    public static void main(String[] args) {
        Employee employee = new Employee("Ram", 30, "1234567890", "123 Street, City", 50000, "Software Development");
        Manager manager = new Manager("Shri", 35, "9876543210", "456 Avenue, Town", 80000, "HR");

        // Printing details of Employee
        System.out.println("Employee Details:");
        System.out.println("Name: " + employee.name);
        System.out.println("Age: " + employee.age);
        System.out.println("Phone Number: " + employee.phoneNumber);
        System.out.println("Address: " + employee.address);
        employee.printSalary(); // Calls overridden method in Employee class
        System.out.println("Specialization: " + employee.specialization);

        // Printing details of Manager
        System.out.println("\nManager Details:");
        System.out.println("Name: " + manager.name);
        System.out.println("Age: " + manager.age);
        System.out.println("Phone Number: " + manager.phoneNumber);
        System.out.println("Address: " + manager.address);
        manager.printSalary(); // Calls overridden method in Manager class
        System.out.println("Department: " + manager.department);
    }
}
