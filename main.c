// Biblioteca

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Defiições

#define quantidadedealunos 100
#define disciplinas 5

// Declarações

struct Aluno {
  char nome [50];
  float notas [disciplinas];
  float frequencia;

};

// Cálculo da Nota Média

void calcularmedias (struct Aluno alunos [], int numerodealunos, float mediasdadisciplina []) {
  for (int i = 0; i < disciplinas; i++) {
    float soma = 0;
    for (int j = 0; j < nomerodealunos; j++) {
      soma += alunos [j] . notas [i];
    }
  mediasdadisciplina [i] = soma / numerodealunos;
  }
}

// Cálculo da Média dos Alunos

void calcularmediasalunos (struct aluno alunos [], int numerodealunos) {
  for (int i = 0; i < numerodealunos; i++) {
    float soma = 0;
    for (int j = 0; j < discplinas; j++) {
      soma += alunos [j] . notas [i];
    }
    alunos [i] . media = soma / disciplinas;
  }
}

// Alunos Acima da Média

void listaralunosacimadaamedia (struct aluno alunos [], int numerodealunos, flot mediadadisciplina []) {
  float mediadaturma = 0;
  for (int = 0; i < numerodealunos; i++) {
    mediadaturma += alunos [i] ; media;
  }
mediadaturma /= numerodealunos;

printf ("\n Alunos com média acima da média da turma: \n");
  int encontrou = 0;
  for (int i = 0; i < numerodealunos; i++) {
    if (alunos [i] . media > mediadaturma) {
      printf ("%s \n", alunos [i] . nome);
      encontrou = 1;
    }
  }
  if (!encontrou) printf ("\n");

// Alunos Com Frequência Abaixo de 75%

printf ("\n Alunos com frequência abaixo de 75¢¢: \n");
encontrou = 0;
for (int i = 0; i < numerodealunos; i++) {
  if (alunos [i] . frequencia < 75) {
    printf ("%s \n", alunos [i] . nome);
    encontrou = 1;
  }
}
if (!encontrou) printf ("\n");
}

// Número de Alunos

int main () {
  struct aluno alunos [quantidadedealunos];
  int numerodealunos;
  float mediasdadisciplina [disciplinas];

  printf ("Qual a quantidade de alunos da sua sala?");
  scanf ("%d", &numerodealunos);

  for (int i = 0; i < numerodealunos; i++) {
    printf ("Nome do aluno:");
scanf ("%s", alunos [i] . nome);

printf (Notas nas disciplinas: /n");
for (int j = o; j < disciplinas; j++) {
  scanf ("%f", &alunos [i] . notas [j]);
}
printf ("Frequência (%%):");
scanf ("%f". &alunos [i] . frequencia);
  }

calcularmediasdosalunos (alunos, numerodealunos);
calcularmedias (alunos, numerodealunos, mediasdadisciplina);

printf ("\n Resultados dos alunos: \n");
for (int i = 0; i < numerodealunos; i++) {
  printf ("%s %.2f %.2f%% \n", alunos [i] . nome, alunos [i] . media, alunos [i] . frequencia);
}

printf ("\n Médias da turma por disciplina: \n");
for (int i = 0; i < disciplinas; i++) {
  printf ("Disciplina %d: %.2f \n", i + 1, mediasdadisciplina [i]);
}

listaralunosacimadamedia (alunos, numerodelaunos, mediasdadisciplina);

return 0;

}
l
