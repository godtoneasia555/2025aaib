///week12-3.cpp
///fibonacci �ƦC (�e�ⶵ�ۥ[,�N�O�U�@��)
/// �n��o�C�X�� �ϥ�for�j�� �}�C
#include <stdio.h>
int main()
{
    int a[30] = {0,1};
    printf("1 ");
    for(int i=2; i<30; i++){
        a[i] =  a[i-1] + a[i-2];
        printf("%d ", a[i]);
    }
}
