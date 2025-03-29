//快慢指针判断循环是否因为1引起

//slow==1时，fast也一定是1，即fast与slow在1出相遇
//快慢指针法，判断是否有环
//因为一共只有810种情况，如果没有环的话一定会遍历所有情况，如果有环slow和fast会相遇在环中某个点.如果没有环，slow和fast会相遇在1这个点
class Solution {
    public:
        int bitSquareSum(int n) {
            int sum = 0;
            while(n > 0)
            {
                int bit = n % 10;
                sum += bit * bit;
                n = n / 10;
            }
            return sum;
        }
        
        bool isHappy(int n) {
            int slow = n, fast = n;
            do{
                slow = bitSquareSum(slow);
                fast = bitSquareSum(fast);
                fast = bitSquareSum(fast);
            }while(slow != fast);
            
            return slow == 1;
        }
    };
    