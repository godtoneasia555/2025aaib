/// week13-2.cpp
///臫程そ计よ獽だ だダだ
#include <stdio.h>
int main()
{
    int a = 51,b = 68;
    int ans = 1;
    for(int i=1; i<=a; i++){
        if(a%i==0 && b%i==0) ans = i;
    }
    printf("т%d%程そ计: %\n", a, b, ans);
    printf("%d%dだ,跑Θ %d/%d\n",
           a,b,    a/ans, b/ans);

}
