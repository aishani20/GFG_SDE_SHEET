class Solution{
    public:
    void reverseArray(int arr[], int start, int end)
{
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to left rotate arr[] of size n by d
void rotateArr(int arr[], int d, int n)
{
    if (d == 0)
        return;
     
    // In case the rotating factor is
    // greater than array length
    d = d % n;
 
    reverseArray(arr, 0, d - 1);
    reverseArray(arr, d, n - 1);
    reverseArray(arr, 0, n - 1);
}
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
   
};

//O(N*d)Complexity approach

class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
      
            int i=0;
            int j=d-1;
            while(i<=j){
                 int last = arr[0];
                 for (int i = 0; i < n - 1; i++) {
                 arr[i] = arr[i + 1];
        }
                 arr[n - 1] = last;
                 i++;
    }
                
                
            }
            
    
};