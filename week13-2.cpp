/// week13-2.cpp
///�T�̤j���]�ơA�H��K���l ��������
#include <stdio.h>
int main()
{
    int a = 51,b = 68;
    int ans = 1;
    for(int i=1; i<=a; i++){
        if(a%i==0 && b%i==0) ans = i;
    }
    printf("���%d%�̤j���]��: %\n", a, b, ans);
    printf("%d%d������,�ܦ� %d/%d\n",
           a,b,    a/ans, b/ans);

}
