#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    const char* name;
    float marks;

};
typedef struct add{
    int height;
    struct student no1;
    struct student no2;
}student_version;
 

 int main()
 {

  student_version s1;
  s1.height = 100;
  s1.no1.roll = 1;
  s1.no1.name = "shubham";
  s1.no1.marks = 100;
  s1.no2.roll = 2;
  s1.no2.name = "Stephen";
  s1.no2.marks = 100;
  
  printf("%d\n", s1.height);
  printf("%d\n", s1.no1.roll);
  printf("%s\n", s1.no1.name);
  printf("%f\n", s1.no1.marks);
  printf("%d\n", s1.no2.roll);
  printf("%s\n", s1.no2.name);
  printf("%f\n", s1.no2.marks);
  return 0;
  



 }
  