#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   int h1,m1,s1,h2,m2,s2,h3,m3,s3,t;
    printf("�п�J�_�l�ɶ��G");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("�п�J�����ɶ��G");
    scanf("%d:%d:%d", &h2, &m2, &s2); 
    h3 = h1-h2;
    m3  = m1-m2;
    s3  = s1-s2;
	h3 = abs(h3);
    m3 = abs(m3);
    s3 = abs(s3);
    t = h3 * 3600 + m3 * 60 + s3;
    printf("\n��Ӯɶ����j��Ƭ�: %d\n", t);
    system("pause");
    return 0;
}
