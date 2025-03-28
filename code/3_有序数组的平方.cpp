class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            int length = nums.size();
            int flag;
    
            for(int i=0;i<length;i++){
                if(nums[i] == 0 || nums[i]>0){
                    flag = i;
                    break;
                }
            }
            
            for(int i=0;i<length;i++){
                nums[i] = nums[i]*nums[i];
            }
    
            int records[length];
            int tmp = 0;
            int left = flag-1;                     //最后一个小于0的数
            int right = flag;                    //flag为第一个大于等于0的数
            while(left>-1 && right<length){           //一边迭代完了就停止
                if(nums[left]>nums[right] || nums[left]==nums[right]){//左边大于或等于右  
                    records[tmp] = nums[right];//放入右边
                    tmp++;
                    right++;
                }else{
                    records[tmp] = nums[left];
                    tmp++;
                    left--;
                }
            }
            if(left<0){
                for(int i=right;i<length;i++){
                    records[tmp] = nums[i];
                    tmp++;
                }
            }else{
                for(int i=left;i>=0;i--){
                    records[tmp] = nums[i];
                    tmp++;
                }
            }
            for(int i=0;i<length;i++){
                nums[i] = records[i];
            }
            return nums;
        }
    };