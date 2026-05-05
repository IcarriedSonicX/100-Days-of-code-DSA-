/* day 93 */
#include <stdio.h>
int can(int r[],int n,int p,int t){int c=0;for(int i=0;i<n;i++){int time=0,j=1;while(time+r[i]*j<=t){time+=r[i]*j;c++;j++;if(c>=p)return 1;}}return 0;}void main(){int p,n;scanf("%d%d",&p,&n);int r[n];for(int i=0;i<n;i++)scanf("%d",&r[i]);int l=0,h=1000000,ans=0;while(l<=h){int mid=(l+h)/2;if(can(r,n,p,mid)){ans=mid;h=mid-1;}else l=mid+1;}printf("%d",ans);}