class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        //Finding pivot index
        int idx = -1;
        for(int i = n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;
            }
        }
        if(idx == -1){     // if the array is the allready greatest.
            reverse(nums.begin(),nums.end());
            return;
        }
        // 2) Sorting/reverse after pivot
        reverse(nums.begin()+idx+1, nums.end());
        // 3) Finding just greater element then idx
        int j = -1;
        for(int i= idx+1; i<n; i++){
            if(nums[i]>nums[idx]){
                j = i;
                break;
            }
        }
        // 4) Swappinf idx and j;
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
    }
};