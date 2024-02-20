#include <math.h>
#include <stdio.h>
#include <string.h>
float calculateResistance(float voltage,float current);
float calculatePower(float voltage,float current);
float calculateEnergy(float power, float time);
void resistanceType(float resistance);
void printline()
{
  printf("\n _______________________________________________________________________________________________________________");
}
int main()
{
float resistance,power,time,voltage,current,energy;
printf("Enter the voltage [v]: ");
scanf("%f",&voltage);
printf("\n Enter the current [A]: ");
scanf("%f",&current);
printf("\n Enter the time [Hours]: ");
scanf("%f",&time);
power = calculatePower(voltage,current);
resistance=calculateResistance(voltage,current);
energy=calculateEnergy(power,time);
//char resistanceType=resistanceType(resistance);
printline();
printf("\n |Electrical Quantities Calculations-                                                                         |");
printline();
printf("\nVoltage [v] \t|Current [A]| \t Resistance [D] |\t power [W]| \t Energy [Wh]| \t Resistance type");
printf("\n%.2f \t|\t%.2f\t|\t %.2f |\t %.2f \t| %.2f \t|  ",voltage,current,resistance, power,energy);
resistanceType(resistance);
printline();
printf("\n");

    return 0;
}
float calculateResistance(float voltage,float current)
{
    return voltage / current;
}
float calculatePower(float voltage,float current)
{
    return voltage * current;
}
float calculateEnergy(float power, float time)
{
    return power * time;
}
void resistanceType(float resistance)
{
    if((resistance>100)&&(resistance<1000))
    {
        printf("This is a High Value Resistance");
    }
    else if(resistance>1000)
    {
        printf("This is a Very High Value Resistance");
    }
    else{
        printf("This is a Low Value Resistance");
    }
}