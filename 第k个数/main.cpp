#include <bits/stdc++.h>

using namespace std;
int q[100100];

int quick_sort(int *q,int l,int r,int k){
    if(l==r)
        return q[l];
  int i=l-1,j=r+1,x=q[(l+r)>>1];
  while(i<j){
    do i++;while(q[i]<x);
    do j--;while(q[j]>x);
    if(i<j)swap(q[i],q[j]);
  }
  if(k<=(j-l+1))
    return quick_sort(q,l,j,k);
  else
    return quick_sort(q,j+1,r,k-(j-l+1));

}

int main()
{
     int n,k;
     scanf("%d %d",&n,&k);
     for(int i=0;i<n;i++)
        scanf("%d",&q[i]);
    printf("%d",quick_sort(q,0,n-1,k)) ;
    return 0;
}
