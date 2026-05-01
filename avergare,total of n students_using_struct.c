// Write a c program to find that total,average of n students using structure
#include<stdio.h>
struct student{
	int rollno;
	float marks;
};
int main(){
struct student s[100];
int n,i;
float total=0, average;

printf("Enter number of students: ");
scanf("%d",&n);

for(i=0;i<n;i++){
	printf("Enter roll number and marks of student %d: ",i + 1);
	scanf("%d %f",&s[i].rollno,&s[i].marks);
	total = total + s[i].marks;
}
 average = total/n;
 
 printf("\nTotal marks = %.2f",total);
 printf("nAverage marks = %.2f",average);
 
 return 0 ;
}

	