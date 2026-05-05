/* day 99 */
#include <stdio.h>
void main(){int n;scanf("%d",&n);int p[n],s[n];for(int i=0;i<n;i++)scanf("%d",&p[i]);for(int i=0;i<n;i++)scanf("%d",&s[i]);int f=0;float last=0;for(int i=n-1;i>=0;i--){float t=(float)(100-p[i])/s[i];if(t>last){f++;last=t;}}printf("%d",f);}