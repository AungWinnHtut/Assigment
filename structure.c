#include<stdio.h>

struct area {
	float length;
	float width;
	};
struct volume {
	float height;
	struct area a;
	};
struct circle {
	float pi;
	float radius;
};
struct cylinder {
	float height;
	struct circle cy;
};

void areaCal(struct area a);
void volumeCal(struct volume v);
void circleArea(struct circle c);
void cylinderCal(struct cylinder c);
int main()
{
	struct area a1;
	struct volume v1;
	struct circle c1;
	struct cylinder cl1;
	int ch;
	do{
	printf(" ======================================= \n ");
	printf("|    1 : Calculate Area                |\n ");
	printf("|    2 : Caluclate Volume              |\n ");
	printf("|    3 : Calculate Area Of Circle      |\n ");
	printf("|    4 : Calculate Area Of Cylinder    |\n ");
	printf("|    0 : Exit                          |\n ");
	printf(" ======================================= \n");
	scanf("%d" , &ch);
	switch(ch){
	case 1: areaCal(a1);          break;
	case 2: volumeCal(v1);        break;
	case 3: circleArea(c1);       break;
	case 4: cylinderCal(cl1);     break;
	default:break;

	}
	}while(ch!=0);
	getchar();
	return 0;

}
void cylinderCal(struct cylinder c){
	float sum=0.0;
	c.cy.pi=3.14;
	printf("Enter radius : ");
	scanf("%f" , &c.cy.radius);
	printf("Enter height : " );
	scanf("%f" , &c.height);
	sum=c.cy.pi*c.cy.radius*c.cy.radius*c.height;
	printf("The area of this cylinder is %.2f \n " , sum);
}
void circleArea(struct circle c){
	float sum=0.0;
	c.pi=3.14;
	printf("Enter radius :  ");
	scanf("%f", &c.radius);
	sum=c.pi*c.radius*c.radius;
	printf("The area of the radius  %.2f circle is %.2f. \n ",c.radius,sum);

}
void volumeCal(struct volume v){
	float sum=0.0;
	printf("Enter length : ");
	scanf("%f", &v.a.length);
	printf("Enter width : ");
	scanf("%f", &v.a.width);
	printf("Enter height: ");
	scanf("%f", &v.height);
	sum=v.a.length*v.a.width*v.height;
	printf("The volume is %.2f. \n ",sum);
}

void areaCal(struct area a ){
	
	float  sum=0.0;
	printf("Enter length : ");
	scanf("%f" ,&a.length);
	printf("Enter width : ");
	scanf("%f", &a.width);
	sum=a.length*a.width;
	printf("The area is %.2f. \n. ", sum);
}
