#include <stdio.h>

int main(void) {
  int n = 0, years;
  float sal_1, sal_2, sal_3, avg, print_benefits;
  char c;

  while (++n < 4)
    {
  printf("Enter retiree %d years of service and 3 years highest salaries: ", n);
  scanf("%d %f %f %f", &years, &sal_1, &sal_2, &sal_3);

  avg = (sal_1 + sal_2 + sal_3) / 3;
  print_benefits = ((avg * .02) * years) / 12;

  printf("Retiree: %d will receive $%.2f/month.\n", n, print_benefits);
      
    }

  
  return 0;
}