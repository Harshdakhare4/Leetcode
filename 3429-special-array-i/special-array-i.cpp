class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return true;
        }
        int flag=0;
        for(int i=0;i<n-1;i++){
            if((nums[i]%2==0&& nums[i+1]%2!=0)||(nums[i]%2!=0&& nums[i+1]%2==0)){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==0)return false;
        else return true;
    }
};