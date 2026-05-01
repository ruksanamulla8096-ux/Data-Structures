#include<stdio.h>
struct Adrress{
	char city[20];
	int pincode;
};
struct Student{
	int roll;
	char name[20];
	struct Address addr;      //Nested structure
};
int main(){
	struct Student s;
	printf("Enter Roll Name City Pincode:\n")
	scanf("%d %s %d",&s.roll ,s.name,s.addr.city,&s.addr.pincode);
	printf("\n---Student Details---\n")
	printf("\n%d %s %s %d",s.roll,s.name,s.addr.city,s.addr.pincode);
	
}