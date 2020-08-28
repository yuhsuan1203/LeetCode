class Solution {
public:
    bool isPalindrome(int x) {
        // edge cases:
        // 1) negative number must not be a palindrome
        // 2) the last digit is 0 also cannot be a palindrome except 0 itself
        if (x < 0 || (x % 10 == 0 && x != 0))
            return false;
        
        /*else if (x < 10) {
            return true;
        }*/
        
        int reverse = 0;
        while (x > reverse) {
            reverse = reverse * 10 + x % 10;
            x /= 10;
        }
        // odd (divide by 10 to remove the middle digit) || even
        return (x == reverse / 10 || x == reverse);
    }
};
