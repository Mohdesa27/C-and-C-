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
    int N,i,a[10000];
    scanf("%d",&N);
    for(i=1;i<=N;i++)
     scanf("%d",&a[i]);
    for(i=N;i>=1;i--)
    {    
        printf("%d",a[i]);
        printf(" ");
    }
    return 0;
}