// Authors: Marian Georgiev and Ricardo Pereira
// Contact Emails : pereirr5@lsbu.ac.uk georgiem@lsbu.ac.uk
// Description : This program will get the number of points a student has and turn it into a grade
// Description : It will also get the average grade for all students, print out how many people have a certain grade.

#include "stdafx.h"
#include <stdio.h>
#include <conio.h>



int main()
{
	int gradeN;    /// Integer used for initialising a number
	int gradeA = 0;
	int gradeB = 0;
	int gradeC = 0;
	int gradeD = 0;
	int gradeE = 0;
	int gradeSum;
	int gradeAverage;
	printf("Input the Number of points you've achieved or enter -1 to go to the next section : ");
LOOP: scanf_s("%d", &gradeN); /// scanf_s used as VS17 compiler doesn't consider scanf "safe", loop initialised here by goto
	if (gradeN == -1)
		goto Q3; /// Jumps to question 3 if the user inputs -1 

	/// <summary> Main function for turning the points the students achieved into a grade
	/// it uses the logical operator the "||" logical operator to check if the correct values are inputted
	/// and adds 1 to 
	///</summary>
	if (gradeN == 10 || gradeN == 9) 
	{
			printf("You've achieved A");
			gradeA++;
	}
	else if (gradeN == 8 || gradeN == 7)
	{
			printf("You've achieved B");
			gradeB++;
	}
	else if (gradeN == 6 || gradeN == 5)
	{ 
			printf("You've achieved C");
			gradeC++;
	}
	else if (gradeN == 4)
	{
			printf("You've achieved D");
			gradeD++;
	}
	else if (gradeN <= 3)
	{
			printf("You've achieved E ");
			gradeE++;
	}
	goto LOOP; /// loops to scanf_s to create a loop at line 27 ///
	

	///<summary> Displays the number of grades the students have achieved eg 5 A's or 5 B's. the variable eg gradeA ///
	///gets increased by 1 everytime the user inputs a number between 10 and 3 ///
	///</summary> /// 
Q3: printf("Number of A grades : %d \n", gradeA);
	printf("Number of B grades : %d \n", gradeB);
	printf("Number of C grades : %d \n", gradeC);
	printf("Number of E grades : %d \n", gradeE);
	gradeSum = gradeA + gradeB + gradeC + gradeE;
	printf("Sum of all grades : %d \n", gradeSum);

	gradeAverage = ((5 * gradeA) + (4 * gradeB) + (3 * gradeC) + (2 * gradeD) + gradeE) / gradeSum; ///Calculates the average for the overall marks
	printf("The grade average for the class is : %d", gradeAverage);

	_getch();

	// TODO : Question 5 for plot distribution and how to handle it 
	// Figure out how to convert a variable value into * and with lines 
	

}
	 



