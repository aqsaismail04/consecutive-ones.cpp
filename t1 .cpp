//NAME: Aqsa ismail
//Registration IDI:L1F25BSCS0055
//SECTION: B17
//ASSIGNMENT 3
#include<iostream>
#include<fstream>
using namespace std;

// Function to count total characters in file
int getsize(char* filename)
{
	int size = 0;
	char ch;

	// Open file
	ifstream fin(filename);

	// Check if file opened or not
	if (!fin.is_open())
	{
		cout << "File not found:" << endl;
	}
	else
	{
		// Read file character by character
		while (fin >> ch)
		{
			size++; // increase size count
		}
	}

	// Close file
	fin.close();

	return size;
}

// Function to read data from file into array
void readData(char* filename, int* array, int length)
{
	char ch;

	// Open file
	ifstream fin(filename);

	// Check file
	if (!fin)
	{
		cout << "File not found" << endl;
	}
	else
	{
		// Read all characters from file
		for (int i = 0; i < length; i++)
		{
			fin >> ch;

			// Convert character into integer
			*(array + i) = ch - '0';
		}
	}

	// Close file
	fin.close();
}

// Function to find maximum consecutive 1's
void findConsecutiveOnes(int* array, int length)
{
	int oneCount = 0;      // current count of 1's
	int maxCount = 0;      // maximum count of 1's
	int newSequence = 0;   // starting index of current sequence
	int index = 0;         // starting index of maximum sequence
	for (int i = 0; i < length; i++)
	{
		// Check if element is 1
		if (*(array + i) == 1)
		{
			// If new sequence starts
			if (oneCount == 0)
			{
				newSequence = i;
			}

			// Increase current count
			oneCount++;

			// Update maximum count
			if (oneCount > maxCount)
			{
				maxCount = oneCount;
				index = newSequence;
			}
		}
		else
		{
			// Reset count when 0 comes
			oneCount = 0;
		}
	}

	// Display maximum consecutive ones
	cout << "Maximum consecutive ones are: ";

	for (int i = 0; i < maxCount; i++)
	{
		cout << 1;
	}

	cout << endl;

	// Display starting index
	cout << "Starting index is: " << index << endl;

	// Display length
	cout << "Length is: " << maxCount << endl;
}

int main()
{
	// Dynamic array for filename
	char* filename = new char[10];

	// Take file name from user
	cout << "Enter name of file ";
	cin.getline(filename, 10);

	// Get size of file data
	int lengthofArray = getsize(filename);

	// Dynamic array creation
	int* array = new int[lengthofArray];

	// Read file data into array
	readData(filename, array, lengthofArray);

	// Find maximum consecutive ones
	findConsecutiveOnes(array, lengthofArray);

	// Free memory
	delete[] filename;
	delete[] array;

	return 0;
}