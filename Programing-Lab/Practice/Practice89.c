//Question 1(IMP): 
//---------------
// #include<stdio.h>
// int main(){
// 	int arr[7];
// 	int i, sum = 0;
// 	float average;
	
// 	printf("Enter 7 integers : ");
// 	for(i=0 ; i<7; i++){
// 		scanf("%d", &arr[i]);
// 	}
// 	printf("Even numbers are : ");
// 	for(i=0 ; i<7; i++){
// 		if(arr[i] % 2 == 0)
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\nOdd numbers are : ");
// 	for( i=0 ; i<7 ; i++){
// 		if(arr[i] % 2 != 0)
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// 	for (i=0; i<7; i++){
// 		sum = sum + arr[i];
// 	}
// 	average = (float)sum / 7;
	
// 	printf("Sum of all arrays is : %d\n", sum);
// 	printf("Average of all array is : %f\n", average);
	
// 	return 0;
// }
// _______________________________________________________________________________


// Question 2(IMP): write a c program using a for loop to display a multiplication table.
// Take input for a number from the user. Use a switch statement inside loop to check.
// If the product is greater than 50, print "large". If the product is between 10 and 50 print "medium".
// If the product is less than 10 print "small". (Do this turnery operator)
//--------------------------------------------------------------------
#include<stdio.h>
int main(){
	int num, a, result,statement;
	printf("Enter the number : ");
	scanf("%d", &num);
	for(a=1 ; a<=10 ; a++)
	{
	result = num * a;
			printf("%d x %d = %d\n", num,a,result);
		
		switch(result>50?1:(result>10?2:3))
		{
			case 1:
			
			printf("Large");
			break;
			case 2:
			printf("Medium");
			break;
			case 3:
			printf("Small");
			break;
		}
	}
	return 0;
	}