#include <stdio.h>

int main(void)
{
    int k,m;
    printf("1つ目の数字を入力して;");
    scanf("%d",&k);
    
    printf("2つ目の数字を入力して;");
    scanf("%d",&m);
    
    if(k > m)
    {
        printf("１つ目の数字%dは、２つ目の数字%dより大きいです \n",k,m);
    }
    else if(k < m)
    {
        printf("１つ目の数字%dは、２つ目の数字%dより小さいです \n",k,m);
    }
    else
    {
        printf("１つ目の数字%dと２つ目の数字%dは等しいです \n",k,m);
    }
    return 0;
}
