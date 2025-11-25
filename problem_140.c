//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>
enum Gender { MALE, FEMALE};
struct Person {
    char name[50];
    enum Gender gender;
};
int main() {
    struct Person p;
    int g;

printf("Enter your name: ");
scanf("%s", p.name);
printf("Enter gender with the number\n ");
scanf("%d", &g);
p.gender = g;
 printf("name: %s | Gender: ", p.name);
    switch(p.gender) {
 case MALE:
 printf("Male");
 break;
  case FEMALE:
 printf("Female");
 break;
 default:
printf("Invalid");
    }

    return 0;
}
