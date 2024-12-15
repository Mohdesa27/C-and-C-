#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "Mohd Esa";
 
  int a;1
  double b;
  char c[50];  // Declare second integer, double, and String variables.
    
  scanf("%d\n",&a);
  scanf("%lf\n",&b);
  scanf("%50[^\n]",c);  // Read and save an integer, double, and String to your variables.
    
   printf("%d\n",i+a); // Print the sum of both integer variables on a new line.
    
   printf("%0.1lf\n",d+b); // Print the sum of the double variables on a new line.
    
  printf("%s %s",s,c); // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    return 0;
}