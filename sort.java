public class RearrangeArray {

    public static void rearrangeArray(int[] nums) {
        int negativePointer = 0;

        // Iterate through the array
        for (int i = 0; i < nums.length; i++) {
            // If the current element is negative, swap it with the element at the negativePointer
            if (nums[i] < 0) {
                swap(nums, i, negativePointer);
                negativePointer++;
            }
        }
    }

    // Helper method to swap elements at two indices in the array
    private static void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    public static void main(String[] args) {
        int[] inputArray = {-12, 11, -13, -5, 6, -7, 5, -3, -6};

        // Call the rearrangeArray method
        rearrangeArray(inputArray);

        // Display the modified array
        System.out.print("Output [");
        for (int i = 0; i < inputArray.length; i++) {
            System.out.print(inputArray[i]);
            if (i < inputArray.length - 1) {
                System.out.print(", ");
            }
        }
        System.out.println("]");
    }
}