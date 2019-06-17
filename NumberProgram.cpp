#include <iostream>			// For input/output 

// Standard namespace
using namespace std;

int main() {
	// Initialize variables
	int num;
	int smallest = 0;
	int largest = 0;
	int countSmallest = 0;
	int countLargest = 0;
		
	// Output message to user	
	cout << "Please enter a list of numbers. Type 0 when finished: " << endl;
		
	// Continue loop until it breaks	
	while(true){
					
		// Get the number input and save it to variable
		cin >> num;
		
		// If zero is input break out of loop
		if(num == 0){
			break;
		}

		// If smallest is set to its default value or the input number is less than it then set smallest to it and set the count to 1
		if (smallest == 0 || num < smallest){
			smallest = num;
			countSmallest = 1;
		}
		// If they are equal then increment the count
		else if(num == smallest){
			countSmallest ++;
		}
		// If largest is set to its default value or the input number is greater than it then set largest to it and set the count to 1
		if (largest == 0 || num > largest){
			largest = num;
			countLargest = 1;
		}
		// If they are equal then increment the count 
		else if(num == largest){
			countLargest ++;
		}
	}
	
	// Output the smallest and largest numbers along with their counts
	cout << "Smallest number entered: " << smallest << endl;
	cout << "Occurrence of smallest number: " << countSmallest << endl;
	cout << "Largest number entered: " << largest << endl;
	cout << "Occurrence of largest number: " << countLargest << endl;
	
	// End program
	return 0;
}