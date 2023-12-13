//{ Driver Code Starts
//Initial Template for Java

import java.lang.reflect.Array;
import java.util.*;
import java.io.*;
import java.lang.*;

class ReverseString
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());

        while(t-- >0)
        {
            String str = read.readLine();
            System.out.println(new Reverse().reverseWord(str));
        }
    }
}
// } Driver Code Ends


//User function Template for Java


class Reverse
{
    // Complete the function
    // str: input string
    public static String reverseWord(String str)
    {
        // Reverse the string str
        ArrayList <String> arr = new ArrayList<>();
     //   String st = new String();
        for (int i =0; i< str.length();i++){
            arr.add(String.valueOf(str.charAt(i))) ;
        }
        return String.valueOf(arr);
    }
}