#include <stdio.h>
#include <stdlib.h>

main()
{
    int idade;

    printf("Informe a sua idade: \n");
    scanf("%d", &idade);

    if (idade < 18) {
    printf("Voce nao possui permissao para conduzir! \n");
    }else{
    if (idade >= 65) {
    printf("Voce deve renovar a CNH de 3 em 3 anos! \n");
    }else{
    printf("Voce deve renovar a CNH de 5 em 5 anos! \n");
  }
 }
}
