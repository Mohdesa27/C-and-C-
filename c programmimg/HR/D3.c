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
    int n;
    scanf("%d",&n);
    if(n%2!=0)
    printf("Weird");
    else {
    if (2<=n && n<=5) 
        printf("Not Weird");
        else if (6<=n && n<=20)
        printf("Weird");
        else 
        printf("Not Weird");     
        }
    return 0;
}