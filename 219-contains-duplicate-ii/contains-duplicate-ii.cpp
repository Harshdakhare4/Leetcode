class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>count;
        for(int i=0;i<n;i++){
            if(count.find(nums[i])!=count.end()&& i-count[nums[i]]<=k){
                return true;
            }
            else{
               count[nums[i]]=i;
            }
           
        }
         return false;
    }
};