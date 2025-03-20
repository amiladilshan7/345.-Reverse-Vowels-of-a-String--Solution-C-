#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            // Move left pointer until a vowel is found
            while (left < right && vowels.find(s[left]) == vowels.end()) {
                left++;
            }

            // Move right pointer until a vowel is found
            while (left < right && vowels.find(s[right]) == vowels.end()) {
                right--;
            }

            // Swap the vowels
            swap(s[left], s[right]);

            // Move pointers closer
            left++;
            right--;
        }

        return s;
    }
};
