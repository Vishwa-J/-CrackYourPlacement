class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int tot = 0;
        for(int i = 0; i < n; i++){
            tot += cardPoints[i];
        }
        if(n == k){
            return tot;
        }
        int windowSize = n - k;
        int currSum = 0;
        for(int i = 0; i < windowSize; i++){
            currSum += cardPoints[i];
        }
        int minSum = currSum;
        
        for(int i = windowSize; i < n; i++){
            currSum += cardPoints[i] - cardPoints[i - windowSize];
            minSum = min(minSum, currSum);
        }
        
        return tot - minSum;
    }
};
