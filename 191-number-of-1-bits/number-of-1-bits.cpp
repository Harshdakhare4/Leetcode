class Solution {
public:
    int hammingWeight(int n) {
        if(n==0){
            return 0;
        }
         int count=0;
         int remainder;
       while(n!=0){
            remainder=n%2;
            if(remainder==1){
                count++;
            }
            n/=2;
       }
return count;
    }
};