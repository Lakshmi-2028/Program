import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class PositiveNumberChecker {

    public static void main(String[] args) {
        String filePath = "C:\\Users\\Admin\\Documents\\num.txt";

 // Adjust the file path accordingly

        try (BufferedReader reader = new BufferedReader(new FileReader(filePath))) {
            String line;

            while ((line = reader.readLine()) != null) {
                String[] numbers = line.trim().split("\\s+");

                for (String number : numbers) {
                    int num = Integer.parseInt(number);
                    if (num > 0) {
                        throw new IllegalArgumentException("Error: Positive number found: " + num);
                    }
                }
            }

            System.out.println("No positive numbers found in the file.");
        } catch (IOException e) {
            System.out.println("Error reading the file: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("Invalid number format in the file: " + e.getMessage());
        } catch (IllegalArgumentException e) {
            System.out.println(e.getMessage() + " in java");
        }
    }
}
