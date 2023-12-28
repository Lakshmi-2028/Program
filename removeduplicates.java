public class RemoveDuplicates {

    public static int removeDuplicates(int[] nums) {
        if (nums.length == 0) {
            return 0;
        }

        int uniqueCount = 1; // At least one unique element (the first one)
        
        // Iterate through the array starting from the second element
        for (int i = 1; i < nums.length; i++) {
            // If the current element is different from the previous one, consider it as a unique element
            if (nums[i] != nums[i - 1]) {
                nums[uniqueCount] = nums[i]; // Move the unique element to the next position
                uniqueCount++;
            }
        }

        return uniqueCount;
    }

    public static void main(String[] args) {
        int[] inputArray = {22, 22, 77, 77, 88, 89, 89};

        // Call the removeDuplicates method
        int uniqueCount = removeDuplicates(inputArray);

        // Display the modified array and the number of unique elements
        System.out.print("After removing duplicates -> [");
        for (int i = 0; i < uniqueCount; i++) {
            System.out.print(inputArray[i]);
            if (i < uniqueCount - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("]");
        System.out.println("No. of unique elements = " + uniqueCount);
    }
}