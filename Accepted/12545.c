#include <stdio.h>
#include <string.h>
#define size  101
#define true  1
#define false 0

char fl[size], sl[size];

int search(int direction, int total, int countI);

int main()
{
  int numberTests, cTests; /* numberTestes CountTests */

  int qtd_1_fl, qtd_i_fl, qtd_1_sl, lenStrs;
  int cI, cJ; /* countI countJ */
  int positionLast1;
  /* int hasLast1, positionLast1; */
  /* Last1Position numberCharToChange */
  int alterations;

  scanf("%d", &numberTests);
  if(numberTests > 200){
    return 0;
  }

  for(cTests=0; cTests<numberTests; cTests++){
    alterations=0;
    scanf("%s",fl);
    scanf("%s",sl);
    lenStrs = strlen(fl);

    if(lenStrs > 101){
      break;
    }

    /* Captura Dados */
    qtd_1_fl = qtd_i_fl = qtd_1_sl = 0;

    /* Count 1 ? */
    for(cI=0; cI < lenStrs; cI++){
      if(fl[cI] == '?'){
        qtd_i_fl++;
      }else if(fl[cI] == '1'){
        qtd_1_fl++;
      }
      if(sl[cI] == '1'){
        qtd_1_sl++;
      }
    }

    /* PRINT -> -1 */
    if(qtd_1_sl == 0 || qtd_1_fl > qtd_1_sl){
      printf("Case %d: -1\n", cTests+1);
    }else{
      cI = cJ = 0;

    /* Change ? -> 0,1 */
      for(cI=0; cI < lenStrs; cI++){
        if(fl[cI] == '?'){
          if(qtd_1_fl < qtd_1_sl){
            if(sl[cI] == '1'){
              fl[cI] = '1';
              qtd_1_fl++;
            }else{
              fl[cI] = '0';
            }
          }else{
            fl[cI] = '0';
          }
          alterations++;
        }
      }

    /*  Change 0 -> 1 */
      positionLast1 = -1;
      for(cI=0; cI < lenStrs; cI++){
        if(fl[cI] == '0'){
          if(sl[cI] == '1'){
            positionLast1 = search(-1,lenStrs,cI);
            if(positionLast1 != -1){
              fl[cI] = '1';
              fl[positionLast1] = '0';
              alterations++;
            }else{
              positionLast1 = search(1,lenStrs,cI);
              fl[cI] = '1';
              fl[positionLast1] = '0';
              alterations++;
            }
          }
        }
      }

      printf("Case %d: %d\n", cTests+1, alterations);
    }
  }

  return 0;
}

int search(int direction, int total, int countI)
{
  /* back */
  if(direction == -1){
    for(; countI >= 0; countI--){
      if(fl[countI] == '1' && sl[countI] == '0'){
        return countI;
      }
    }
    return -1;
  }else{ /* ahead */
    for(; countI < total; countI++){
      if(fl[countI] == '1' && sl[countI] == '0'){
        return countI;
      }
    }
    return -1;
  }
  return -1;
}