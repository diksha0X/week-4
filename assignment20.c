#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  
int main() {
   
    srand(time(NULL));

    
    int coin_toss_result = rand() % 2;

    
    if (coin_toss_result == 0) {
        printf("The coin landed on Tails.\n");
    } else {
        printf("The coin landed on Heads.\n");
    }

    return 0;

}
