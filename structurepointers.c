#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <string.h>

//self reference stuctures 
 struct version1{
    int id;
     const char* name;
    struct version1* val;
 };
 /*struct version2{
    int a;
    char group[20];
    struct version2* num;
 }; */
 
 int main ()
 {


struct version1 var1={4535,"Mark",NULL};
struct version1 var2 ={54,"Njiu" ,NULL};

/*var1.id =4535;
var1.val==NULL;
//var1.name,"Ahmed";
var2.id =54;
var2.val==NULL;*/
//var2.name="Stephen Njiu";
//var1.val = &var2;

printf("var1 ID: %d\n",var1.id);
printf("VAR1 name: %s\n",var1.name);
printf("var2 ID: %d\n",var2.id);
printf("VAR2 name: %s\n",var2.name);
var1.val = &var2;

printf("var2 ID: %d\n",var1.val->id);

//struct *v1 = &var2;
//printf("var1 name: %s\n",var1.name);

//printf(" var2 Group: %s\n",var2.name);

printf("After swapping the stuctures members\n");

//printf("var2 name: %s\n",var1.val->name);

//printf("var1 ID: %d\n",v1->val->id);
//printf(" var2 Group: %s\n",var1.group);



// second level pointer to var1
	struct version1 *ptr1 = &var1;

	// accessing var2 members using var1
	printf("var2.id: %d\n", ptr1->val->id);
    printf("var2.name: %s\n", ptr1->val->name);//working perfectly


    return 0;

 }