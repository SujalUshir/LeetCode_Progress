class Solution {
public:
    int summ(int sum){
        int ans=0;
        while(sum){
            ans=ans+sum%10;
            sum=sum/10;
        }
        return ans;
    }
    int smallestIndex(vector<int>& nums) {
        int ans=-1;

        for(int i=0;i<nums.size();i++){
            if(summ(nums[i])==i){
                ans=i;
                break;
            }
        }
        return ans;
    }
};