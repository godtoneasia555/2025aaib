///week13-3.cpp
///������۰��k�䵪��(�̤j���]��)
#include<stdio.h>
int gcd(int a, int b)///�Q�Ψ禡�I�s��ܸѥL
{///�Ѥja, �ѤGb
    printf("�Ѥja: %d �ѤGb: %d\n", a, b);///�L�X�L�{
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b, a%b);

}
int main()
{
    printf("�п�J��ӼƦr(ex. 51 68) ");
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = gcd(a, b);
    printf("�L���̤j���]�ƬO:%d\n", ans);
}
