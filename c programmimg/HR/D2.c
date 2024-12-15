#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    double mp;
    int tp,tx,result;
    float tpp,txp;
    scanf("%lf\n",&mp);
    scanf("%d\n%d",&tp,&tx);
    tpp=(tp*.01)*mp;
    txp=(tx*.01)*mp;
    result=mp+tpp+txp+.5;
    printf("%d",result);
    return 0;
}