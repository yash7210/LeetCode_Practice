
// "Remove" duplicates from an array and return k (number of unique elements)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // initially assume all elements are unique
        int k = nums.size();

        //copy index
        int cidx = 1;

        for(int i = 1; i < nums.size(); i++){
            
            // if element is not the same as previous, copy into the copy index
            if (nums[i] > nums[i - 1]){
                nums[cidx] = nums[i];
                // increment copy index
                cidx++;
            }
            // else element is same as previous so decrement k
            else{
                k--;
            }
        }
        return k;
    }
};
