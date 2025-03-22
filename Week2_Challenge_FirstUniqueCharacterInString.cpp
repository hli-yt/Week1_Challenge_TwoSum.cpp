#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        
        // First pass: Count occurrences of each character
        for (char c : s) {
            freq[c]++;
        }
        
        // Second pass: Find the first character with count 1
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }
        
        return -1; // No unique character found
    }
};
