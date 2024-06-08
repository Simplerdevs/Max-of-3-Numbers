
				/* Program to ask user enter three nubers then print the max of these number */

#include <iostream>
using namespace std;

int main() 

{
	 
	int A, B, C;
	cout << "Please enter the first number ! " << endl;
	cin >> A;

	cout << "PLease enter the second number ! " << endl;
	cin >> B;

	cout << "PLease enter last number ! " << endl;
	cin >> C;


	int max;

	if (A > B && A > C) {

		max = A;
	}

	else if ( B > A && B > C) {

		max = B;

	}

	else {

		max = C;
	}

	cout << "max of number is : " << max << endl;



	/*  IMPORTANT !!
	
		you can write input Variables in one line example :

		int A, B, C;
		cout << "Please enter the three numbers ! " << endl;
		cin >> A, B, C;

		==> so This is to make the code easy to read and to avoid repetition

		==> About {if else} statments You can keep it as is

		==> its up to you ;)

	 */



	return 0;


	// created by @ilyes_trabelsi

}

