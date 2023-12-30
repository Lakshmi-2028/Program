import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.stream.Stream;

public class CommonWordFinder {

    public static void main(String[] args) {
        // Input directory name
        String directoryName = "C:\\Users\\Admin\\Documents\\test.txt";
 // Replace with your directory name

        // Map to store words and their frequencies
        Map<String, Integer> wordFrequency = new HashMap<>();

        try (Stream<Path> paths = Files.walk(Paths.get(directoryName))) {
            paths.filter(Files::isRegularFile)
                    .filter(p -> p.toString().endsWith(".txt"))
                    .forEach(file -> processFile(file, wordFrequency));

            displayMostCommonWords(wordFrequency);
        } catch (IOException e) {
            System.out.println("Error accessing directory: " + e.getMessage());
        }
    }

    private static void processFile(Path filePath, Map<String, Integer> wordFrequency) {
        try (BufferedReader reader = new BufferedReader(new FileReader(filePath.toFile()))) {
            String line;

            while ((line = reader.readLine()) != null) {
                String[] words = line.split("\\s+");

                for (String word : words) {
                    word = word.toLowerCase();
                    wordFrequency.put(word, wordFrequency.getOrDefault(word, 0) + 1);
                }
            }
        } catch (IOException e) {
            System.out.println("Error reading file " + filePath.toString() + ": " + e.getMessage());
        }
    }

    private static void displayMostCommonWords(Map<String, Integer> wordFrequency) {
        int maxFrequency = wordFrequency.values().stream().max(Integer::compareTo).orElse(0);

        System.out.println("Most common word(s) and their frequency:");

        wordFrequency.entrySet().stream()
                .filter(entry -> entry.getValue() == maxFrequency)
                .forEach(entry -> System.out.println("Word: " + entry.getKey() + ", Frequency: " + entry.getValue()));
    }
}
