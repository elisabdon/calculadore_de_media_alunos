#include <stdio.h>
#include <windows.h>

#define TOTAL_ALUNO 50 


	struct Aluno
 {
    char nome[50];
    char disciplina[50];
    float prova1;
    float prova2;
};


void resultado_aluno(struct Aluno aluno) 
{
	system("color 0C");
	printf("\n=== SISTEMA DE NOTAS === \n");
    printf("\nNome: %s\n", aluno.nome);
    printf("Disciplina: %s\n", aluno.disciplina);
    printf("Prova 1: %.2f\n", aluno.prova1);
    printf("Prova 2: %.2f\n", aluno.prova2);
    printf("Media: %.2f\n", (aluno.prova1 + aluno.prova2) / 2);
    printf("Aprovado: %s\n", ((aluno.prova1 + aluno.prova2) / 2) >= 7 ? "Sim" : "Nao");
    printf("\n");
}

int main() 
{
    struct Aluno alunos[TOTAL_ALUNO]; 
    int n; 
    
	system("color 0E");
    printf("Digite o numero de alunos que deseja calcular a media final. (maximo %d): ", TOTAL_ALUNO);
    printf("\n--> ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
	{
        printf("\nAluno %d:\n", i+1);
        printf("Digite o nome: ");
        scanf("%s", alunos[i].nome);
        printf("Digite a disciplina: ");
        scanf("%s", alunos[i].disciplina);
        printf("Digite a nota da prova 1: ");
        scanf("%f", &alunos[i].prova1);
        printf("Digite a nota da prova 2: ");
        scanf("%f", &alunos[i].prova2);
        	system("cls");
        	system("color 0D");
			printf("\n\n\t\t .  CARREGANDO .  ");
			Sleep(400); 
			system("cls");
			printf("\n\n\t\t . .  CARREGANDO . . ");
			Sleep(400); 
			system("cls");
			printf("\n\n\t\t . . .  CARREGANDO . . . ");
			Sleep(400); 
			system("cls");
			printf("\n\n\t\t . . . .  CAREGANDO . . . . ");
			Sleep(400); 
			system("cls");
    }

    for (int i = 0; i < n; i++) 
	{
        resultado_aluno(alunos[i]);
    }

    return 0;
}