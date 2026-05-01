//Passing entire structure
#include<stdio.h>
struct student{
	int roll;
	float marks;
};
void display(struct student s){
	printf("Roll:%d\n",s.roll);
	printf("Marks:%.2f",s.marks);
}
int main(){
	struct student s;
	print("Enter Roll:");
	scanf("%d",&s.roll);
	printf("Enter Marks:");
	scanf("%f",&s.marks);
	display(s);
}

