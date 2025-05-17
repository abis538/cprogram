#include <stdio.h>
int main(){
    int size;
    int even = 0, odd = 0;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++)
    printf("%d",arr[i]);
}