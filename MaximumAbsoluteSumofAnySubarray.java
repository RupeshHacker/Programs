// import java.;
public class MaximumAbsoluteSumofAnySubarray {


    public static void main(String[] args) {
        int[] nums = {1,-3,2,3,-4};
        System.out.println(maxAbsoluteSum(nums));
    }
    public static int maxAbsoluteSum(int[] nums) {
        int max = 0;
        int min = 0;
        int ans = 0;
        if (nums.equals(null)) {
            return 0;
        }
        for (int i : nums) {
            max = Math.max(max, 0)+i;
            min = Math.min(min, 0)+i;
            ans = Math.max(ans, Math.max(max, Math.abs(min)));
        }
        return ans;
    }
}