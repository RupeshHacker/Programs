import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class RemoveDuplicatesfromSortedArray {
    public static void main(String[] args) {
        int[] nums = {0,0,1,1,1,2,2,3,3,4};
        System.out.println(removeDuplicates(nums));
    }
    public static int removeDuplicates(int[] nums) {
        Set <Integer> ans = new HashSet<>();
        List<Integer> expectedNums = new ArrayList<>();
        for (Integer integer : nums) {
            if(ans.add(integer))
            {
                expectedNums.add(integer);
            }
        }
        return expectedNums.size();
    }
}
