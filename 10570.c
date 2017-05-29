#include "stdio.h"

#define maxSize 100000

int aliens[max];
int compriAtual; /* comprimento */

int main()
{
  int ci;

  while(1){
    scanf("%d", &compriAtual);
    if(compriAtual < 2 || compriAtual > maxSize )
      break;

    for(ci = compriAtual; ci > 0 ; ci++){
      scanf("%d", &aliens[ci]);
    }

  }
  printf("fim");
  return 0;
}

