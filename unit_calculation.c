#include <stdio.h>
// all the months from jan to oct and sep were calculated randomly by calculator
int main() {
  int previous_units, present_units, units_consumed, total_bill;
  
  printf("Enter the previous units of the past months: ");
  scanf("%d", &previous_units);
  
  printf("Enter the present units till now : ");
  scanf("%d", &present_units);
  
  units_consumed = present_units - previous_units;
  total_bill = units_consumed * 5;
  
  printf("Units consumed in October: %d\n", units_consumed);
  printf("Total bill for October: %d\n", total_bill);
  
  return 0;
}
