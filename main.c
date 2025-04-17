// Biblioteca

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definições

#define quantidadedealunos 100
#define disciplinas 5

// Declarações

struct Aluno {
  char nome [50];
  float notas [disciplinas];
  float frequencia;
  float media;

};

// Cálculo da Nota Média

void calcularmedias (struct Aluno alunos [], int numerodealunos, float mediasdadisciplina []) {
  for (int i = 0; i < disciplinas; i++) {
    float soma = 0;
    for (int j = 0; j < numerodealunos; j++) {
      soma += alunos[i].notas[j];
    }
  mediasdadisciplina [i] = soma / numerodealunos;
  }
}

// Cálculo da Média dos Alunos

void calcularmediasdosalunos (struct Aluno alunos [], int numerodealunos) {
  for (int i = 0; i < numerodealunos; i++) {
    float soma = 0;
    for (int j = 0; j < disciplinas; j++) {
      soma += alunos[j].notas[i];
    }
    alunos[i].media = soma / disciplinas;
  }
}

// Alunos Acima da Média

void listaralunosacimadamedia (struct Aluno alunos [], int numerodealunos, float mediadadisciplina []) {
  float mediadaturma = 0;
  for (int i = 0; i < numerodealunos; i++) {
    mediadaturma += alunos[i].media;
  }
  mediadaturma /= numerodealunos;

printf ("\n Alunos com média acima da média da turma: \n");
  int encontrou = 0;
  for (int i = 0; i < numerodealunos; i++) {
    if (alunos[i].media > mediadaturma) {
      printf ("%s \n", alunos[i].nome);
      encontrou = 1;
    }
  }
  if (!encontrou) printf ("\n");

// Alunos Com Frequência Abaixo de 75%

printf ("\n Alunos com frequência abaixo de 75%%: \n");
encontrou = 0;
  for (int i = 0; i < numerodealunos; i++) {
    if (alunos [i] . frequencia < 75) {
    printf ("%s \n", alunos [i].nome);
    encontrou = 1;
    }
  }
  if (!encontrou) printf ("\n");
}

// Número de Alunos

int main () {
  struct Aluno alunos [quantidadedealunos];
  int numerodealunos;
  float mediasdadisciplina [disciplinas];

  printf ("Qual a quantidade de alunos da sua sala?");
  scanf ("%d", &numerodealunos);

  for (int i = 0; i < numerodealunos; i++) {
    printf ("Nome do aluno: ");
    scanf ("%s", alunos [i].nome);

  printf ("Notas nas disciplinas: \n");
    for (int j = 0; j < disciplinas; j++) {
    scanf ("%f", &alunos[i].notas [j]);
}
  printf ("Frequência (%%): ");
  scanf ("%f", &alunos[i].frequencia);
  }

calcularmediasdosalunos (alunos, numerodealunos);
calcularmedias (alunos, numerodealunos, mediasdadisciplina);

  printf ("\n Resultados dos alunos: \n");
    for (int i = 0; i < numerodealunos; i++) {
    printf ("%s %.2f %.2f%% \n", alunos[i].nome, alunos[i].media, alunos[i]. frequencia);
  }

  printf ("\n Médias da turma por disciplina: \n");
    for (int i = 0; i < disciplinas; i++) {
    printf ("Disciplina %d: %.2f \n", i + 1, mediasdadisciplina [i]);
}

listaralunosacimadamedia (alunos, numerodealunos, mediasdadisciplina);

return 0;

}
