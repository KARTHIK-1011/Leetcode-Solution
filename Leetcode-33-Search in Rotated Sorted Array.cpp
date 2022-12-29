class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int a=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==target)
            a=i;
        }
        return a;
    }
};