class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int mini=prices[0];
        int maxi=INT_MIN;
        int ans=0;
        for(int i=1;i<n;i++){
            if(prices[i]<mini){
                mini=prices[i];
            }
            else{
                ans=prices[i]-mini;
                maxi=max(maxi,ans);
            }
        }
        if(maxi>0){
            return maxi;
        }
        return 0;
        
    }
};
