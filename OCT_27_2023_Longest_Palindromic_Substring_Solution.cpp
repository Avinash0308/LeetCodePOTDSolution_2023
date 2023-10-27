#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    std::string longestPalindrome(std::string s) {
        // Step 1: Preprocess the input string
        std::string processedStr = "^#";
        for (char c : s) {
            processedStr.push_back(c);
            processedStr.push_back('#');
        }
        processedStr.push_back('$');

        // Step 2: Initialize variables for the algorithm
        int strLength = processedStr.length();
        std::vector<int> palindromeLengths(strLength, 0);
        int center = 0;  // Current center of the palindrome
        int rightEdge = 0;  // Rightmost edge of the palindrome

        // Step 3: Loop through the modified string to find palindromes
        for (int i = 1; i < strLength - 1; i++) {
            palindromeLengths[i] = (rightEdge > i) ? std::min(rightEdge - i, palindromeLengths[2 * center - i]) : 0;

            // Expand the palindrome around the current character
            while (processedStr[i + 1 + palindromeLengths[i]] == processedStr[i - 1 - palindromeLengths[i]]) {
                palindromeLengths[i]++;
            }

            // Update the rightmost edge and center if necessary
            if (i + palindromeLengths[i] > rightEdge) {
                center = i;
                rightEdge = i + palindromeLengths[i];
            }
        }

        // Step 4: Find the longest palindrome and its center
        int maxLength = 0;
        int maxCenter = 0;
        for (int i = 0; i < strLength; i++) {
            if (palindromeLengths[i] > maxLength) {
                maxLength = palindromeLengths[i];
                maxCenter = i;
            }
        }

        // Step 5: Extract the longest palindrome from the modified string
        int start = (maxCenter - maxLength) / 2;
        int end = start + maxLength;

        // Return the longest palindrome in the original string
        return s.substr(start, end - start);
    }
};