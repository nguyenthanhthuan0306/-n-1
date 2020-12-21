#include <iostream>
#include <cstdio>
#include <math.h>
#include <algorithm>

#define maxn 100000

using namespace std;

int i,j,s,n,d[5],h[maxn];

int run(int u)
{
    if (h[u]==h[u+1]) return 0;
    return (h[u]<h[u+1])?1:2;
}
int main()
{
    freopen("ROUTE.INP","r",stdin);
    freopen("ROUTE.OUT","w",stdout);
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        scanf("%d",&h[i]);}
    n++; h[n]=h[1];
    s=-1;
    for (i=1;i<n;i++)
    {
        int u=run(i);
        if(u!=s) d[u]++, s=u;
    }
    printf("%d %d %d",d[0],d[1],d[2]);
    return 0;
}
