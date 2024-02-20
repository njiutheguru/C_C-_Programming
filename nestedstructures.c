#include <stdio.h>
#include <stdlib.h>

struct struct1 {
    int a;
    float c;
};
struct parentstruct {
   const char *name;
    float value;
    struct struct1 b;
};

int main ()
{

struct parentstruct version1= {"Stephen Njiu",34.43, 5, 10.90};
 printf(" Name is: %s\n",version1.name);
 printf(" float is : %f\n",version1.value);
 printf(" Integer is : %d\n",version1.b.a);
 printf(" Nested float is : %f\n",version1.b.c);

}