public class SingleNumber_II137 {
    public static void main(String[] args) {
        int[] nums = {0,1,0,1,0,1,99};

        System.out.println(singleNumber(nums));
        
    }
}

public static int singleNumber(int[] nums) 
{
    int result = 0;
    for (int num : nums)
    {
        result ^= num;
    }
  return result;
}
