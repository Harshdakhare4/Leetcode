class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long n = nums.size();
        unordered_map<int, int> count;
        
        for (long long i = 0; i < n; i++) {
            int freq = nums[i] - i;
            count[freq]++;
        }

        long long totalPairs = n * (n - 1) / 2;  
        long long goodPairs = 0;

        for (auto& pairs : count) {
            long long value = pairs.second;
            if (value > 1) {
                goodPairs += (value * (value - 1)) / 2;
            }
        }

        return totalPairs - goodPairs;
    }
};
