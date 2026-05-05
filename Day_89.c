/*
day 89 - allocate minimum pages

Problem: Allocate books to students such that maximum pages assigned is minimized.

Input:
- n
- pages array
- number of students

Output:
- Print minimum possible maximum pages
*/
#include <stdio.h>

int canAllocate(int arr[],int n,int students,int maxPages){

    int count=1,sum=0;

    for(int i=0;i<n;i++){

        if(sum+arr[i]>maxPages){
            count++;
            sum=arr[i];
        }
        else
            sum+=arr[i];
    }

    return count<=students;
}

void main() {

    int n;
    scanf("%d",&n);

    int arr[n];

    int max=0,sum=0;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

        if(arr[i]>max)
            max=arr[i];

        sum+=arr[i];
    }

    int students;
    scanf("%d",&students);


    int low=max,high=sum,ans=sum;

    while(low<=high){

        int mid=(low+high)/2;

        if(canAllocate(arr,n,students,mid)){
            ans=mid;
            high=mid-1;
        }
        else
            low=mid+1;
    }

    printf("%d",ans);
}
