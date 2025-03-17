class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq; 
        unordered_map<int, int> first; 
        unordered_map<int, int> last; 

   
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            freq[num]++; 
            if (first.find(num) == first.end()) {
                first[num] = i; 
            }
            last[num] = i; 
        }

        int maxfreq = 0;
        for (auto &pairs : freq) {
            maxfreq = max(maxfreq, pairs.second);
        }

        int minLength = nums.size();
        for (auto &pairs : freq) {
            if (pairs.second == maxfreq) {
                int num = pairs.first;
                minLength = min(minLength, last[num] - first[num] + 1);
            }
        }

        return minLength;
    }
};
