// My attempted code 
class Solution {
public:
   void moveOver(vector<int>& arr, int temp, int index, int arr_size){
        int temp2;
        for(int j = index; j < arr_size; j++){
            temp2 = arr[j];
            arr[j] = temp;
            temp = temp2;
        }

    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if (n == 0){
            return;
        }
        int temp;
        // first combine both arrays
        int j = 0;
        for(int i = m; i < m + n; i ++){
            nums1[i] = nums2[j];
            j = j + 1;
        }

        for(int i = 0; i < m; i++){
            if(nums1[m] < nums1[i]){
                temp = nums1[i];
                nums1[i] = nums1[m];
                moveOver(nums1, temp, i + 1, m + n);
            }
        }
    }
        
};

// Recommended solution from LeetCode Solutions
// Credit to https://leetcode.com/u/niits/ 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int midx = m - 1;
        int nidx = n - 1;
        int right = m + n - 1;

        while (nidx >= 0) {
            if (midx >= 0 && nums1[midx] > nums2[nidx]) {
                nums1[right] = nums1[midx];
                midx--;
            } else {
                nums1[right] = nums2[nidx];
                nidx--;
            }
            right--;
        }        
    }
};
