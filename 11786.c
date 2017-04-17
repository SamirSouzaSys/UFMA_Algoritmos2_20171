#include <stdio.h>
#include <string.h>
#define size  10001
#define true  1
#define false 0

char testCase[size];

int getValue(int countI, int totalLenStr, float *pontuation);

int main()
{
/* numberTestes CountTests */
  int numberTests, cTests;
/* countI countJ */
  int cI, cJ, deslocamento;
/* Current Position */
  int currentPos, lenStrs;
  float resultFinal,localPontuation;

  scanf("%d", &numberTests);

  for(cTests=0; cTests<numberTests; cTests++){
    scanf("%s",testCase);
    lenStrs = strlen(testCase);
/*printf("-- %s\n", testCase);*/

    if(lenStrs > 101){
      break;
    }
    resultFinal = 0;
    for(cI = 0; cI < lenStrs; cI++){
      localPontuation = 0;
      printf("\n--> Casas %d -- Pontos %.1f", cI,resultFinal);
      if(testCase[cI] == '\\'){
        deslocamento = getValue(cI,lenStrs,&localPontuation);
        cI += deslocamento;

      }
      resultFinal += localPontuation;
      printf("\n       <-- Casas %d -- Pontos %.1f", cI,resultFinal);
    }
    printf("\n~~~~~~~~~~~~~~~~Caso %d pontos %.1f\n", cTests+1, resultFinal);
  }
  return 0;
}
/*
return amount of visited positions
*/

int getValue(int posAtual, int totalLenStr, float *prevPontuation)
{
// *prevPontuation += 0.5;
  int amountVisPositions = 0;
  int deslocamentoLocal,deslocamentoPrev = 0;
  float pontuationLocal = 0;
  printf("\n           = VisitedPosit %d - Pontos %.1f - CountI %d ",(int)amountVisPositions,*prevPontuation,posAtual);

  for(posAtual++; posAtual < totalLenStr ; posAtual++){
    if(testCase[posAtual] == '/'){
      *prevPontuation = 1 + pontuationLocal;
      amountVisPositions++;
      return amountVisPositions;
    }else{
      if( testCase[posAtual] == '_' ){
        amountVisPositions++;
        pontuationLocal += 1;
      }else{
        if(testCase[posAtual] == '\\'){
          amountVisPositions++;
          deslocamentoPrev = posAtual;
          deslocamentoLocal = getValue(posAtual, totalLenStr, prevPontuation);
          if(deslocamentoLocal > 1){
            *prevPontuation += (float)(deslocamentoLocal - amountVisPositions - 1);
          }
          return amountVisPositions += deslocamentoLocal;
        }else{
          printf("\nooooo retornando 1");
          return 1;
        }
      }
    }
  }
  return amountVisPositions;
}



// /* Case / */
//     if(testCase[countI] == '/'){
//       printf("\n -> Voltou_ pontos %.1f - visPosit %d",*pontuation,(int)++amountVisPositions);
//     }else{
// /* Case _ */
//       if( testCase[countI] == '_' ){

//       }else{
// /* Case \\ */
//         if(testCase[countI] == '\\') {
//         }else{
//           printf("\n  -> Voltou 0 _ P pontos %.1f - visPosit %d",*pontuation,(int)++amountVisPositions);
//           return 0;
//         }
//       }
//     }
//   }
//   printf("\n   -> Voltou Pont _ P pontos %.1f - visPosit %d",*pontuation,(int)++amountVisPositions);
//   return (int)amountVisPositions;
// }