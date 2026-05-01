#include<stdio.h>
#include<string.h>
union student
{ 
	int rollno;
	char name[20];
	float cgpa;
}s1;
int main(){
	s1.rollno=619;
	printf("student-1 id:%d\n",s1.rollno);
	strcpy(s1.name,"Ruksana");
	printf("student-1 name:%s\n",s1.name);
	s1.cgpa=9.8;
	printf("student-1 cgpa:%f\n",s1.cgpa);
	return 0;
}