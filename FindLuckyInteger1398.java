import java.security.Key;
import java.util.HashMap;
import java.util.Hashtable;
import java.util.Map;
import java.util.Stack;

public class FindLuckyInteger1398 {

    public static void main(String[] args) {
     int[] arr = {2,2,3,4};
     System.out.println(findLucky(arr));
    }

    static public int findLucky(int[] arr) {
        int ans = -1;
        
        Map<Integer, Integer> frequencyMap = new HashMap<>();

        for (int num : arr) {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
        }
         for (Integer k : frequencyMap.keySet())
         {
            if (k==frequencyMap.getOrDefault(arr, k)) {
                ans = k;
            }
         }
        return ans;
    }
}