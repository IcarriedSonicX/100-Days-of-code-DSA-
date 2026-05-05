/* day 98 */
#include <stdio.h>
void main(){int n;scanf("%d",&n);int s[n],e[n];for(int i=0;i<n;i++)scanf("%d%d",&s[i],&e[i]);int st=s[0],en=e[0];for(int i=1;i<n;i++){if(s[i]<=en){if(e[i]>en)en=e[i];}else{printf("%d %d ",st,en);st=s[i];en=e[i];}}printf("%d %d",st,en);}