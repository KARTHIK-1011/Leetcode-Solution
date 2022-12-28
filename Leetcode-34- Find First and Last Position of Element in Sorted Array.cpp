class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size(),n1;
        int a;
        vector<int> v,v1;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                v.push_back(i);
                a=i;
            }
        }
        if(v.size()==0){
            v.push_back(-1);
            v.push_back(-1);
        }
        else if(v.size()==1)
        v.push_back(a);
        else if(v.size()>=3){
            int n1=v.size();
            v1.push_back(v[0]);
            v1.push_back(v[n1-1]);
            return v1;
        }
        return v;
    }
};