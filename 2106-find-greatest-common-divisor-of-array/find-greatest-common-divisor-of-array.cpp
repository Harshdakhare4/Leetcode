#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int GCD(int a, int b) {
        if (b == 0) {
            return a;
        }
        return GCD(b, a % b);
    }

    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = nums[0];
        int max = nums[nums.size() - 1];

        if (min == 0) {
            return max;
        } else if (min == max) {
            return max;
        }

        return GCD(max, min);
    }
};


