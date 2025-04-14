public class MinimumRecolorstoGetKConsecutiveBlocks {
    public static void main(String[] args) {
        String blocks = "WBWBBBW";
        int k = 2;
        System.out.println(minimumRecolors(blocks, k));
    }
    public static int minimumRecolors(String blocks, int k) {
        int ans = 0;
        char[] arrayValue = blocks.toCharArray();
        if (blocks.length()<k) {
            return ans;
        }

        int j= 0;
        for (char c : arrayValue) 
        {
            j++;
            if (arrayValue[c]=='B') 
            {
                for (int i = j; i < arrayValue.length; i++) 
                {
                    
                }
            }
        }
        return ans;
    }
}
