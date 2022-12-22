#include<stdio.h>
struct distance
{
    /* data */
    int d;
};
struct distance sum(struct distance dis,struct distance  dis1);
int main()
{
    struct distance dis,dis1,m;
    printf("enter two disctance in km\n");
    scanf("%d%d",&(dis.d),&(dis1.d));
    m=sum((dis),(dis1));
    printf("total distance : %d km",m);
    return 0;
}

struct distance sum(struct distance dis,struct distance dis1)
{
    struct distance s;
    s.d=dis.d+dis1.d;
    return s;
}

// enter two disctance in km
// 5
// 6
// total distance : 11 km
// PS C:\Users\KIIT\Desktop\c++\3rd sem CPP\dsa lab\assignment1> 