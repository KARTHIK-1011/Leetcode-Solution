class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(),a;
        for(int i=0;i<n;i++){
            if(nums[i]>target || (nums[i]==target)){
                a=i;
                break;
            }
            
        }
        return a;
        
    }
};