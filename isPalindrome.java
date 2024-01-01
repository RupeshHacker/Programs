public class isPalindrome {
    public boolean Solution(String s) {
        s = s.toLowerCase();
        String str = s.replaceAll("[^a-zA-Z]", "");
        int i = 0, j = str.length() - 1;

        while (i < j) {
            if (str.charAt(i) != str.charAt(j))
                return false;
            i++;
            j--;
        }

        return true;
    }

    public static void main(String[] args) {
        String str = "A man, a plan, a canal: Panama";
        isPalindrome obj = new isPalindrome();
        if (obj.Solution(str)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
    }
}
