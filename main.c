
#include <stdio.h>
int main() {
    int eta, n;
    printf("Inserisci il tuo nome: ");
    scanf("%c", &n);
    printf("Inserisci la tua eta': ");
    scanf("%d", &eta);
    if (eta >= 18) {
        printf("Sei maggiorenne");

    }
    else{printf("Sei minorenne");
    }


    return 0;
}
