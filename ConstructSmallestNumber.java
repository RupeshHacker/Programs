public class ConstructSmallestNumber {
    public static void main(String[] args) {
      String pattern = "IIIDIDDD";
      System.out.println(smallestNumber(pattern));
    }
      
    public static String smallestNumber(String pattern) {
        char[] charPattern = pattern.toCharArray();
        int x = 1;
        int y = 9;
        System.out.println(pattern.length());
        StringBuilder sb = new StringBuilder();
        for (char c : charPattern) {
            if (c=='I') {
                sb.append(x);
                x++;
            }
            else
            {
                sb.append(y);
                y--;
            }
        }
     return sb.toString();//"123549876"        
    }
}