# 345.-Reverse-Vowels-of-a-String--Solution-(C++)

# Reverse Vowels of a String - LeetCode Solution

This repository contains the solution to the LeetCode problem **"Reverse Vowels of a String"** implemented in C++.

## 🚀 Problem Statement
Given a string `s`, reverse only all the vowels in the string and return it. The vowels are **'a', 'e', 'i', 'o', 'u'** (both lowercase and uppercase).

### Example 1:
```
Input: s = "IceCreAm"
Output: "AceCreIm"
```

### Example 2:
```
Input: s = "leetcode"
Output: "leotcede"
```

---

## 💡 Approach
- Use a two-pointer technique to find vowels from both ends.
- Create an unordered set of vowels (both lowercase and uppercase) for quick lookup.
- Swap vowels until the pointers cross each other.

### **Time Complexity:** O(n) - where n is the length of the string.
### **Space Complexity:** O(1) - No extra space used apart from a few variables.

---

## 🔧 Solution Code
```cpp
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
            while (left < right && vowels.find(s[left]) == vowels.end()) left++;
            while (left < right && vowels.find(s[right]) == vowels.end()) right--;
            swap(s[left], s[right]);
            left++;
            right--;
        }

        return s;
    }
};
```

---

## ✅ Example Runs
```cpp
Solution solution;
cout << solution.reverseVowels("IceCreAm") << endl;  // Output: AceCreIm
cout << solution.reverseVowels("leetcode") << endl;  // Output: leotcede
```

---

🧠 Contributing

Feel free to fork this repository, create a new branch, and submit a pull request with improvements or additional test cases.
