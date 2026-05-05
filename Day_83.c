/*
day 83 - search in rotated sorted array

Problem: Search an element in a rotated sorted array.

Input:
- n
- array elements
- key

Output:
- Print index of key or -1
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


    int low=0,high=n-1;

    while(low<=high){

        int mid=(low+high)/2;

        if(arr[mid]==key){
            printf("%d",mid);
            return;
        }

        if(arr[low]<=arr[mid]){

            if(key>=arr[low] && key<arr[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        else{

            if(key>arr[mid] && key<=arr[high])
                low=mid+1;
            else
                high=mid-1;
        }
    }

    printf("-1");
}
