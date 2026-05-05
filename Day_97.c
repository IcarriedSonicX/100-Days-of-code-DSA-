/* day 97 */
#include <stdio.h>
void main(){int n;scanf("%d",&n);int s[n],e[n];for(int i=0;i<n;i++)scanf("%d%d",&s[i],&e[i]);int c=1,last=e[0];for(int i=1;i<n;i++){if(s[i]>=last){c++;last=e[i];}}printf("%d",c);}