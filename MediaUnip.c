#include <stdio.h>

int main()
{
    char aluno;
    float nota1, nota2, media;

    printf("Informe o nome do aluno: \n");
    scanf("%s", &aluno);
    printf("Informe a primeira nota: \n");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: \n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media do aluno e: %2.f\n", media);

    system("pause"); // pausa da tela no windows
    return 0; // retorno da função main
}
