#include<stdio.h>
long f(int n){
    if (n<=2)
    {
        return 1;
    }
    return f(n-1)+f(n-2);

}
int main(){
    int n = 100;
    printf("%.8lf",(double)f(n+1)/f(n));
}
