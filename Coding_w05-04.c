#include <stdio.h> 

int main() {
    char name1; // ประกาศตัวแปร ชื่อchar อายุint ส่วนสูงfloat น้ำหนักfloat เกรดchar ของนักศึกษาคนที่ 1
    int age1;
    float height1; 
    float weight1;
    char grade1;

    char name2; // ประกาศตัวแปร ชื่อchar อายุint ส่วนสูงfloat น้ำหนักfloat เกรดchar ของนักศึกษาคนที่ 2
    int age2;
    float height2;
    float weight2;
    char grade2;

    char name3; // ประกาศตัวแปร ชื่อchar อายุint ส่วนสูงfloat น้ำหนักfloat เกรดchar ของนักศึกษาคนที่ 2
    int age3;
    float height3;
    float weight3;
    char grade3;

    printf("Enter information of 3 people (By using symbol * Name Age Height Weight Grade) : \n");

    printf("Person 1 : ");
   
    scanf(" %c*%d*%f*%f*%c", &name1, &age1, &height1, &weight1, &grade1); 
    // รับค่า ชื่อchar อายุint ส่วนสูงfloat น้ำหนักfloat เกรดchar ของนักศึกษาคนที่ 1

    printf("Person 2 : ");
    scanf(" %c*%d*%f*%f*%c", &name2, &age2, &height2, &weight2, &grade2); 
    // รับค่า ชื่อchar อายุint ส่วนสูงfloat น้ำหนักfloat เกรดchar ของนักศึกษาคนที่ 2

    printf("Person 3 : ");
    scanf(" %c*%d*%f*%f*%c", &name3, &age3, &height3, &weight3, &grade3); 
    // รับค่า ชื่อchar อายุint ส่วนสูงfloat น้ำหนักfloat เกรดchar ของนักศึกษาคนที่ 3

    printf("+-------+-----+------------+------------+------------+\n");
    printf("| %-5s | %-3s | %-8s | %-8s | %-10s |\n", "Name", "Age", "Height(cm)", "Weight(kg)", "Grade");
    printf("+-------+-----+------------+------------+------------+\n");
    printf("| %-5c | %-3d | %10.1f | %10.1f | %-10c |\n", name1, age1, height1, weight1, grade1);
    printf("| %-5c | %-3d | %10.1f | %10.1f | %-10c |\n", name2, age2, height2, weight2, grade2);
    printf("| %-5c | %-3d | %10.1f | %10.1f | %-10c |\n", name3, age3, height3, weight3, grade3);
    printf("+-------+-----+------------+------------+------------+\n"); 
    // แสดงค่าข้อมูลในรูปแบบต่างรางข้อมูลเเละกำหนดช่องข้อความให้ได้ระยะที่พอดีกัน

    return 0; 
}