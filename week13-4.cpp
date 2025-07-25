/// wek13-4.cpp 寫昨天的挑戰題目, 用c++來寫
// leetcode 3335.  Total Characters in String After Transformations I
// 'a'會變'b'，'b'會變'c'...'z'會變兩個字母'a' 和 'b'
class Solution {
public:
    int a[2000000] = {};
    int helper(int t){
        if( a[t] > 0)return a[t];
        if( t<26 ) return 1;
        a[t] = (helper(t-26) + helper(t-26+1)) %1000000007;
        return a[t];
    }
    int lengthAfterTransformations(string s, int t) {
        int ans = 0;
        for(char c : s){
            ans = ( ans + helper( t+c-'a')) % 1000000007;//
        }
      return ans;
    }
};
