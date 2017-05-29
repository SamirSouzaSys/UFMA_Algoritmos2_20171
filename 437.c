#include <stdio.h>

typedef struct{
  int x,y,z;
} block;

int index,n;
block v[181];

void addBlock(int x, int y, int z){
  v[index].x = x;
  v[index].y = y;
  v[index].z = z;
  index++;
}

int memo[181];

int maxTower(int i){
  int best = v[i].z;
  for(int j=0; j<index; j++){
    if()
  }
  return best;
}

int main()
{
  int n,index;
  for(int case = 1; ; case++){
    scanf("%d",&n);
    index = 0;
    for(int i=0; i<n; i++){
      int x,y,z;
      scanf("%d %d %d", &x, &y, &z);
      addBlock(x,y,z);
      addBlock(x,z,y);
      addBlock(y,x,z);
      addBlock(y,z,x);
      addBlock(z,x,y);
      addBlock(z,y,x);
    }

  }
  return 0;
}