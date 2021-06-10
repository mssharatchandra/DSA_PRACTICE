class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int A[n+2];
        
        for(int i=0;i<n+2;i++){
            A[i]=-1;
        }
        //int element = MIN_INT;
        
        for(int i=0;i<nums.size();i++){
            A[nums[i]]++;
            if (A[nums[i]]>0)
            {
                return nums[i];
            }
            
        }
        return 0;
        
    
}
};