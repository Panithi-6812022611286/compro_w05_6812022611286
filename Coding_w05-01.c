#include <stdio.h>

int main() {
    char name = 'C'; //ระบุ char name = C เป็นชื่อตัวอักษรเดียว โดยใช้ครื่องหมาย '' ด้วย
    int age = 18; // ระบุ int age = 18 เป็นอายุ โดย int ใช้ระบุค่าจำนวนเต็ม
    float weight = 80.5; // ระบุ float weight = 80.5 เป็นน้ำหนัก โดย float ใช้ระบุเลขทศนิยม

    printf("Student %c is %d years old.\n", name, age); // printf โดยใช้ % เเต่ละตัวให้ตรงตามค่าที่ระบในตัวแปรข้างต้น จากนั้นจึงระบุตัวแปรที่ต้องการ
    printf("His weight is %.2f kg.\n", weight); // printf โดยใช้ % เเต่ละตัวให้ตรงตามค่าที่ระบในตัวแปรข้างต้น จากนั้นจึงระบุตัวแปรที่ต้องการ
    return 0;
}