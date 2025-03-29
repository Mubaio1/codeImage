//ascii码写法
//unicode的话需要用Map的映射--------map<char,int> records;
//思路是用两个数组记录每个字母出现的次数，然后比较两个数组是否相同
//如果相同则是异位词，否则不是

class Solution {
    public:
        bool isAnagram(string s, string t) {
            int lengths = s.length();
            int lengtht = t.length();
            int records[26]={0};
            int recordt[26]={0};
            for(int i=0;i<lengths;i++){
                records[s[i]-97]++;
            }
            for(int i=0;i<lengtht;i++){
                recordt[t[i]-97]++;
            }
            bool flag = 0;
            for(int i=0;i<26;i++){
                if(records[i] != recordt[i]){
                    flag = 1;
                }
            }
            if(flag==1){
                return false;
            }else{
                return true;
            }
        }
    };