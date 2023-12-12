class Solution {
    public int[] findIntersectionValues(int[] nums1, int[] nums2) {
        int[] ans={0,0};
        for (int i=0;i<nums1.length;i++){
            
            ans[0]=nums1[i];
        }
        return ans;
    }
}
public class commonNumber {
    public static void main(String[] args) {
    int[] nums1 = {4,3,2,3,1};
    int[] nums2 = {2,2,5,2,3,6};
    Solution sl = new Solution();
    sl.findIntersectionValues(nums1, nums2);
}
}
