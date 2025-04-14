public class MergeStringsAlternately {
    public static void main(String[] args) {
        String word1 = "abc";
        String word2 = "pqr";
        System.out.println(mergeAlternately(word1, word2));
        
    }
    public static String mergeAlternately(String word1, String word2) {
        int first = word1.length();
        int second = word2.length();
        char[] ans = new char[first+second];
        int value = 0;
        for(int i =0;i<first;i=i+2){
            ans[i] = word1.charAt(value);
            value++;
        }
        value = 0;
        for(int i =1;i<second;i=i+2){
            ans[i] = word2.charAt(value);
            value++;
        }
        return ans.toString();
    }
}
