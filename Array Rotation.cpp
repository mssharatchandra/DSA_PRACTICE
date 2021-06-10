class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
    //           k=k%nums.size();
    // std::rotate(nums.begin(),nums.begin()+nums.size()-k,nums.end());
    //     return;

        
        int n = nums.size();
        k=k%n;
        int start = nums.size()-k-1;
        
        int newarray[n];
        for (int i=1;i<=n;i++){
            newarray[(k+i)%n]= nums[(i)];
        }
       // nums = newarray;
       // std::cout<<newarray<<
        
        for (int i = 0 ; i < n ; i ++){
            
            nums[i]=newarray[i];
            cout<< newarray[i] << ' ';
        }
        return;
        
        
    }
};