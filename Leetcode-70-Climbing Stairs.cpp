class Solution {
public:
    int climbStairs(int n) {
        int ans1,ans2,ans,temp;
        if(n<=3){
            return n;
        }
        else{
            ans1=2,ans2=3;
            for(int i=4;i<=n;i++){
                ans=ans1+ans2;
                temp=ans2;
                ans2=ans;
                ans1=temp;
            }
        }
        return ans;
    }
};