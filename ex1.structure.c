#include<stdio.h>
#include<string.h>
struct student{
	int rollno;
	char name[20];
	float cgpa;
}s1;
int main()
{
	s1.rollno = 619;
	strcpy(s1.name,"Ruksana");
	s1.cgpa = 9.8;
	printf("Student-1-id:%d\n",s1.rollno);
	printf("Student-1-name:%s\n",s1.name);
	printf("Student-1-cgpa:%f\n",s1.cgpa);
	return 0;
}