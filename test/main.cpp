#include <bits/stdc++.h>
const int num=1e5+10;
using namespace std;
 int q[num];
int main()
{
     int n,m,x,mid;
     scanf("%d%d",&n,&m);
     for(int i=0;i<n;i++)
        scanf("%d",&q[i]);

     while(m--){
        scanf("%d",&x);
        int l=0,r=n-1;
        while(l<r){
            mid=l+r>>1;
            if(q[mid]>=x) r=mid;
            else l=mid+1;
        }
        if(q[l]!=x) printf("-1 -1\n");
        else{
                printf("%d ",l);
                l=0,r=n-1;
            while(l<r){
                mid=l+r+1>>1;
                if(q[mid]<=x)l=mid;
                else r=mid-1;
            }
        printf("%d\n",l);
        }

     }
     return 0;
}
