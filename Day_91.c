/* day 91 */
#include <stdio.h>
void main(){int n;scanf("%d",&n);int a[20],i=0;while(n>0){a[i++]=n%10;n/=10;}if(i<=2){printf("Yes");return;}int d=a[1]-a[0];for(int j=2;j<i;j++){if(a[j]-a[j-1]!=d){printf("No");return;}}printf("Yes");}