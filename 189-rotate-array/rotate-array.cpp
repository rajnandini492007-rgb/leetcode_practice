class Solution {
public:
void reversed(vector<int> &nums,int start,int end){
    while(start < end){
        swap(nums[start],nums[end]);
        start++;
        end--;
    }
}

    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reversed(nums,0,nums.size()-1);
        reversed(nums,0,k-1);
        reversed(nums,k,nums.size()-1);
        
    }
};