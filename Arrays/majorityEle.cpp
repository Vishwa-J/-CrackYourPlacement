class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt=0;
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
                cnt++;
            }
            else{
                cnt=1;
            }
            if(cnt>=nums.size()/2){
                return nums[i];
            }
        }
        return 0;
    }
};
