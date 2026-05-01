#include<stdio.h>
struct address
{
	int pincode;
	char city[20];
	char phone[14];
};
struct employee
{
	char name[20];
	struct address add;
};
void main()
{
	struct employee emp;
	printf("Enter employee information:\n");
	scanf("%s%s%d%s",emp.name,emp.add.city,&emp.add.pincode,emp.add.phone);
	printf("Printing employee information\n");
	printf("name:%s\ncity:%s\npincode:%d\nphone:%s\n",emp.name,emp.add.city,emp.add.pincode,emp.add.phone);
}