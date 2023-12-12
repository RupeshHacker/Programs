//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.io.*;
import java.lang.*;

class Mejority
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n =sc.nextInt();
            int arr[] = new int[n];
            
            for(int i = 0; i < n; i++)
             arr[i] = sc.nextInt();
             
           System.out.println(new Solution().majorityElement(arr, n)); 
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    static int majorityElement(int a[], int size) {
        int tmp = -1;
        int tm = 0;
        int m = 0;
        if(a.length==1){
            return a[0];
        }

        for (int i = 0; i < size; i++) {
            tm = 0;
            for (int j = i + 1; j < size; j++) {
                if (a[i] == a[j]) {
                    tm++;
                }
            }
            if (m < tm && tm <= (size / 2)) {
                m = tm;
                tmp = a[i];
            }
        }
        
        // Validate the candidate
        tm = 0;
        for (int i = 0; i < size; i++) {
            if (a[i] == tmp) {
                tm++;
            }
        }

        if (tm > size / 2) {
            return tmp;
        } else {
            return -1; // No majority element
        }
    }
}
