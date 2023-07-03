class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    	vector<int>ans;
    	long long mini=INT_MIN;
        long long maxi=INT_MAX;
    	int i=0;
    	int j=n-1;
    	
    	while(i<=j){
    	     maxi=min(maxi,arr[j]);
             mini=max(mini,arr[i]);
             ans.push_back(maxi);
             ans.push_back(mini);
             i++;j--;
    }
    for(int i=0;i<n;i++){
        arr[i]=ans[i];
    }
    }
    	 
};