#include <stdio.h>
 #include <math.h>
int main()
{
int p;
float r;
int n;
printf("Enter amount");
scanf ("%d", &p);
printf("enter a rate: ");
scanf("%f", &r);
printf ("Enter number of uyea: "); scanf ("%d", &n);
float power1 = 1 + r / 100;
int power2 = n;
float ci = p * (pow(power1, power2))- p;
printf ("%f", ci);
}