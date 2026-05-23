class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        int count = 0;

        // create a boolean array to mark prime numbers
        vector<bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;

        // mark multiples of each prime as not prime
        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // count all the primes
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) count++;
        }

        return count;
    }
};
