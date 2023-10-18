//=======================================================================================================
//                                                                                                      =
//............................loop pratice using patterend..............................................=
//                                                                                                      =
//=======================================================================================================

#include <iostream>
using namespace std;
// consisting of numbers and aphabates in a particular form
// these kind of patteren solved by using looping structure 

// used to study the general purpose of looping structure
// it help beginers to learn how these loops work

//...........................................................................................................
// ......................now we deal with incremental alphabate.............................................
//..........................................................................................................
//...........................................................................................................
// .........................................half paramids triangle.....................................
//..........................................................................................................

int triangle_0() {
	//...................
	// Triangle 
	// .................. 
	

	/*
	a
	bb
	ccc
	dddd
	eeeee
	
	*/
	int n;
	n = 5;
	char alphabate = 'a';

	for (int i = 1;i <= 5;i++) {          // this for loop is used to generate numbers of rows
		                                  // here no of rows is given by n which is 5
		                                  // so the numbers of rows are 5



		for (int j = 1;j <= i;j++) {  //inner for loop where the actual printing is happen
			                         //other itrator that start with j here
			                         // now here the condition is compared with i 
			                         // at first itration i=1 so j have to b smaller then equal to 1 here
			                         // it will print alphabate for 1 time
									//
		//this loop is used for horizontal increments and coloum increment	                        

			cout << alphabate;
		}
		alphabate++;   //we can increment these values bcz these character have there ascii valuee
		               // it is a fix stranderd


		cout << endl; // we will goto the next line

	}

	cout << "=============================================================================";
	return 0;
}
int triangle_1() {
	//...................
	// Triangle 
	// .................. 


	/*
	a
	ab
	abc
	abcd
	abcde

	*/
	int n;
	n = 5;
	

	for (int i = 1;i <= n;i++) {

		char alphabate = 'a';  // it is inside the outer loop
		                       // and outside the outer lopp 
		//now printing the alphabate it play main role

		// now here the value of alphabate is a then alway the loop will start from 
		// a and will apply the next increment in the inner loop

		for (int j = 1;j <= i;j++) {

			cout << alphabate++;
		}
		
		cout << endl;

	}

	cout << "=============================================================================";
	return 0;
}

int triangle_2() {
	//...................
	// Triangle 
	// .................. 


	/*
	a
	bc
	def
	ghij
	klmno

	*/
	int n;
	n = 5;
	char alphabate = 'a';  // in this pattern alphabate is displayed outside of the outer loop 
	                      // here its value is a
	                     // now we go inside the loop and we will use its incremented values here 

	for (int i = 1;i <= n;i++) {

		for (int j = 1;j <= i;j++) {

			cout << alphabate++; // this increment opreration is used to increment the value of 
			                     // alphabate by 1
		}
		
		cout << endl;

	}

	cout << "=============================================================================";
	return 0;
}



int triangle_3() {
	//...................
	// Triangle 
	// .................. 


	/*
	aaaaa
	bbbb
	ccc
	dd
	e

	*/
	int n;
	n = 5;
	char alphabet = 'a';
	for (int i = 5; i > 0; i--) {   // this for loop is used to get the reverse of a paramid 
		                            //mean we aill srat the loop from high value to low value
		                           //there we will use the decrement opertor 
		                           //this paramis work same ad paramid 0

		for (int j = 1; j <= i; j++) {
			cout << alphabet;
		}
		cout << endl;
		alphabet++;
	}

	cout << "=============================================================================";
	return 0;
}



int triangle_4() {
	//...................
	// Triangle 
	// .................. 


	/*
	     a
        bb
	   ccc
	  dddd
	 eeeee

	*/
	int n;
	n = 5;
	char alphabet = 'a';
	for (int i = 1; i <= 5; i++) {    //This line starts a for loop that iterates from 1 to 5, inclusive.


		for (int k = 5 - i; k > 0; k--)     //This for loop prints spaces before the letters in each row.
		                                    //	The number of spaces printed
			                                //is equal to 5 minus the current value of i
			cout << " ";
		for (int j = 1; j <= i; j++) {    //This for loop prints the letters in each row. 
			                             //The number of letters printed is equal to the current value of i

			cout << alphabet;
		}
		cout << endl;
		alphabet++;
	}

	cout << "=============================================================================";
	return 0;
}


int triangle_5() {
	//...................
	// Triangle 
	// .................. 


	/*
	aaaaa
     bbbb
      ccc
       dd
        e

	*/
	int n;
	n = 5;
	char alphabet = 'a';
	for (int i = 5; i > 0; i--) {   //This line starts a for loop that iterates from 5 to 1, inclusive. 


		for (int k = 5 - i; k > 0; k--)      //This for loop prints spaces before the letters in each row.
			                                //The number of spaces printed is equal to 5 minus the current value of i

			cout << " ";
		for (int j = 1; j <= i; j++) {                //This for loop prints the letters in each row. 
			                                        //The number of letters printed is equal to the current value of i

			cout << alphabet;
		}
		cout << endl;
		alphabet++;
	}
	cout << "=============================================================================";
	return 0;
}

int main()
{

	triangle_0();
	triangle_1();
	triangle_2();
	triangle_3();
	triangle_4();
	triangle_5();
	
}

