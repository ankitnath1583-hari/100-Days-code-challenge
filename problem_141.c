//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};
int main() {
struct Student s;
 printf("Enter Name: ");
scanf("%s", s.name);
printf("Enter Roll: ");
scanf("%d", &s.roll_no);
printf("Enter Marks: ");
    scanf("%d", &s.marks);
    printf("  Roll: %d ",
           s.roll_no);
    printf("\nName: %s ",
           s.name);
printf(" Marks: %d",
            s.marks);

    return 0;
}
