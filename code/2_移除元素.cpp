class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int size = nums.size();
            int reca=0;
            for(int i=0;i<size;i++){
                if(nums[i] != val){
                    nums[reca] = nums[i];
                    reca++;
                }
            }
            return reca;
        }
    };