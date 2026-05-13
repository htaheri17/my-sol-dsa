/*
    Substring Match

    Suppose you are given an vector of strings, str. Return all strings in str that 
    are a substring of any other string in str only if all returned strings have the 
    same length. You can return the answer in a vector of matched strings in any order.
    Definition: A substring is a contiguous sequence of characters within a string.

    Example:
    Input: str = [“place”, “misplacement”, “great”, “greatest”]
    Output: [“place”, “great”]
    Explanation: “place” is a substring of “misplacement” and “great” is a substring 
    of “greatest”. Both substrings “place” and “great” have the same length.

*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void substringMatch(std::vector<std::string> str, std::vector<std::string>& result){
    // Your code here
    for (int i = 0; i < str.size(); i++) {
        string s1 = str[i];
        for (int j = 0; j < str.size(); j++) {
            string s2 = str[j];
            if (i == j) {
                continue;
            }
            if (s2.find(s1) != string::npos) {
                int cnt = count(result.begin(), result.end(), s1);
                if (cnt > 0) {
                    continue;
                }
                result.push_back(s1);
            }
        }
    }
    if (result.size() <= 1) {
    }
    else {
        int temp = result[0].size();
        for (int i = 1; i < result.size(); i++) {
            if (result[i].size() != temp) {
                result = {};
                break;
            }
        }
    }
}


