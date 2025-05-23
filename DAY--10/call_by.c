//call by value;
#include <stdio.h>
void swap(int a,int b){
    int t=x;
    a=90;
    b=100;
    printf("\nswapping : %d %d",a,b);
}
int main
{
    int a=5,b=10;
    printf("%d %d",a,b);
    swap(a,b);
    printf("\n%d %d",a,b);
    return 0;
}