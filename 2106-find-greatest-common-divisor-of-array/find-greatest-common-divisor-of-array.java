class Solution {
    public int GCD(int a,int b){
        if(b==0){
            return a;
        }
        return GCD(b,a%b);
    }
    public int findGCD(int[] nums) {
        Arrays.sort(nums);
        int n = nums.length;
        int min = nums[0];
        int max = nums[n-1];
        if(min==0){
            return max;
        }
        else if(min==max){
            return max;
        }
        return GCD(max,min);
    }
  
}