#include <stdio.h>

int main() {
    int x, y;
    printf("Digite o x: \n");
    scanf("%d", &x);
    printf("Digite o y: \n");
    scanf("%d", &y);

    int rx, ry;
    rx = x;
    ry = y;
    x = ry;
    y = rx;

    printf("x agora eh %d e y agora eh %d", x,y);
    return 0;
}
