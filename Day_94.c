/* day 94 */
#include <stdio.h>
void main(){int n;scanf("%d",&n);int a[n],m=0;for(int i=0;i<n;i++){scanf("%d",&a[i]);if(a[i]>m)m=a[i];}int c[m+1];for(int i=0;i<=m;i++)c[i]=0;for(int i=0;i<n;i++)c[a[i]]++;for(int i=0;i<=m;i++){while(c[i]--)printf("%d ",i);}}