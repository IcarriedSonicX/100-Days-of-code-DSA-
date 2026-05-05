/* day 90 */
#include <stdio.h>
void main(){int n;scanf("%d",&n);int a[n],m=0,s=0;for(int i=0;i<n;i++){scanf("%d",&a[i]);if(a[i]>m)m=a[i];s+=a[i];}int k;scanf("%d",&k);int l=m,h=s,ans=s;while(l<=h){int mid=(l+h)/2,c=1,sum=0;for(int i=0;i<n;i++){if(sum+a[i]>mid){c++;sum=a[i];}else sum+=a[i];}if(c<=k){ans=mid;h=mid-1;}else l=mid+1;}printf("%d",ans);}