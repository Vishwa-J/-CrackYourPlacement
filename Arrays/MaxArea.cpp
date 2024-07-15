class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxi=0;
        int sum=0;
        int left=0;
        int right=n-1;
        while(left<right){
            sum=min(height[right],height[left])*(right-left);
            maxi=max(maxi,sum);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
            
        }
        return maxi;
    }
};
