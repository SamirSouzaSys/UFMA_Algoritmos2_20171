#include <stdio.h>
#include <string.h>
#define size 80

int main(){
  int numberTests, strLength;
  int countI, totalOfPoints, currentPotuation;
  char inputStr[size];

  scanf("%d", &numberTests);

  while(numberTests > 0){
    scanf("%s",inputStr);
    strLength = (int)strlen(inputStr);

    totalOfPoints = 0;
    currentPotuation = 1;

    for(countI=0; countI<strLength; countI++){
      if(inputStr[countI] == 'O'){
        if(inputStr[countI - 1] == 'O' ){
          currentPotuation += 1;
          totalOfPoints += currentPotuation;
        }else{
          totalOfPoints += currentPotuation;
        }
      }else{
        currentPotuation = 1;
      }
    }
    printf("%d\n", totalOfPoints);
    numberTests--;
  }
  return 0;
}