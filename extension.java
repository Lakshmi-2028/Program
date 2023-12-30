import java.io.File;
import java.io.FilenameFilter;

public class FileExtensionFilter {

    public static void main(String[] args) {
        String directoryPath = "C:\\Users\\Admin\\Downloads";
        String extension = ".jpg"; // Change this to your desired extension with a leading dot

        File folder = new File(directoryPath);

        if (folder.isDirectory()) {
            File[] files = folder.listFiles(new FilenameFilter() {
                @Override
                public boolean accept(File dir, String name) {
                    return name.toLowerCase().endsWith(extension);
                }
            });

            if (files != null) {
                System.out.println("Files with extension " + extension + " in " + directoryPath + " are:");
                for (File file : files) {
                    System.out.println(file.getName());
                }
            } else {
                System.out.println("No files found with extension " + extension + " in " + directoryPath);
            }
        } else {
            System.out.println("Invalid directory path: " + directoryPath);
        }
    }
}
