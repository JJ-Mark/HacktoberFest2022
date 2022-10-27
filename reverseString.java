/*
    Write a recursive function that, given a string S, prints the characters of S in reverse order.
*/


import java.lang.*;
import java.util.*;

public class Main {

    public static void reverse(String s, int pos){
    if(pos == 0){
        System.out.print(s.charAt(pos));
        return;
    }

    System.out.print(s.charAt(pos));
    reverse(s, pos-1);
}

    public static void main(String[] args) {
        // YOUR CODE GOES HERE
        // Please take input and print output to standard input/output (stdin/stdout)
        // DO NOT USE ARGUMENTS FOR INPUTS
        // E.g. 'Scanner' for input & 'System.out' for output
        Scanner myObj = new Scanner(System.in);  // Create a Scanner object
        String userName = myObj.nextLine();  // Read user input
       
        reverse(userName, userName.length()-1);
    }
}
