class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

      int left=0;
      int n=nums.size();
      int ans =INT_MAX;
      int total=0;
      for(int i=0;i<n;i++){
        total =total+nums[i];
        while(total>= target){
            ans=min(ans , i-left+1);
            total = total - nums[left];
            left++;

        }
      }  
      if(ans==INT_MAX)
      return 0;
      else
      return ans;
    }
};