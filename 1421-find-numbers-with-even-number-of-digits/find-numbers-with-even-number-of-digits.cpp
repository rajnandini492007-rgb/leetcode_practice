class Solution {
public:
int digits(int n){
    int digit = 0;
    while(n>0){
       digit++;
       n = n/10;
    }
    return digit;
    }

    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(digits(nums[i]) % 2 ==0){
                count++;
                
            }

        }
        return count;
        
    }
};