#include "stdio.h"

#define maxSize 100000

int compriAtual; /* comprimento */
char directionNow[2], currentDirection[2]; /* comprimento */
// enum directions {+x = 1, -y, -x, +y, +z, -z};

int main()
{
  int ci;

  while(1){
    scanf("%d", &compriAtual);
    if(compriAtual < 2 || compriAtual > maxSize )
      break;

    for(ci = compriAtual; ci >= 2 ; ci--){
      scanf("%s", directionNow);

      if(directionNow[0] == '+'){
        if(directionNow[1] == 'x'){
          /*printf("\n+X aqui");*/
        }
        else if(directionNow[1] == 'y'){
          /*printf("\n+y");*/
        }else{
          /*printf("\n+z");*/
        }
      }
      else if(directionNow[0] == '-'){
        if(directionNow[1] == 'x'){
          /*printf("\n-X aqui");*/
        }
        else if(directionNow[1] == 'y'){
          /*printf("\n-y");*/
        }else{
          /*printf("\n-z");*/
        }
      }else{
        /*printf("\nNo");*/
      }
    }
  }
  printf("fim");
  return 0;
}

