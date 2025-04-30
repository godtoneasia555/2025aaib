// week11-4.cpp
// leetcode1295.
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;//迴圈前面 ans 是 0
        for(int i=0; i<nums.size();i++){
            int now = nums[i]; //現在要處理 nums[i]
            //Q:如何知道 nums[i]是幾位數?
            int digits = 0;
            while(now>0){
                digits++;
                now = now/10;
            }
            if(digits%2==0) ans++;//迴圈後面

        }
        return ans;
    }
};
