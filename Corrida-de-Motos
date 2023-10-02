#include <stdio.h>
  //Definir as características que irão envolver a moto (nome e tempos)
typedef struct {
  char nome[20];
  double tempo1, tempo2, tempo3;
} moto;
  //Código principal
int main() {
  moto kawasaki = {"Kawasaki"};
  moto biz = {"Biz"};
  moto titan = {"Titan"};
  //Pegar o tempo da Kawasaki e sua média
  printf("Digite o tempo que a Kawasaki levou para chegar ao final na volta 1 (em segundos): ");
  scanf("%lf", &kawasaki.tempo1);
  printf("Digite o tempo que a Kawasaki levou para chegar ao final na volta 2 (em segundos): ");
  scanf("%lf", &kawasaki.tempo2);
  printf("Digite o tempo que a Kawasaki levou para chegar ao final na volta 3 (em segundos): ");
  scanf("%lf", &kawasaki.tempo3);
  double m1 = (kawasaki.tempo1 + kawasaki.tempo2 + kawasaki.tempo3) / 3.0;
  //Pegar o tempo da Biz e sua média
  printf("Digite o tempo que a Biz levou para chegar ao final na volta 1 (em segundos): ");
  scanf("%lf", &biz.tempo1);
  printf("Digite o tempo que a Biz levou para chegar ao final na volta 2 (em segundos): ");
  scanf("%lf", &biz.tempo2);
  printf("Digite o tempo que a Biz levou para chegar ao final na volta 3 (em segundos): ");
  scanf("%lf", &biz.tempo3);
  double m2 = (biz.tempo1 + biz.tempo2 + biz.tempo3) / 3.0;
  //Pegar o tempo da Titan e sua média
  printf("Digite o tempo que a Titan levou para chegar ao final na volta 1 (em segundos): ");
  scanf("%lf", &titan.tempo1);
  printf("Digite o tempo que a Titan levou para chegar ao final na volta 2 (em segundos): ");
  scanf("%lf", &titan.tempo2);
  printf("Digite o tempo que a Titan levou para chegar ao final na volta 3 (em segundos): ");
  scanf("%lf", &titan.tempo3);
  double m3 = (titan.tempo1 + titan.tempo2 + titan.tempo3) / 3.0;
  //Definir os 2 melhores tempos
  moto melhoresTempos[2];
  if (m1 < m2) {
    melhoresTempos[0] = kawasaki;
    melhoresTempos[1] = biz;
  } else {
    melhoresTempos[0] = biz;
    melhoresTempos[1] = kawasaki;
  }
  if (m3 < melhoresTempos[0].tempo1) {
    melhoresTempos[1] = melhoresTempos[0];
    melhoresTempos[0] = titan;
  } else if (m3 < melhoresTempos[1].tempo1) {
    melhoresTempos[1] = titan;
  }
  //Printar os 2 melhores tempos
  printf("Os dois melhores tempos no circuito foram:\n");
  printf("1. %s: %.2lf segundos\n", melhoresTempos[0].nome, m1);
  printf("2. %s: %.2lf segundos\n", melhoresTempos[1].nome, m2);
  return 0;
}
