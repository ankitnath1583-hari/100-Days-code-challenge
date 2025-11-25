//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;};
int main() {
    int n;
 printf("Enter number of students: ");
    scanf("%d", &n);
struct Student s[n];
for (int i = 0; i < n; i++) {
   printf("\nEnter Student %d Name: ", i + 1);
 scanf("%s", s[i].name);
 printf("Enter Roll: ");
 scanf("%d", &s[i].roll);
 printf("Enter Marks: ");
        scanf("%d", &s[i].marks);}
 int topIndex = 0;  
 for (int i = 1; i < n; i++) {
 if (s[i].marks > s[topIndex].marks) {
     topIndex = i; }}
printf("\nTopper: %s (Marks: %d)", s[topIndex].name, s[topIndex].marks);

    return 0;
}
