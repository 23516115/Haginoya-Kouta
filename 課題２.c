#include <stdio.h>

int main()
{
	int k,m,s;
	printf("一つ目の数字を教えて");
	scanf("%d",&k);
	
	printf("二つ目の数字を教えて");
	scanf("%d",&m);
	
	s = k + m;
	
	printf("足した数は %d +%d = %d\n",k,m,s);
	
	return 0;
	
}
