#include <stdio.h>

int main() {
    int segundos;
    const int SEGUNDOS_EM_UMA_HORA = 3600;
    const int SEGUNDOS_EM_UM_MINUTO = 60;

    printf("Digite os segundos: \n");
    scanf("%d", &segundos);

    int horas = segundos / SEGUNDOS_EM_UMA_HORA;
    segundos = segundos - (horas * SEGUNDOS_EM_UMA_HORA);

    int minutos = segundos / SEGUNDOS_EM_UM_MINUTO;
    segundos = segundos - (minutos * SEGUNDOS_EM_UM_MINUTO);

    printf("%d:%d:%d", horas, minutos, segundos);
    return 0;
}
