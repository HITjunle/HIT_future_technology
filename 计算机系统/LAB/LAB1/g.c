//f和g都用double类型，循环算法求g
#include<stdio.h>
int main(){
    double f=1,ff=1,fff;
    int n = 100;
    for (int i = 1; i < n; i++)
    {
        fff = f+ff;
        f = ff;
        ff = fff;
    }
    printf("%.8lf",f/ff);

}
