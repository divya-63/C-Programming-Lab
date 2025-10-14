#include<stdio.h>
int main(){
float mass,acceleration,force;
printf("enter the value of mass(in kg):");
scanf("%f",&mass);
printf("enter the value of acceleration(in m/s^2):");
scanf("%f",&acceleration);
force=mass*acceleration;
printf("the value of force(in joule) is:%f",force);
return 0;
}
