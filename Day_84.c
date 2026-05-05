/*
day 84 - find peak element

Problem: Find a peak element in array.

Input:
- n
- array elements

Output:
- Print index of peak element
*/
#include <stdio.h>

void main() {

    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);


    int low=0,high=n-1;

    while(low<high){

        int mid=(low+high)/2;

        if(arr[mid]<arr[mid+1])
            low=mid+1;
        else
            high=mid;
    }

    printf("%d",low);
}
