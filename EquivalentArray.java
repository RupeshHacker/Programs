class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
        StringBuilder concatenatedString1 = new StringBuilder();
        StringBuilder concatenatedString2 = new StringBuilder();
        boolean ans= false;

for (String string : word1) {
    concatenatedString1.append(string);
    concatenatedString1.append(" ");
}
for (String string : word2) {
    concatenatedString2.append(string);
    concatenatedString2.append(" ");
}
// if(word1==word2)
if (concatenatedString1.equals(concatenatedString2))
{
    ans = true;
}
return ans;
}
}
/**
 * EquivalentArray
 */
public class EquivalentArray {

    public static void main(String[] args) {
        Solution sl = new Solution();
        String[] word1 = {"ab", "c"};
        String[] word2 = {"a", "bc"};
        // System.out.println(sl.arrayStringsAreEqual(word1, word2));
        sl.arrayStringsAreEqual(word1, word2);
    }
}