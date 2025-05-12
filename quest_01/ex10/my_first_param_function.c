#include <stdio.h>

int timer;

void detonation_in() {
    printf("detonation in... %d seconds.\n", timer);
}

int main(){
    timer = 10;

    while(timer > 0){
        detonation_in(timer);
        timer -= 1;
    }
    return 0;
}