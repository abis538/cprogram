#include <stdio.h>
void sort(int []x){
    int n= sizeof(x)/sizeof(x[0]);
    for(int i=0;i<=n-1;i++){
        for(int j =0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int t=arr[j];
                x[j]= x[j+1];
                x[j+1]=t;
            }
        }
    }
}