#include <stdio.h>
#define size 17
/*
1
4 2

0011
0101
0110
1001
1010
1100

0000

*/

int main(){

  int cases,h,n;
  // char result[size];
  char s[size];
  int countI;

  scanf("%d",&cases);

/*while(casos--){
  scanf(%d%d,h,n);
}*/
  /*
  a partira da posição 0
  permutation(s, 0, h, n)*/


  for(cI=0; cI <cases; cI++){
    scanf("%d",&h);
    scanf("%d",&n);
    result =
    for(countI=0; countI ; count++){

    }
    printf("%s", result);
  }

  printf("\ncases: %d",cases);
  printf("\nh: %d",h);
  printf("\nn: %d",n);

  return 0;
}

//nextPermutation
int permutation(char s[17], int index, int h, int n){
    //caso base - faz parar
  if(index >= h){
    s[index] = '\0';
    printf("%s\n",s);
  }else{
    //Trabalho

  }
}

// 0000
// 0011
// 0