class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> count;
        for(int a:nums){
            count[a]++;
        }
        for(auto& pair : count){
            if(pair.second >1){
                return true;
            }
            
                
            
        }
        return false;
    }
};