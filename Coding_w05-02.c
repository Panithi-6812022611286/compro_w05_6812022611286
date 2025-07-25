#include <stdio.h>

int main() {
    char name[30]; // รับค่าตัวแปร name เป็นชื่อ โดยเป็น char กำหนดขนาดไว้ที่ 30 
    int age; // รับค่าตัวแปร age เป็นอายุของนักศึกษา โดยเป็น int
    float height; // รับค่าตัวแปร height เป็นส่วนสูงของนักศึกษา โดยเป็น float
    char subject; // รับค่าตัวแปร subject เป็นวิชา โดยเป็น char
    float grade; // รับค่าตัวแปร grade เป็นเกรดของนักศึกษา โดยเป็น float
    char grade_symbolized; // รับค่าตัวแปร grade_symbolized เป็นเกรดของนักศึกษาในรูปแบบของตัวอักษรตวเดียว โดยเป็น  char
 
    printf ("Please enter your name, age and height (Using the space bar between words.) : \n"); // แสดงข้อความให้ใส่ชื่อ อายุ และ ส่วนสูง (โดยให้เว้นช่องว่างระหว่างคำ)
    scanf(" %s %d %f", &name, &age, &height); // รับค่า ชื่อ อายุ เเละ ส่วนสูง ของนักศึกษา
    printf ("Please enter your the first character of your subject, grade and grade by symbolized (Using the space bar between words.) : \n"); 
    // แสดงข้อความให้ใส่วิชา เกรด และ เกรดในรูปแบบตัวอักษร (โดยให้เว้นช่องว่างระหว่างคำ)
    scanf(" %c %f %c", &subject, &grade, &grade_symbolized); // รับค่า วิชา เกรด เเละ เกรดในรูปแบบตัวอักษร ของนักศึกษา

    printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height); // แสดงค่า ชื่อ อายุ และ ส่วนสูงทศนิยม 1 ตำแหน่ง ของนักศุกษา
    printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, grade_symbolized); // แสดงค่าว่าใน วิชา ชื่อ ได้ เกรดทศนิยม 2 ตำแหน่ง เเละ เกรดในรูปแบบตัวอักษร ของนักศุกษา

    return 0;
}