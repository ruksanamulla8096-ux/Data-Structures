//Passing  structure
#include<stdio.h>
struct student{
	int roll;
	float marks;
};
void display(struct student s){
	printf("Roll:%d\n Marks:%.2f\n",s->roll,s->marks);
}
int main(){
	struct student s;
	print("Enter Roll:");
	scanf("%d",&s.roll);
	printf("Enter Marks:");
	scanf("%f",&s.marks);
	display(s);
}