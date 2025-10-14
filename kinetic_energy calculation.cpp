#include<stdio.h>
int main(){
float mass,velocity,kinetic_energy;
printf("enter the value of mass(in kg):");
scanf("%f",&mass);
printf("enter velocity of object(in m/s):");
scanf("%f",&velocity);
kinetic_energy=0.5*mass*velocity*velocity;
printf("the value is:%f",kinetic_energy);
return 0;
}
