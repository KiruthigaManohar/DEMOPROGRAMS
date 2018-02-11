#include<stdio.h>
void main()
{
int sign,speed=80;
float range,sensor;
int des,pos=0,obstacle;
void stop();
void slow();
void move();
void wait();
printf("\nEnter the position");
scanf("%d",&pos);
while(pos!=0)
{
printf("\n1.Speed Braker\n2.Person\n3.Signal\n0.No Obstacle\nEnter the obstacle");
scanf("%d",&obstacle);
switch(obstacle)
{
case 1:
 printf("\nEnter the range between 0 and 1");
scanf("%f",&sensor);
if(sensor==1)
{
slow();
}
else
{
move();
}
break;
case 2:

printf("\nEnter the range between 0 and 1");
scanf("%f",&range);
if(range==1)
{
printf("Person is standing in front of the car");
stop();
}
else if(range>0&&range<1)
{
printf("Person is near to the car");
slow();
}
else
{
printf("Person is moving away from the car");
wait();
}
break;
case 3:
printf("\n1.Red.\n2.Yellow.\n3.Green");
printf("\nEnter the range of signal");
scanf("%d",&sign);
if(sign==1)
{
printf("Now the signal is in Red.\nCar should not move");
stop();
}
else if(sign==3)
{
printf("Now the signal is in Yellow.\nCar is ready to move");
move();
}else
{
    printf("Now the signal is in Red.\nCar moves");
slow();
}
break;
default:
exit(0);
break;
}
}
}
void slow()
{
    int speed=80;
printf("\nObstacle Deducted\n Speed is going to be decreased\n");
speed=speed-50;
printf("\nSpeed is reduced to %dkm/hr",speed);
}
void wait()
{
printf("\nObstacle Deducted");
printf("\nCar is stopped and not moving");
}
void move()
{
printf("\nThere is no obstacle");
printf("\nRoad is free and the car is moving");
}
void stop()
{
//printf("\nObstacle deductued");
printf("\nCar is not moving");
}
