class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int >s;
   //int num[3]={1,2,1};
   for (int i=0;i<nums.size()*2;i++)
   {
       s.push_back(nums[i%nums.size()]);
   }
 
    return s;
        
    } 
};
