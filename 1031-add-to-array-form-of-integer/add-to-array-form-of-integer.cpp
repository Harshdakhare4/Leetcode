class Solution {
public:
    vector<int> addToArrayForm(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        int carry = 0;
        int i = n - 1;

        while (i >= 0 || k > 0 || carry > 0) {
            if (i >= 0) {
                k += nums[i];
                i--;
            }
            
            int digit = k % 10;
            ans.push_back(digit);
            carry = k / 10;
            k /= 10;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
