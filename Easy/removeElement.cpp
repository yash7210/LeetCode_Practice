class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        //loop through the array
        for(int i = 0; i < nums.size(); i++){
            //copy non-val elements into nums
            if(nums[i] != val){
                nums[k] = nums[i]; 
                k = k + 1;
            }
        } 
        return k;
    }
};
