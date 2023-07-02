class Solution {
  public:
    // Program for zig-zag conversion of array
    void zigZag(int arr[], int n) {
        // code here
        vector<int>ans;
        for(int i=1;i<n;i+=2){
            //check that every odd plac element should be greater than both sides elements
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
                ans.push_back(arr[i]);
                
            }
            if(arr[i]<arr[i-1]){
                swap(arr[i],arr[i-1]);
            }
            if(arr[i]<arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
                
            }
        }
        
    
};