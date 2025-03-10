class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int min = nums[0];
        int max = nums[n-1];
    return __gcd(min,max);
    }
};