/*
day 82 - upper bound and lower bound

Problem: Find lower bound and upper bound of a key.

Input:
- n
- sorted array
- key

Output:
- Print lower bound index and upper bound index
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int key;
    scanf("%d",&key);


    int low=0,high=n-1,lb=-1,ub=-1;

    while(low<=high){

        int mid=(low+high)/2;

        if(arr[mid]>=key){
            lb=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }


    low=0,high=n-1;

    while(low<=high){

        int mid=(low+high)/2;

        if(arr[mid]>key){
            ub=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }

    printf("%d %d",lb,ub);
}
