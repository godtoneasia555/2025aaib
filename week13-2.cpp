/// week13-2.cpp
///響最大公因數，以方便分子 分母約分
#include <stdio.h>
int main()
{
    int a = 51,b = 68;
    int ans = 1;
    for(int i=1; i<=a; i++){
        if(a%i==0 && b%i==0) ans = i;
    }
    printf("找到%d%最大公因數: %\n", a, b, ans);
    printf("%d%d約分後,變成 %d/%d\n",
           a,b,    a/ans, b/ans);

}
