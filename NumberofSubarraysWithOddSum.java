public class NumberofSubarraysWithOddSum {
    public static void main(String[] args) 
    {
        int[] arr = {1,3,5};
        System.out.println(numOfSubarrays(arr));
    }
    public static int numOfSubarrays(int[] arr) 
    {
        int oddArray = 0;
        int n = arr.length;

        for (int i = 0; i <= n-1; i++) 
        {
            int val =  0;
            for (int j = i; j <= n-1; j++) 
            {
                val = val + arr[j];
                
                if (val%2!=0) 
                {
                    oddArray++;
                }
            }
        }
        return oddArray;
    }
}
