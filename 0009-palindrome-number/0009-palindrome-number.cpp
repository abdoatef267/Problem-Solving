class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string s = to_string(x);
        int n = s.length();
        string firstHalf = s.substr(0, n / 2);
        string secondHalf;
        if (n % 2 == 0) {
            secondHalf = s.substr(n / 2);
        } else {
            secondHalf = s.substr(n / 2 + 1);
        }
        reverse(secondHalf.begin(), secondHalf.end());
        return firstHalf == secondHalf;
    }
};
