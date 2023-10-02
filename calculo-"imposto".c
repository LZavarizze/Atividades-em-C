#include <stdio.h>

int main(void) {
  int idade;
  int anonasc;
  float salario, salarioliq, desconto;
  char nome[10];
  printf("Informe o nome do colaborador: ");
  scanf("%s",&nome);
  printf("Qual a idade do colaborador: ");
  scanf("%d",&idade);
  printf("Informe o salário: ");
  scanf("%f",&salario);
  anonasc=2023-idade;

  if (salario>1000){
      salarioliq=salario*0.92;
  }else{
      salarioliq=salario;
  }
  desconto=salario-salarioliq;
  printf("%s sua idade é %d e nasceu no ano de %d",nome,idade,anonasc);
  printf("\n\n");
  printf("Seu salário bruto é R$%.2f com um desconto de R$%.2f que resulta em um salário de R$%.2f", salario, desconto, salarioliq);
  
}
