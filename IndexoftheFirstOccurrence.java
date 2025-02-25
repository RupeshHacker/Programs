public class IndexoftheFirstOccurrence {
    public static void main(String[] args) {
        String haystack = "leetcode";
        String needle = "leeto";
        System.out.println(strStr(haystack, needle));
    }
    public static int strStr(String haystack, String needle) {
        
        if (haystack.length() < needle.length())
            return -1;
        int IndexoftheFirstOccurrence = -1;
        boolean condition = false;
        int j = 0;
        for (int i = 0; i < haystack.length(); i++) {
            if (j >= needle.length()) {
                break;
            }

            if (j == needle.length()) {
                return IndexoftheFirstOccurrence;
            }
            if (!condition) {
                if (needle.charAt(0) == haystack.charAt(i)) {
                    condition = true;
                    IndexoftheFirstOccurrence = i;
                }
            }
            if (!(condition && needle.charAt(j) == haystack.charAt(i))) {
                condition = false;
                IndexoftheFirstOccurrence = -1;
                j = 0;
            } else {
                j++;
            }

        }
        return IndexoftheFirstOccurrence;
    }
}
