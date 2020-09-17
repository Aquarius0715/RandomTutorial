#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Random(int n) {

    srand((unsigned int)time(NULL));

    return rand() % n + 1;

}

int main() {

    printf("結果: %d", Random(10));

    return 0;
}
