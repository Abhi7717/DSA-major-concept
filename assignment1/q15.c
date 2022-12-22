// #include<stdio.h>
// #include<math.h>
// struct Cartesian
// {
// int x;
// int y;
// };
// int main()
// {
// struct Cartesian x1,x2,y1,y2;;
// float d; 
// printf("enter the coordinates of point 1\n");
// scanf("%d%d",&x1.x,&y1.y);
// printf("enter the coordinates of the point 2\n");
// scanf ("%d%d",&x2.x,&y2.y);
// // d=√((x2 – x1)² + (y2 – y1)²).
// d=sqrt(((x2.x-x1.x)*(x2.x-x1.x))+((y2.y-y1.y)*(y2.y-y1.y)));
// printf("distance = %f",d);
// return 0;
// }


#include<stdio.h>
#include<math.h>
struct Cartesian
{
int x;
int y;
};
int main()
{
struct Cartesian x1,x2,x3,y1,y2,y3;
float d; 
printf("enter the coordinates of point 1\n");
scanf("%d%d",&x1.x,&y1.y);
printf("enter the coordinates of the point 2\n");
scanf ("%d%d",&x2.x,&y2.y);
printf("enter the coordinates of the point 2\n");
scanf ("%d%d",&x3.x,&y3.y);
// d=√((x2 – x1)² + (y2 – y1)²).
// d=sqrt(((x2.x-x1.x)*(x2.x-x1.x))+((y2.y-y1.y)*(y2.y-y1.y)));
// |x₁(y₂-y₃) + x₂(y₃-y₁) + x₃(y₁-y₂)|
d=((x1.x*(y2.y-y3.y)) + (x2.x*(y3.y-y1.y)) + (x3.x*(y1.y-y2.y)));
printf("area = %f",d/2);
return 0;
}