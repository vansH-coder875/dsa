class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int cnt = 0 ; int less = 0;int n = nums.size();
        for(int i = 0 ; i < n ; i ++ ){
            if(nums[i] < target){
                less++;
            }
            else if(nums[i] == target){
                cnt++;
            }
        }
        vector<int>result;
        for(int j = 0; j < cnt ; j++){
            result.push_back(less +j);
        }
        return result ;
    }
};