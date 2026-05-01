#include<stdio.h>
#include<ctype.h>
int main(){
	char exp[100];
	int stack[100];
	int top = -1;
	int i,a,b,result;
	printf("Enter the postfix Expression:");
	scanf("%s",exp);
	for(i=0;exp[i] !='\0';i++){
		if(isdigit(exp[i])){
		     stack[top++] = exp[i]-'0';
		}
		else{
			b = stack[top--];
			a = stack[top--];
		switch(exp[i]){
			case '+':result=a + b;
		                break;
			case '-':result=a-b;
			         break;
			case '*':result=a * b;
		                break;
			case '/':result=a / b;
		                break;
			case '^':result=a ^ b;
		                break;
		}
	stack[++top]=result;
}
		}
		printf(result="%d",stack[top]);
		return 0;
	}
