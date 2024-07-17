class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>> s;
        for(int i=0;i<nums.size()-2;i++){
            int low=i+1;
            int high=nums.size()-1;
            while(low<high){
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==0){
                    s.insert({nums[i],nums[low],nums[high]});
                    low++;
                    high--;
                }
                else if(sum<0){
                    low++;
                }
                else{
                    high--;
                }
            }
        }
        for(auto it:s){
            ans.push_back(it);
        }
        
        return ans;
    }
};
