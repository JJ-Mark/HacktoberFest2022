/* Given a number A, check if it is a magic number or not.
A number is said to be a magic number if the sum of its digits is calculated till a single digit recursively by adding the sum of the digits after every addition. If the single digit comes out to be 1, then the number is a magic number.
*/

public class Solution {
    public int solve(int A) {
        if(A <= 9 && A == 1) return 1; // base case
        if(A <= 9 && A != 1) return 0; // base case 2
        else
            A = digitSum(A); //calculating sum of digits
        return 0 + solve(A);
    }
    public int digitSum(int num){
        if(num <= 0) return 0; // base case
        int rem = num % 10;
        num /= 10;
        return rem + digitSum(num); //calculating sum
    }
}
