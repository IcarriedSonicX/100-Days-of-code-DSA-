/*
day 86 - square root using binary search

Problem: Find square root of a number using binary search.

Input:
- n

Output:
- Print integer square root
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int low=0,high=n,ans=0;

    while(low<=high){

        int mid=(low+high)/2;

        if(mid*mid<=n){
            ans=mid;
            low=mid+1;
        }
        else
            high=mid-1;
    }

    printf("%d",ans);
}
