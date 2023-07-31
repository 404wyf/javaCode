#include <bits/stdc++.h>

using namespace std;
const int num=1e5+10;
int q[num],temp[num];
long long res=0;

long long  merge_sort( int l,int r){
    if(l>=r)
        return 0;
int mid=(l+r)>>1,i=l,j=mid+1,k=1;
res=merge_sort( l,mid)+merge_sort(mid+1,r);

    while(i<=mid&&j<=r){
        if(q[i]<=q[j]) temp[k++]=q[i++];
        else {
            temp[k++]=q[j++];
            res+=(mid-i+1);
                }
    }

    while(i<=mid)temp[k++]=q[i++];
    while(j<=r) temp[k++]=q[j++];


 for(int ql=l,tl=0;ql<=r;ql++,tl++){
    q[ql]=temp[tl];

 }
return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&q[i]);

        printf("%lld ",merge_sort(0,n-1));
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
const int num=1e5+10;
int q[num],temp[num];
long long res=0;

long long  merge_sort( int l,int r){
    if(l>=r)
        return 0;
int mid=(l+r)>>1,i=l,j=mid+1,k=1;
res=merge_sort( l,mid)+merge_sort(mid+1,r);

    while(i<=mid&&j<=r){
        if(q[i]<=q[j]) temp[k++]=q[i++];
        else {
            temp[k++]=q[j++];
            res+=(mid-i+1);
                }
    }

    while(i<=mid)temp[k++]=q[i++];
    while(j<=r) temp[k++]=q[j++];


 for(int ql=l,tl=0;ql<=r;ql++,tl++){
    q[ql]=temp[tl];

 }
return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&q[i]);

        printf("%lld ",merge_sort(0,n-1));
    return 0;
}

