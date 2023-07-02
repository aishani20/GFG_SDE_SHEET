class Solution{
public:
    //Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long>& arr, int n, int k){
        // code here
        for(int i=0;i<n;i=i+k){
            int start =i;
            //dry run method 
            //if k=5 and n=8 then min(9,7)would be 7 then we would have reverse the rest of the elements.
            int end=min(i+k-1,n-1);
            while(start<=end){
                int temp=arr[start];
                arr[start]=arr[end];
                arr[end]=temp;
                start++;
                end--;
            
        }
        
    }
    }
};