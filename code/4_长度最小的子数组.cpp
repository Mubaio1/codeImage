//滑动数组

class Solution {
    public:
        int minSubArrayLen(int target, vector<int>& nums) {
            int minlen = INT_MAX;
            int i = 0; //滑动窗口起始位置
            int sum = 0; //滑动窗口和
            int windowlength = 0; //滑动窗口长度
            for(int j=0;j<nums.size();j++){
                sum+=nums[j];
                while(sum>=target){
                    windowlength = j-i+1;
                    minlen = min(minlen,windowlength);
                    sum = sum-nums[i];
                    i++;
                }
            }
            if(minlen == INT_MAX) return 0;
            return minlen;
        }
    };