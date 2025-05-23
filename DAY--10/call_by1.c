//call by reference;
#include <stdio.h>
#define z 50
void swap(int *a ,int *b){//1000,200
    int t = *a;
    *a=*b;
    *b=t;
}
int main()
{
    int a=5,b=10;
    printf("%d %d",a,b);
    swap(&a,&b);//1000,2000
    printf("\n%d %d",a,b);
    return 0;
}