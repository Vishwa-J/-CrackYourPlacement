long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    long long ans=INT_MAX;
    for(int i=0;i<n-m;i++){
        long long diff=a[i+m-1]-a[i];
        ans=min(ans,diff);
        cout<<ans<<endl;
    }
    return ans;
    
    }   
