/*
day 88 - aggressive cows problem

Problem: Place cows in stalls such that minimum distance is maximized.

Input:
- n stalls
- stall positions
- number of cows

Output:
- Print maximum minimum distance
*/
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a,const void* b){
    return (*(int*)a - *(int*)b);
}

int canPlace(int arr[],int n,int cows,int dist){

    int count=1,last=arr[0];

    for(int i=1;i<n;i++){

        if(arr[i]-last>=dist){
            count++;
            last=arr[i];

            if(count>=cows)
                return 1;
        }
    }

    return 0;
}

void main() {

    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int cows;
    scanf("%d",&cows);


    qsort(arr,n,sizeof(int),compare);


    int low=1,high=arr[n-1]-arr[0],ans=0;

    while(low<=high){

        int mid=(low+high)/2;

        if(canPlace(arr,n,cows,mid)){
            ans=mid;
            low=mid+1;
        }
        else
            high=mid-1;
    }

    printf("%d",ans);
}
