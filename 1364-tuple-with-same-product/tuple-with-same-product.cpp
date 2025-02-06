class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int,int> productCount;
        int product;
        int count=0;
         for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                product = nums[i]*nums[j];
                productCount[product]++;
            }
         }
            for(auto & pair: productCount){
                if(pair.second>1){
                   count+=pair.second*(pair.second-1)*4;
                }
            }
            return count;
    }
};