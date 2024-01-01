import java.util.Arrays;
public class anagram {
    public static void main(String[] args) {
        String s = "anagram", t = "nagaram";
        
        if(s.length() != t.length())
        // return false;
        System.out.println("false");

        char[] sArr = s.toCharArray();
        char[] tArr = t.toCharArray();
        
        Arrays.sort(sArr);
        Arrays.sort(tArr);
        
        String sortedS = new String(sArr);
        String sortedT = new String(tArr);
        
        if(sortedS.equals(sortedT)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
        System.out.println("Sorted s: " + sortedS);
        System.out.println("Sorted t: " + sortedT);
    }
}
