

class Solution
{
    public:
    //Function to find the first position with different bits.
    int getRightMostSetBit(int n){

    // to handle edge case when n = 0.
    if (n == 0)
        return -1;
 
    return log2(n & -n) + 1;
    }

    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        //another approach 
        // int mask=1;
        // int counter=1;
        // while((mask & m) ==(mask & n) ){
        //     mask =mask<<1;
        //     counter++;
        //     }
           
            
        // }
        return getRightMostSetBit(m ^ n);
}
 
    
};