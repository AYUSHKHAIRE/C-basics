#include <stdio.h>
#include <string.h>
struct Student
{
    char f_name[20];    // first name
    char l_name[20];    // last name
    int id_number;      // social security number
    double grade_point; // grade point average
};

int main()
{
    struct Student S1, S2;
    // Assign values to members of S1

    // S1.f_name =  "Rosa";  throw a error message
    // [Error] incompatible types in assignment of 'const char [5]' to 'char [20]'
    // So use strcpy() function to assign the value to s1.f_name, s1.l_name

    strcpy(S1.f_name, "Rosa");
    strcpy(S1.l_name, "Rowe");
    S1.id_number = 123;
    S1.grade_point = 88.89;

    // Assign values to members of S2
    strcpy(S2.f_name, "Kyla");
    strcpy(S2.l_name, "Chavez");
    S2.id_number = 124;
    S2.grade_point = 91.56;

    // Print the values the members S1
    printf("Student details:\n");
    printf("\nFirst name: %s", S1.f_name);
    printf("\nLast name: %s", S1.l_name);
    printf("\nSocial security number: %d", S1.id_number);
    printf("\nGrade point average: %5.2f", S1.grade_point);

    // Print the values the members S2
    printf("\n\nFirst name: %s", S2.f_name);
    printf("\nLast name: %s", S2.l_name);
    printf("\nSocial security number: %d", S2.id_number);
    printf("\nGrade point average: %5.2f", S2.grade_point);
    return 0;
}