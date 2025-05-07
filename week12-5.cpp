class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N = nums.size();//陣列的大小
         vector<int> ans(N);//C++的陣列,大小射程n


        //題目說for迴圈,對所有的i
        for(int i=0; i<N; i++){
            ans[i] = nums[nums[i]];
        }




        return ans;
    }
};
