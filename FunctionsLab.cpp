#include <iostream> // Used for cin and cout
#include <string>
using namespace std; // making life easier so that we do not need to use std::cin , std::cout, etc.


//Write the function called locateSmallest in the given interval such that 
// output : int: index of the smallest value in the array
// input : an array of int, the starting index of search, the ending point of searchspace
// function: find the location (i.e index) of the smallest value of array in the given interval
// Note that I don't want the smallest value
int locateSmallest(int array[], int start, int end){
	int smallestIndex = array[start]; //use start value and create a variable that will serve to hold the smallest index
	for (int i = start + 1; i <= end; i++) { // use a for loop to go over the array without including start
		if (array[i] < array[smallestIndex]) // use an if statement to test if the given integer index is less than the current smallestIndex value
			smallestIndex = i; // replaces the smallestIndex value if the statement is true.
	}
	return smallestIndex; // return the value of smallestIndex
}


//Write the function called replaceVariable in the given interval such that 
// output : you decide what is the output (here I put "void" - change this if you need to!)
// input : an array of int, the target value we are searching for, 
//     an int which is the starting index of search,
//     an int which is the ending point of searchspace
// function: Search in the array from given start to end index and replace the given target value with 1000
int replaceVariable(int array[], int target, int start, int end) {
		for (int i = start; i <= end; i++) { // use a for loop to over the array starting and ending in specific declared values
			if (array[i] == target) // utilize an if statement, and check if the current array index value is the target value
				array[i] = 1000; // perform this task is statement is true
		} 
	return target; // return the target value = 1000
}



//write a function called printArray to print out the elements of the given array
//output: nothing
//input: the array of integers and its size
void printArray(int array[], int size) { //utilize a void function with an array list and integer for size
	for(int i = 0; i <= size; i++) // for statement to go over the array list with the given size value
	cout << array[i] << " "; //print out the current arrayindex value with a space for the next loop
}








//Write a function called sumOdds in the given interval such that 
// output : integer
// input : an array of int, the starting index of search, the ending point of searchspace
// function: Sum the odd numbers in the given interval 
//Hint: % is used for modulo operation. 
//     n%m gives you the remainder after dividing n to m. for example 7%3 = 1 because 7 = 3*2 + 1, then 1 is the remainder.

int sumOdds(int array[], int start, int end){ //sumOdds function that includes array list, start and end variables
	int result = 0; // create variable to hold result
	for (int i = start; i <= end; i++) { // use for loop to go over the specific section of the array list depending on the start and end value
		if (array[i] & 2 != 0) { // if statement that uses modulo to check if the value of the current arrayindex is not even
			result+=array[i]; // use the result value to keep adding the array list values that are not even = odd numbers
		}
	}
	return result; // returns the result after the everything is finished
}