/* day 95 */
#include <stdio.h>
void main(){int n;scanf("%d",&n);float a[n];for(int i=0;i<n;i++)scanf("%f",&a[i]);int b[n];for(int i=0;i<n;i++)b[i]=0;for(int i=0;i<n;i++){int idx=a[i]*n;b[idx]++;}for(int i=0;i<n;i++){while(b[i]--)printf("%.2f ",(float)i/n);}}