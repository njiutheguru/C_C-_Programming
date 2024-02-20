#include <stdio.h>
#include <stdlib.h>

//algebraic functions in c 
//using namespace std;
void funtion();


int main ()
{
 funtion();
}

void funtion()
{
    //beginning:
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
     fflush(stdin);
    
      //int yes = scanf("%d", &marks);
       if(scanf("%d", &marks) != 1 || marks <= 0) //stores the value and checks for return value
        {
             printf(" \n Error: please enter a positive integer....Try Again");
             fflush(stdin);
             marks = 0;
             students++;
             
             continue;
             //goto beginning;
           

            //funtion();
            
          
        
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