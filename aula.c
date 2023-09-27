#include <stdio.h>

int main(){
    float p1, p2, r;

    int nMin = 1; 

    printf("Digite a primeira nota: ");
    scanf("%f", &p1);

    if ((p1 >= 0) && (p1 < 5)) {
        nMin = 0;
    } else if (nMin == 1) {
        if ((p1 >= 0) && (p1 <= 10)) {
            printf("Entre com a segunda nota: ");
            scanf("%f", &p2);
            if ((p2 >= 0) && (p2 <= 10)) {
                r = (p1 + p2) / 2;
                printf("\nA nota final e: %f", r);
                if (r >= 5) {
                    printf(" - Aprovado");
                } else {
                    printf(" - Reprovado");
                }
            } else {
                printf("Nota invalida");
            }
        } else {
            printf("Nota invalida");
        }
    } printf("Voce nao atingiu a nota suficiente para fazer a p2");

    return 0;
}