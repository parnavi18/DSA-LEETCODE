import java.util.Arrays;

class Solution {
    
    public int fib(int n) {
        long[] dp = new long[n + 1];
        Arrays.fill(dp, -1);

        return (int) fibo(n, dp);
    }

    public static long fibo(int n, long[] dp) {

        if (n <= 1) {
            return n;
        }

        if (dp[n] != -1) {
            return dp[n];
        }

        dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);

        return dp[n];
    }
}