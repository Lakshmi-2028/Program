import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class ClubbedWords {

    public static List<String> getClubbedWords(String[] words) {
        List<String> clubbedWords = new ArrayList<>();
        Set<String> wordSet = new HashSet<>();
        for (String word : words) {
            wordSet.add(word);
        }

        for (String word : words) {
            if (isClubbedWord(word, wordSet)) {
                clubbedWords.add(word);
            }
        }

        return clubbedWords;
    }

    public static boolean isClubbedWord(String word, Set<String> wordSet) {
        for (int i = 1; i < word.length(); i++) {
            String prefix = word.substring(0, i);
            String suffix = word.substring(i);

            if (wordSet.contains(prefix) && (wordSet.contains(suffix) || isClubbedWord(suffix, wordSet))) {
                return true;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        String[] words = {"mat", "mate", "matbellmates", "bell", "bellmatesbell", "butterribbon", "butter", "ribbon"};
        List<String> clubbedWords = getClubbedWords(words);
        System.out.println("Clubbed words: " + clubbedWords);
    }
}
