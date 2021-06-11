class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
    vector<int> answer ;
    sort(nums.begin(), nums.end());
    int i,x;
        for (i=0;i<nums.size()-1;i++){
            if (nums[i]==nums[i+1]){
                answer.push_back(nums[i]);
            }
        }
        return answer;
    }
};