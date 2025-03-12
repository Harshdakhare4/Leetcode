class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0;
        int pos=0;
        for(int a: nums){
            if(a<0){
                neg++;
            }
            else if (a>0){
                pos++;
            }
            else{
                continue;
            }
        }
        return max(pos,neg);
    }
};