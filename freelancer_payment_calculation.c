#include <stdio.h>

int main() {
  
  float hourly_income;
  
  float fix_income;
  
  float total_income;
  
  float fixed_rate;
  
  float hourly_rate;
  
  float hourly_project;
  
  float total_projects;
  
  float total_hour;
   
  float commission;
  
  float hourly_income_commission;
  
  float fixed_income_commission;
  
  printf("enter value of hourly rate = ");

  scanf("%f",&hourly_rate);

   printf("enter value of total hours =  ");

  scanf("%f",&total_hour);
  
  printf("enter fixed rate projects = ");
  
  scanf("%f",&fixed_rate);
  
  printf("enter total projects =  ");
  
  scanf("%f",&total_projects);
  
   hourly_income = hourly_rate * total_hour ;
  
   printf("hourly income without commission= %.2f\n",hourly_income);
  
   hourly_income_commission = hourly_income-0.2*hourly_income;
  
   printf("hourly income with commission= %.2f\n",hourly_income_commission);
  
  fix_income = fixed_rate * total_projects;
  
   printf("Fixed income without commission= %.2f\n", fix_income);
  
  fixed_income_commission = fix_income-0.2*fix_income;
  
  printf("fixed income with commission= %.2f\n",fixed_income_commission);
  
  total_income = hourly_income + fix_income;
  
  printf("total_income without commission= %.2f\n",total_income);
  

  
  commission = total_income-0.2*total_income; 
 
  
  printf("Total with commission= %.2f\n",commission);
   
    return 0;
}