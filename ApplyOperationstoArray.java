public class ApplyOperationstoArray {
    public static void main(String[] args) {
        int[] nums = {1,2,2,1,1,0};
        for (int i : applyOperations(nums)) {
            System.out.println(i);            
        }
    }
    public static int[] applyOperations(int[] nums) {
        int n = nums.length;
        int[] ans = new int[n];
        int i = 0;
        int appendIndex=0 ;
        while(nums[i]>=0) {
            if (i==n-1) {
                ans[appendIndex] = nums[i];
                break;
            }
            if (nums[i]!=0) {
                if (nums[i]==nums[i+1]) {
                    ans[appendIndex] = nums[i]*2;
                    nums[i+1]=0;
                }
                else
                {
                    ans[appendIndex] = nums[i];
                }
                appendIndex++;
            }
            i++;
        }
        return ans;
    }
}
