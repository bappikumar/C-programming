#include<stdio.h>
main(){
    int i,j,n,temp;
    printf("enter the value of n= ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++) {
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
        printf("%d\t",arr[j]);







}
