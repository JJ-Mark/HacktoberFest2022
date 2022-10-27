// this is the solution of sum of digits pusing Recursion

public int solve(int A) {
        if(A == 0) return 0; // base case
        int rem = A%10; // fetching last digit
        A /=10; // dividing A by 10 to get remaining number
        return rem + solve(A);
    }
}
