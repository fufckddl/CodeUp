#include <stdio.h>

int n, d[110];

int f(){
    int temp = 0;
    for(int i = 0; i<n; i++){
        if(d[i]<temp){temp = d[i];}
    }
    for(int i = 0; i<n; i++){
        if(d[i] == temp){
            return i+1;
            break;
        }
    }
}
int main()
{
  scanf("%d", &n);

  for(int i=0; i<n; i++)
    scanf("%d", &d[i]);

  printf("%d", f());
  return 0;
}
