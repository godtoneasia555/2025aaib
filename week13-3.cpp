///week13-3.cpp
///用輾轉相除法找答案(最大公因數)
#include<stdio.h>
int gcd(int a, int b)///利用函式呼叫函示解他
{///老大a, 老二b
    printf("老大a: %d 老二b: %d\n", a, b);///印出過程
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b, a%b);

}
int main()
{
    printf("請輸入兩個數字(ex. 51 68) ");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("他的最大公因數是:%d\n", ans);
}
