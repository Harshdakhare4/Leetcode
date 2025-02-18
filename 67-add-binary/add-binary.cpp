class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i] - '0';  // Convert char to int
                i--;
            }
            if (j >= 0) {
                sum += b[j] - '0';  // Convert char to int
                j--;
            }

            ans += (sum % 2) + '0';  // Convert int to char
            carry = sum / 2;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
