class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for (char c : s) {
            if (isalnum(c)) {                  // sirf letters ya digits lo
                t += tolower(c);               // lowercase mein convert karo
            }
        }

        int i = 0;
        int j = t.length() - 1;
        while (i < j) {
            if (t[i] != t[j]) return false;   // agar koi char match nahi hua to false
            i++;
            j--;
        }
        return true;                          // agar sab match hua to palindrome
    }
};
