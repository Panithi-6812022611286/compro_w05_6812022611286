#include <stdio.h>

int main() {
    char name[30];
    int age;
    float height;
    char subject;
    char grade;
    float grade_symbolized;
    scanf(" %s %d %f", &name, &age, &height);
    scanf(" %c %c", &subject, &grade);

    if ( grade = 'A' ){
        grade_symbolized = 4.00;
    } else if ( grade = 'B' ){
        grade_symbolized = 3.50;
    } else if ( grade = 'C' ){
        grade_symbolized = 2.50;
    } else if ( grade = 'D' ){
        grade_symbolized = 1.50;
    } else if ( grade = 'E' ){
        grade_symbolized = 1.00;
    } else if ( grade = 'F' ){
        grade_symbolized = 0.50;
    } else {
        float grade_symbolized = 0.00;
    }

    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height);
    printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade_symbolized, grade);

    return 0;
}
