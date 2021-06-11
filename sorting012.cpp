class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coint ode here
        int zeroes=0,ones=0,twos=0,pointer;
        for (int i =0; i<n ; i++){
                if ( a[i]== 0)
                    zeroes++;
                if (a[i]==1){
                    ones++;
                }
                if (a[i]==2)
                    twos ++ ;
                    
            
                                }
        
        for ( pointer = 0; pointer< zeroes ; pointer++ )
            a[pointer]=0;
        
        for ( pointer = zeroes; pointer< zeroes+ones ; pointer++ )
            a[pointer]=1;
        
          for ( pointer = zeroes+ones; pointer< n ; pointer++ )
            a[pointer]=2;
        
          
             return;
        }
       
    
    
};