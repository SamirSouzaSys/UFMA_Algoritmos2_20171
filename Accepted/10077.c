#include <stdio.h>

void findFraction(int current[], int small[], int large[], double objective);
int mdc(int n1, int n2);

int main()
{
  int m,n;
  double objective;
  int small[2],larger[2],current[2];

  while (scanf("%d %d", &m, &n)!=EOF){
    objective = (double)m/n;


    if( (m == 1 && n == 1) ||
       (n <= 0 || m <= 0) ||
       (mdc(m,n) != 1)
       )
    {
      break;
    }
    else{
      small[0] = 0;
      small[1] = 1;

      larger[0] = 1;
      larger[1] = 0;

      current[0] = 1;
      current[1] = 1;

      findFraction(current,small,larger,objective);
    }
  }
  return 0;
}

void findFraction(int current[], int small[], int larger[], double objective){
  double doubleValue = (double)current[0]/current[1];

  if(objective < doubleValue){
    printf("L");
    larger[0] = current[0];
    larger[1] = current[1];

    current[0] += small[0];
    current[1] += small[1];

    findFraction(current,small,larger,objective);

  }else if(objective > doubleValue){
    printf("R");
    small[0] = current[0];
    small[1] = current[1];

    current[0] += larger[0];
    current[1] += larger[1];

    findFraction(current,small,larger,objective);
  }else{
    printf("\n");
  }
}

int mdc(int n1, int n2){
  if (n2 == 0)
    return n1;
  else
    return mdc(n2, n1 % n2);
}