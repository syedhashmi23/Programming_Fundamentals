#include <stdio.h>

void topper_selection(float first_gpa, float second_gpa, float third_gpa) 
{
    if (first_gpa > second_gpa && first_gpa > third_gpa) {
        printf("Person 1 has the highest GPA of %.2f.\n", first_gpa);
    } else if (second_gpa > first_gpa && second_gpa > third_gpa) 
    {
        printf("Person 2 has the highest GPA of %.2f.\n", second_gpa);
    } else if (third_gpa > first_gpa && third_gpa > first_gpa) {
        printf("Person 3 has the highest GPA of %.2f.\n", third_gpa);
    } else {
        printf("Two or more people have the same highest GPA.\n");
    }
}

int main() {
    float first_gpa,second_gpa,third_gpa;

    printf("Enter gpa of first person: ");
    scanf("%f", &first_gpa);
    printf("Enter gpa of second person: ");
    scanf("%f", &second_gpa);
    printf("Enter gpa of third person: ");
    scanf("%f", &third_gpa);
    topper_selection(first_gpa, second_gpa,third_gpa);
    return 0;
}
