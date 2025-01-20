#include <stdio.h>


typedef struct {char name[25]; float GPA; int age;} Student;

void display_student_info(Student student);

void display_student_info(Student student){
    printf("Name: %s\nGPA: %2f\nAge: %d\n",student.name, student.GPA, student.age);
}

int main(){

    Student taha = {"Taha Yasser Adnan", 3.5, 16};
    Student miyamoto = {"Miyamoto Musashi", 4.5, 23};
    Student jaka = {"Jaka Idk", 2.5, 30};

    Student students_array[] = {taha, miyamoto, jaka};

    for (int i = 0; i < sizeof(students_array) / sizeof(Student); i++) {
        display_student_info(students_array[i]);
    }

    return 0;
}