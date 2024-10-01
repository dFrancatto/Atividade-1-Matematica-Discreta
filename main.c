#include <stdbool.h>
#include <stdio.h>
#include <string.h>

                                                                        // Davi Francatto | ADS NOITE

int main(void) {
    int p, q, r;
    char pr[11], qr[11];

    printf("Digite o logico de \"p\" (1 = verdadeiro / 0 = falso):" );
    scanf("%i", &p);
    fflush(stdin);
    switch (p) {
        case 0:
            strcpy(pr, "Falso");
        break;

        case 1:
            strcpy(pr, "Verdadeiro");
        break;

    }

    printf("\nDigite o valor de \"q\" (1 = verdadeiro / 0 = falso):" );
    scanf("%i", &q);
    system("cls");
    fflush(stdin);
    switch (q) {
        case 0:
            strcpy(qr, "Falso");
        break;

        case 1:
            strcpy(qr, "Verdadeiro");
        break;

    }

    printf("\np = %s \nq = %s\n", pr, qr);


    printf("\n ___________________________");
    printf("\n|                           |");

    // P ou Q

    r = p || q;
    printf("\n|  p v q = ");
    if (r == 0) {
        printf("Falso            |");

    } else if (r == 1) {
        printf("Verdadeiro       |");
    }

    // P e Q

    r = p && q;
    printf("\n|  p ^ q = ");
    if (r == 0) {
        printf("Falso            |");

    } else if (r == 1) {
        printf("Verdadeiro       |");
    }

    // ou P ou Q

    r = ((!p) || q) && ((!q) || p);
    printf("\n|  p _v_ q = ");
    if (r == 0) {
        printf("Falso          |");

    } else if (r == 1) {
        printf("Verdadeiro     |");
    }

    // Se P então Q

    r = (!p) || q;
    printf("\n|  p -> q = ");
    if (r == 0) {
        printf("Falso           |");

    } else if (r == 1) {
        printf("Verdadeiro      |");
    }

    // P se, somente se, Q

    r = ((!p) || q) && ((!q) || p);
    printf("\n|  p <-> q = ");
    if (r == 0) {
        printf("Falso          |");

    } else if (r == 1) {
        printf("Verdadeiro     |");
    }

    printf("\n|___________________________|\n\n");
    system("pause");

    return 0;
}
