#include <stdio.h>

int main() {
  float subtotal;
  float tax;
  printf("Enter your grocery total: ");
  scanf("%f", &subtotal);
  printf("Enter the tax rate: ");
  scanf("%f", &tax);
  printf("The inal total is: %.2f\n", subtotal + subtotal*tax);
  return 0;

}
