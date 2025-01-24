#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); 

    int intelligence = rand() % 21; 
    int stamina = rand() % (21 - intelligence); 
    int charisma = 20 - (intelligence + stamina); 

    if (intelligence >= stamina && intelligence >= charisma) {
        printf("クラス: mage\n");
    } else if (stamina >= intelligence && stamina >= charisma) {
        printf("クラス: knight\n");
    } else {
        printf("クラス: thief\n");
    }

    printf("intelligence: %d\n", intelligence);
    printf("stamina: %d\n", stamina);
    printf("charisma: %d\n", charisma);

    return 0;
}
