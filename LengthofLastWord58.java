public class LengthofLastWord58 {
    public static void main(String[] args) {
        String s = "Hello World";
        int result = lengthOfLastWord(s);
        System.out.println("Length of last word: " + result);
    }
    public static int lengthOfLastWord(String s) {
        String lastWord = "";
        String[] trimmedString = s.trim().split(" ");
        if (trimmedString.length > 0) {
            lastWord = trimmedString[trimmedString.length - 1];
            // length = lastWord.length();
        }
        return lastWord.length();
    }
}