import java.util.ArrayList;
import java.util.List;

public class PrimeSieve {
    // Returns a boolean array where isPrime[i] is true if i is prime
    public static boolean[] sieveOfEratosthenes(int n) {
        boolean[] isPrime = new boolean[n + 1];
        for (int i = 0; i <= n; i++) {
            isPrime[i] = true;
        }
        
        // 0 and 1 are not prime
        isPrime[0] = isPrime[1] = false;
        
        // Mark non-prime numbers in the sieve
        for (int i = 2; i * i <= n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j <= n; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        return isPrime;
    }

    // Returns a list of all prime numbers up to n
    public static List<Integer> getPrimeList(int n) {
        boolean[] isPrime = sieveOfEratosthenes(n);
        List<Integer> primes = new ArrayList<>();
        
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                primes.add(i);
            }
        }
        return primes;
    }

    // Prints all prime numbers up to n
    public static void printPrimes(int n) {
        boolean[] isPrime = sieveOfEratosthenes(n);
        System.out.println("Prime numbers up to " + n + ":");
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

    public static void main(String[] args) {
        int limit = 100; // Change this to your desired upper limit
        
        // Option 1: Print primes directly
        printPrimes(limit);
        
        // Option 2: Get primes as a list for further use
        List<Integer> primes = getPrimeList(limit);
        System.out.println("Prime list: " + primes);
    }
}