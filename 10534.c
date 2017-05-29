#include <stdio.h>
#define maxNumbers 10000

int main()
{
  int numbers[10000];
  int cT = -1, cI;  /* currentTotal - Count i */
  int posG;         /* position Greatest*/
  int currG = 0, currM = 0; /* current greatest, current minor */
  int qtdSI, qtdSD, result; /* stackIncrease - stackDecrease */

  while(scanf("%d",&cT) != EOF){
  /*while (scanf("%d %d", &m, &n)!=EOF){*/
    qtdSI = 1;
    qtdSD = 1;

    scanf("%d",&numbers[0]);
    currG = numbers[0];
    currM = numbers[0];

    for(cI = 1, currG = 0; cI < cT ; cI++){
      scanf("%d",&numbers[cI]);
      if(numbers[cI] > currG){
        currG = numbers[cI];
        posG = cI;
        qtdSI++;
      }
    }

    for(cI = posG; cI < cT ; cI++){
      if(numbers[cI] < currG){
        currM = numbers[cI];
        qtdSD++;
      }
    }
    result = qtdSI+qtdSD-1;
    printf("\n\ncurrG %d currM %d qtdSI %d qtdSD %d, Result - %d",currG,currM,qtdSI,qtdSD,result);
  }

  printf("\n\nCabou!!");
  return 0;
}