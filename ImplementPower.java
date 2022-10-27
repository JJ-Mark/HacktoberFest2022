/*
  Implement pow(A, B) % C.
In other words, given A, B and C, Find (AB % C).

Note: The remainders on division cannot be negative. In other words, make sure the answer you return is non-negative.
*/


public class Solution {
    public int pow(int A, int B, int C) {
        if(A < 0 ) A = C+A; //for -ve integers
        if(A == 0) return 0; // if initial value is 0
        if(B == 0) return 1; // base case
        long p = pow(A , B/2 , C); // to compute power optimally
        if(B % 2 == 0) // for even power
            return (int) (p % C * p % C )%C; //taking mode inside as well so doesnot overflow int limit
        else
            return (int) ((p*p)%C * A%C)%C; //for odd power
    }
}
