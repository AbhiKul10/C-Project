#include <stdio.h>
int main(){
	//declaring variables
	int i,sum=0;
	int num[5];
	printf("enter the value : "); //user input for value of i
    scanf("%d", &i);

	//reading user input
	for(i=0;i<5;i++)
		scanf("%d",&num[i]);

	//calculating sum
	for(i=0;i<5;i++)
		sum+=num[i];

	printf("Sum=%d",sum);
	return 0;
}
