import java.util.Arrays;

public class Sorting {
    public static void main(String[] args) {
        int [] nums = {5,7,1,3,6};

        Arrays.sort(nums);

        for(int num : nums) {
            System.out.println(num + " ");
        }
    }
}
