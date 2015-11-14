/********************************************************************/
/*                                                                  */
/* This program is designed to calculate the sum of a number range. */
/*                  Created by: Somtoya Arinze                      */
/*                                                                  */
/********************************************************************/

#include <iostream>
#include <string>
using namespace std;

//declaring of global variable
int start_of_range;
int end_of_range;
int increment_step;
int sum = 0;
char done;


//This function preforms the calculations and returns the value of the sum.

int calculateSum (int start_of_range, int end_of_range, int increment_step){

	for (int i = start_of_range; i <= end_of_range; i=i+=increment_step){

		sum+=i;
	}

	cout<<"The sum of the range of values is "<<sum<<"."<<endl<<endl;

	return (sum);

}

/*This function's purpose is to check if the entered values are valid.
If values are true, the function will compute and if the values are false, then no action will be preformed*/

int validate (int start_of_range, int end_of_range, int increment_step){

	if ((start_of_range<=end_of_range) && (increment_step>0)){

		calculateSum(start_of_range,end_of_range,increment_step);
	}
		else if (increment_step<0){
				cout<<"The step value must be greater than 0."<<endl<<endl;
			}

	else{
			cout<<"The start value must be less than or equal to end value."<<endl<<endl;
			}
	
	return 0;
}

/*The main obtains values and relies on the two functions to operate properly.
It will continue to do so until the user no longer desires to commute another sum.*/ 

int main (){

	cout<<"Functions are incredibly awesome and powerful. They're abilities are endless."<<endl
		<<"This program is designed to calculate the sum of a number range."<<endl
		<<"It takes shorcuts by using calling a function to do all the work."<<endl<<endl;

	do {
		 cout<<"Enter the start of the range:"<<endl;
		 cin>>start_of_range;

		 cout<<"Enter the end of the range:"<<endl;
		 cin>>end_of_range;

		 cout<<"Enter the increment step:"<<endl;
		 cin>>increment_step;

		 validate(start_of_range,end_of_range,increment_step);

		 cout<<"Compute another sum?[Y/N]"<<endl;
		 cin>>done;
	}
	while ((done=='Y') || (done=='y'));

	cout<<"As a computer, it is my duty to impress you. So, be amazed. Goodbye."<<endl;

	return (0);
}
