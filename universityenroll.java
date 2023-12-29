import java.util.ArrayList;

class Person {
    String name;
    int age;

    Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
}

class Student extends Person {
    Student(String name, int age) {
        super(name, age);
    }
}

class Professor extends Person {
    Professor(String name, int age) {
        super(name, age);
    }
}

class Course {
    String courseName;
    ArrayList<String> prerequisites;
    ArrayList<Student> enrolledStudents;

    Course(String courseName, ArrayList<String> prerequisites) {
        this.courseName = courseName;
        this.prerequisites = prerequisites;
        this.enrolledStudents = new ArrayList<>();
    }

    void enrollStudent(Student student) {
        if (hasCompletedPrerequisites(student)) {
            enrolledStudents.add(student);
            System.out.println(student.name + " enrolled in " + courseName);
        } else {
            System.out.println(student.name + " cannot be enrolled in " + courseName +
                    " due to incomplete prerequisites.");
        }
    }

    private boolean hasCompletedPrerequisites(Student student) {
        // Check if student has completed all prerequisites
        // Logic to be implemented based on the requirements
        return true; // Placeholder, implement your logic here
    }

    void displayEnrolledStudents() {
        System.out.println("Enrolled students in " + courseName + ":");
        for (Student student : enrolledStudents) {
            System.out.println("Name: " + student.name + ", Age: " + student.age);
        }
    }
}

public class UniversityEnrollmentSystem {
    public static void main(String[] args) {
        Student student1 = new Student("Alice", 20);
        Student student2 = new Student("Bob", 22);

        Course programmingCourse = new Course("Programming 101", new ArrayList<>());
        programmingCourse.enrollStudent(student1);
        programmingCourse.enrollStudent(student2);

        programmingCourse.displayEnrolledStudents();
    }
}