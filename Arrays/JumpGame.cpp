class Solution {
public:
    bool canJump(vector<int>& nums) {
        int cnt=0;
        for(int i:nums){
            if(cnt<0){
                return false;
            }
            else if(i>cnt){
                cnt=i;
            }
            cnt--;
        }
        return true;
    }
};
