#include <stdio.h>

int main(void) {
    for (int i = 0;; i++){
        printf("\r");
        switch( i % 4){
            case 0:
                printf("-");
                break;
            case 1:
                printf("\\");
                break;
            case 2:
                printf("|");
                break;
            case 3:
                printf("/");
                break;
        }
        fflush(stdout);
        if (i == 0x7FFFFFFF)
            i = 0;
    }
    return 0;
}