#include <stdio.h>
#include <string.h>

int main()
{
  // Forma muito custosa.
  // char str1[20] = "Lucas";
  // char str2[20];
  // int i;

  // for (i = 0; str1[i] != '\0'; i++)
  //   str2[i] = str1[i];

  // // str2[i] = '\0';

  // printf("%s", str2);

  // Usaremos a lib <string.h>

  // ---- 1° strlen - Tamanho de uma string
  // char palavra[20] = "Linguagem C";
  // int tamanho = strlen(palavra);

  // printf("Tamanho = %d\n", tamanho);

  // ---- 2° strcpy - Copiando uma String
  // char palavra[20] = "Linguagem C";
  // char novapalavra[30];
  // strcpy(novapalavra, palavra);

  // printf("Copia = %s\n", novapalavra);

  // ---- 3° strcat - Contatenando uma String
  // char palavra1[20] = "Bom ";
  // char palavra2[50] = "aslkdjlkjasdlkjasdlkjaasdasd23123123w";
  // strcat(palavra1, palavra2);

  // printf("palavra = %s\n", palavra1);

  // ---- 4° strcmp - Comparando strings

  char palavra1[20] = "LinguagemC";
  char palavra2[20] = "LinguagemC";

  if (strcmp(palavra1, palavra2) == 0)
    printf("As strings são iguais");
  else
    printf("As strings são diferentes");

  return 0;
}