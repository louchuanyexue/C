#include<stdio.h>
int main()
{
  int school[100010]={0};
  int schid,mark,n,sl=1,max=-1;
  scanf("%d",&n);
  for(int j=0;j<n;j++){
    scanf("%d %d",&schid,&mark);
    school[schid]+=mark;
  }
  for(int i=1;i<n;i++){
    if(school[i]>max){
      sl = i;
      max =school[i];
    }
  }
  printf("%d %d",sl,school[sl]);
}
