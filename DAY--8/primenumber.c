#include <stdio.h>

int add(){
    int x,y;
    scanf("%d%d",&x,&y);
    int sum=x*y;
    int a=x+y;
    // return x+y;
}
void primenumber(int n){
    int flag=0;
    for (int i=2;i<=n-1;i++){
        if(n%i==0){
            flag++;
            break;
        }
    }
    if(flag==0) printf("%d is a prime number",n);
    else printf("%d is not a prime number",n);
}
int main()
{
    int x;
    scanf("%d",&x);
    primenumber(7);
    primenumber(18);
    int x=add();
    printf("%d",x);
    printf("%d",add());
}