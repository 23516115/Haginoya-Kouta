#include <stdio.h>

int main(void)
{
    int A, B, C;
    
    A = 20;
    B = 50;
    C = 20;
    
    
    if(A == 20)
       printf("Aは２０歳です\n");
    if(B != 20)
       printf("Bは２０歳ではありません\n");
    if(C >= 20)
       printf("Cは２０歳以上です\n");
    else
       printf("Aは２０歳未満です\n");
    if(A < C)
       printf("AはCより年下です\n");
    else if(A < C)
       printf("AはCより年下です");
    if(A > C)
       printf("AはCより年上です\n");
    else
       printf("BはAより年下です\n");
       
    return 0;
}
