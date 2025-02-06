class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
      unordered_map<int,int>count;
      for(int a: nums){
        count[a]++;
      }
      int freq=0;
      for(auto& pair:count){
        if(pair.first!=0){
            freq++;
        }
      }
      return freq;
    }
};