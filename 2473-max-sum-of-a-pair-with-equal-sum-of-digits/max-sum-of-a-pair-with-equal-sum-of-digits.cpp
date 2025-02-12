class Solution {
public:
    int sum(int n) {
        int total = 0;
        while (n != 0) {
            total += n % 10;
            n /= 10;
        }
        return total;
    }

    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> sum_map;
        int maxsum = -1;

        for (int i = 0; i < nums.size(); i++) {
            int s = sum(nums[i]);
            if (sum_map.find(s) != sum_map.end()) {
                maxsum = max(maxsum, sum_map[s] + nums[i]);
            }
            sum_map[s] = max(sum_map[s], nums[i]);
        }

        return maxsum;
    }
};
