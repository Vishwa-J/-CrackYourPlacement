class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> s;

        vector<vector<int>> ans;

        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                long long newTarget = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j+1, hi = n-1;
                while(low < hi){
                    if(nums[low] + nums[hi] < newTarget){
                        low++;
                    }
                    else if(nums[low] + nums[hi] > newTarget){
                        hi--;
                    }
                    else{
                        s.insert({nums[i], nums[j], nums[low], nums[hi]});
                        low++; hi--;
                    }
                }
            }
        }
        for(auto it : s){
            ans.push_back(it);
        }
        return ans;
    }
};
