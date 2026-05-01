#include<stdio.h>
struct Student{
	int roll;
	char name[20];
      struct Address{   //Embedded structure(no seperate struct needed)
	char city[20];
	int pincode;
      }Addr;
};
int main(){
	struct Student s;
	printf("Enter Roll Name City Pincode:\n");
	scanf("%d %s %d",&s.roll ,s.name,s.Addr.city,&s.Addr.pincode);
	printf("\n%d %s %s %d",s.roll,s.name,s.Addr.city,s.Addr.pincode);
}