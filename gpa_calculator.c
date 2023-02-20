#include<stdio.h>
#include<string.h>
int main()
{
    float GPA, points=0, total=0, credithour=0, totalhour=0;
    char grade[15];
    int courses;
    printf("Enter Number of courses:\n ");
    scanf("%d",&courses);
    for(int i= 1; i<=courses;i++)
    {
        printf("your grade in course (%d) \n",i );
        scanf("%s",&grade);
        printf("your Credit hour of course (%d) \n",i);
        scanf("%d",&credithour);
        totalhour=totalhour+credithour;
        if ( strcmp(grade,"A" )==0 )
        {
            points=4.0;
        }
        else if (strcmp (grade , "A-")==0)
        {
            points=3.67;
        }
          else if (strcmp (grade , "B+")==0)
        {
            points=3.33;
        }
          else if (strcmp (grade , "B")==0)
        {
            points=3.0;
        }
          else if(strcmp (grade , "B-")==0)
        {
            points=2.67;
        }
          else if (strcmp (grade , "C+")==0)
        {
            points=2.33;
        }
          else if (strcmp (grade , "C")==0)
        {
            points=2.0;
        }
          else if (strcmp (grade , "C-")==0)
        {
            points=1.67;
        }
          else if (strcmp (grade , "D+")==0)
        {
            points=1.33;
        }
          else if (strcmp (grade , "D+")==0)
        {
            points=1.00;
        }
          else if (strcmp (grade , "F")==0)
        {
            points=0;
        }
    
     total=total+points*credithour;
    }
GPA=total/totalhour;
printf("Your GPA is %.2f ",GPA);
return 0;
}