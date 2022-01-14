#include <stdio.h>
int main() {
	char Operator;
	float num1, num2, result = 0;
	printf("\n Welcome to the GCU Calulator +,-/ * :");
	scanf_s("%c", &Operator, 1);
	printf("Enter the any number in the calculator num1 and num2 \n :");
	scanf_s("%f%f", &num1, &num2);
	switch (Operator) {
	case '+': result = num1 + num2;
		break;
	case '-': result = num1 - num2;
		break;
	case '/': result = num1 / num2;
		break;
	case '*': result = num1 + num2;
		break;
	default: printf("\n Invalid Operator");
	}
	printf("The value = %f", result);
	return 0;

	int arr[] = { 1, 2, 3, 4, 5 };
	int addnumbers(int num1, int num2);











	// GCU Calculator 
#include <stdio.h>


	union test {
		int a, b;
	};



	// A union variable t
	union test t;

	t.a = 2; // t.b also gets value 2
	printf("After making a = 2:\n a = %d, b = %d\n\n",
		t.a, t.b);

	t.b = 20; // t.a is also updated to 20
	printf("After making b = 10:\n a = %d, b = %d\n\n",
		t.a, t.b);
	return 0;

#include<stdio.h>

	struct Point
	{
		int a, b;
	};


	{
		//  structures
		struct Point arr[20];

		//  array 
		arr[0].a = 10;
		arr[0].b = 15;

		printf("%d %d", arr[0].a, arr[0].b);
		return 0;
	}
}

