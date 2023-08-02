class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        #nums=[1,2,1]
        ans=[]
        for i in range (len(nums)*2):
            ans.append(nums[i%len(nums)])
        return ans
     
