class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        //base case
        if(n==1)
        return 1;
        
        //ek case solve kar lo
        for(int i=1;i<n;i++){
            a[i]=a[i-1]+a[i];
        }
        for(int i=0;i<n-1;i++){
            if(a[i]==a[n-1]-a[i+1])
            return i+2;
        }
        return -1;
    }
};