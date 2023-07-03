class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        //approach 1
        vector<int>ans;
        
        for(int i=0;i<n;i++){
                ans.push_back(arr1[i]);
            }
        
        for(int j=0;j<m;j++){
                ans.push_back(arr2[j]);
            }
        sort(ans.begin(), ans.end());
        return ans[k-1];
        
        //approach 2
        int i=0,j=0,c=0;
        vector<int>ans;
        while(i<n and j<m)
   {
        if(arr1[i]<arr2[j])
       {
           ans.push_back(arr1[i]);
           i++;c++;
       }
        else
       {
           ans.push_back(arr2[j]);
           j++;c++;
       }
        if(c==k)
       {
           return ans[k-1];
       }
   }
        while(i<n)
   {
        ans.push_back(arr1[i]);
        i++;
        c++;
        if(c==k)
       {
           return ans[k-1];
       }
   }
         while(j<m)
   {
         ans.push_back(arr2[j]);
         j++;
         c++;
         if(c==k)
       {
           return ans[k-1];
       }
   }
    }
};