#include <stdio.h>
#include <stdlib.h>

//algebraic functions in c 
//using namespace std;


int main ()
{
   int sub,totalmarks;
   int marks;
   float percent;
   sub=10;
   totalmarks=sub*100; //1000
   int no_of_students=5;
   int students =1;
   do
   {
    
    printf(" \n Student %d: Enter Your total marks: ",students);
       if (scanf("%d", &marks) != 1 || marks <= 0) //stores the value and checks for return value
        {
             printf(" \n Error: please enter a positive integer....Try Again");
            marks++;
            
           break;
        
        }
         //break;
           if((marks>=totalmarks) ||(marks <=0))
        {
           printf(" \n Invalid Marks");
           //break;
            students++;
           continue;
          
        }
     
        percent=((float)marks/(float)totalmarks)*100;
        printf(" Student %d: Your percentage is %.2f \n",students,percent);
        printf("\n");
         ++students;
   
} while(students <= no_of_students);
printf("\n");
   
}