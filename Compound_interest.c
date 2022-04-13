#include<stdio.h>
#include<math.h>
int main()
{
    double p,t,r;
    scanf("%lf%lf%lf",&p,&r,&t);
    double ci,k;
    k=(1+(r/100));
    ci=p*pow(k,t);
    printf("%.2f",ci);
}