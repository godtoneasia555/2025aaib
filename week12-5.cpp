class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int N = nums.size();//�}�C���j�p
         vector<int> ans(N);//C++���}�C,�j�p�g�{n


        //�D�ػ�for�j��,��Ҧ���i
        for(int i=0; i<N; i++){
            ans[i] = nums[nums[i]];
        }




        return ans;
    }
};
