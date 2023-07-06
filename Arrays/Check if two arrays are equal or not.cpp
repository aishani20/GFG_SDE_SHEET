class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        int i=0 , j=0;
        while(i<N && j<N){
        
            for(int i=0;i<N;i++){
            if(A[i]!=B[j]){
                return false;
            }
            }
            
                return true;
        
    }
    }
    
       
};