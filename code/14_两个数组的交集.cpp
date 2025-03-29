class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            int size = 1001;
            int record1[1001]={0};
            int record2[1001]={0};
            for(int i=0;i<nums1.size();i++){
                record1[nums1[i]]=1;
            }
            for(int i=0;i<nums2.size();i++){
                record2[nums2[i]]=1;
            }
            vector<int> res;
            for(int i=0;i<1001;i++){
                if(record1[i] == 1 && record2[i]==1){
                    res.insert(res.begin(),i);
                }
            }
            return res;
        }
    };