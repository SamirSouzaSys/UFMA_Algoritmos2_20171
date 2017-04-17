#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define sizeStr 80
/* size 2-99 */

#define Caw 12.01
#define Haw  1.008
#define Oaw 16.000
#define Naw 14.010

char inputStr[sizeStr];

int getMolarMass(int position, float atomicWeight, float *currentTotal);

int main()
{
  int numberTests, strLength;
  int cI;
  float currentTotal;
  char currentLocaltion;

  scanf("%d",&numberTests);

  while(numberTests--){
    scanf("%s",inputStr);
    strLength = strlen(inputStr);

    if(strLength > sizeStr){
      return 0;
    }

    currentTotal = 0.0;
    for(cI = 0; cI < strLength; cI++){
      switch(inputStr[cI]){
        case 'C':
          cI = getMolarMass(cI, (float)Caw,  &currentTotal);
          break;

        case 'H':
          cI = getMolarMass(cI, (float)Haw,  &currentTotal);
          break;

        case 'O':
          cI = getMolarMass(cI, (float)Oaw,  &currentTotal);
          break;

        case 'N':
          cI = getMolarMass(cI, (float)Naw,  &currentTotal);
          break;
      }
    }
    printf("%.3f\n",currentTotal);
  }
  return 0;
}

int getMolarMass(int position, float atomicWeight, float *currentTotal){

  int firstDigit, secondDigit;

  firstDigit = isdigit(inputStr[position+1]);
  secondDigit = isdigit(inputStr[position+2]);

  if(firstDigit != 0){
    firstDigit = inputStr[position+1];
    if(secondDigit != 0){
      secondDigit = (float)inputStr[position+2];
      *currentTotal += ( ((firstDigit-48)*10 + (secondDigit-48) ) * atomicWeight );
      return position+2;
    }else{
      *currentTotal += ((firstDigit-48) * atomicWeight);
      return position+1;
    }
  }else{
    *currentTotal += atomicWeight;
    return position;
  }
}