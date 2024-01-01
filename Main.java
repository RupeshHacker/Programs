//{ Driver Code Starts
//Initial Template for Java



public class Main {
    public static void main(String args[]) {
        int size = 5;
        int a[] = {1, 2, 2, 3, 2};

        int tmp = 0;
        int tm = 0;
        int m = 0;
        System.out.println(a.length);
        for (int i = 0; i < size; i++) {
            tm = 0; // Reset tm for each new iteration
            for (int j = i + 1; j < size; j++) { // Changed i++ to j++
                if (a[i] == a[j]) {
                    tm++;
                }
            }
            if (m < tm) {
                m = tm;
                tmp = a[i]; // Moved this assignment inside the if block
            }
        }
        System.out.println(tmp);
    }
}
