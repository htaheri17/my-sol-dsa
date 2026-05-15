/*
    Suffix count

    In this problem, you will write a function that returns the count of a string’s suffix in a given string, S. 
    A suffix is a combination of one or more symbols appended at the end of the string. 
    You will be given the length, L of the suffix as a parameter to the function

    Sample Input:
        et tu, brute
        1
    
    Sample Output:
        2 
*/

#include <iostream>
#include <string>
using namespace std;

int suffixCount(std::string S, int L) {
    // Your code here
    int res = 0;
    string suffix = "";

    for (int i = S.size() - L; i < S.size(); i++) {
        suffix += S[i];
    }

    for (int i = 0; i < S.size(); i++) {
        if (S.substr(i, L) == suffix) {
            res ++;
        }
    }
    return res;
}