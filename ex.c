#include <stdio.h>
int main(){
    char r,s,n,compromisso,cidade,dinheiro,chovendo,perto;
    printf("Tenho compromisso no dia? ");
    scanf(" %c",&compromisso);
    printf("Vou estar na cidade? ");
    scanf(" %c",&cidade);
    printf("Tenho dinheiro? ");
    scanf(" %c",&dinheiro);
    printf("Esta chovendo? ");
    scanf(" %c",&chovendo);
    printf("E perto? ");
    scanf(" %c",&perto);



    if ((compromisso=='n') && (cidade=='s') && (((dinheiro=='s') && (chovendo=='n')) || ((dinheiro=='n') && (perto=='s'))))
        printf("\nEu vou!");

    else{
        printf("\nNao vou!");
    }

     return 0;
}
