// Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<fstream>
#include <ctime>




using namespace std;
int main()
{
    //----------Comments------------------
    int num1;                       //define variable for integer value.
    int num2;                       //define variable for integer value.
    int result;                     //define variable result for integer value.
    int userInput;                  //define variable taking input from user.
    int matrixA[100][100];          //define variable for the first matrix.
    int matrixB[100][100];          //define variable for the second matrix.
    int resultMatrix[100][100];     //define variable for the sum of matrix.
    int row;                        //define variable for input the NO row of matrix.
    int column;                     //define variable for input the NO column of matrix .       
    int area;                       //define variable to store the area of every shape.
    int squareSide;                 //define variable to get the side of square.
    int height;                     //define variable to get the height of triangle.
    int breath;                     //define variable to get the breath of triangle.
    int lenght;                     //define variable to get the lenght for the rectangle.
    int width;                      //define variable to get the widht for the rectangle. 
    int radius;                     //define variable for the radius of circle.
    int angel;                      //define variable to store the result of  sin, cos and tan values.
    int Sin;                        //define variable for Integer points for sin.
    int Cos;                        //define variable for Integer points for cos.
    int Tan;                        //define variable for Integer points for tan.
    double area2;                   //define variable for store the result of shape in decimal point.
    double angel2;                  //define variable for decimal points to store result.
    double Sin2;                    //define variable for decimal points for sin.
    double Cos2;                    //define variable for decimal points for cos.
    double Tan2;                    //define variable for decimal points for tan.
    char op;                        //define variable for an mathimatical operator.
    float num3;                     //define variable for decimal value.
    float num4;                     //define variable for decimal value.
    float result2;                  //define variable result for decimal value.
    const double PI = 3.14159265359;
    bool repeat = true;
    char userRepate;
    string feedBack;                //define an string for get an feed back.

    time_t curr_time;
    curr_time = time(NULL);
    char* tm = ctime(&curr_time); 
    cout << "Today is : " << tm;

    cout << "------------------Well Come To Advance MathSolver------------------" << endl;
    cout << " " << endl;
    cout << "----------------------------- M e n u -----------------------------" << endl;
    cout << " " << endl;
    cout << "Select type of Numbers you Want to Calculate" << endl;
    cout << " " << endl;
    cout << "1: Integer (Whole Numbers From 1 to n)" << endl;
    cout << " " << endl;
    cout << "2: Decimel (The Point Number)" << endl;
    cout << " " << endl;
    cout << "3: Advance Math" << endl;
    cout << " " << endl;
    cout << "4: Trignomatic Values" << endl;
    cout << " " << endl;
    cout << "5: Show Constant Values In Math" << endl;
    cout << " " << endl;
    cout << "6: Credit" << endl;
    cout << " " << endl;
    cout << "7: Quit" << endl;
    cout << " " << endl;
    cout << "Waiting For Your Input :   ";
    cin >> userInput;
    cout << " " << endl;
    //------------------------- Integer (Whole Numbers From 1 to n)r-----
	if (userInput == 1)
    {
        system("CLS");
        cout << "Thanks For choose Integer Value" << endl;
        cout << " " << endl;
        cout << "Input first number:  ";
        cin >> num1;
        cout << " " << endl;
        cout << "Input an Opreator eg(+ , - , * , / , %):  ";
        cin >> op;
        cout << " " << endl;
        cout << "Input second number:   ";
        cin >> num2;
        cout << " " << endl;
        switch (op)
        {
        case '+':
            result = num1 + num2;
            cout << "Your  Result is: " << result << " " << endl;
            cout << " " << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Your  Result is: " << result << " " << endl;
            cout << " " << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Your  Result is: " << result << " " << endl;
            cout << " " << endl;
            break;
        case '/':
            result = num1 / num2;
            cout << "Your  Result is: " << result << " " << endl;
            cout << " " << endl;
            break;
        case '%':
            result = num1 % num2;
            cout << "Your  Result is: " << result << " " << endl;
            cout << " " << endl;
            break;
        default:
            cout << " You Enter An Invalid Opreater Or Invalid Number --- Thanks " << endl;
            cout << " " << endl;
            break;
        }
        cout << "1: If You want to give any feed back" << endl;
        cout << " " << endl;
        cout << "2: Exit the program" << endl;
        cout << " " << endl;
        cout << "Input Your Choise:   ";
        cin >> userInput;
        cout << " " << endl;
        if (userInput == 1)
        {
            cout << "write your feedback" << endl;
            cout << " " << endl;
            cin >> feedBack;
        }
        else if (userInput == 2)
        {
            exit(0);
        }
        else
        {
            cout << "You Input An Invalid Number";
        }
    }
//------------------------- Starting Second Option Decimel (The Point Numbers)-------------------------------------------
	else if (userInput == 2)
    {
        cout << " You choose Decimel Value" << endl;
        cout << " " << endl;
        cout << "Input first number:   ";
        cin >> num3;
        cout << " " << endl;
        cout << "Input an Opreator eg (+ , - , * , / , ):  ";
        cin >> op;
        cout << " " << endl;
        cout << "Input second number:   ";
        cin >> num4;
        cout << " " << endl;
        switch (op)
        {
        case '+':
            result2 = num3 + num4;
            cout << "Your  Result is: " << result2 << " " << endl;
            cout << " " << endl;
            break;
        case '-':
            result2 = num3 - num4;
            cout << "Your  Result is: " << result2 << " " << endl;
            cout << " " << endl;
            break;
        case '*':
            result2 = num3 * num4;
            cout << "Your  Result is: " << result2 << " " << endl;
            cout << " " << endl;
            break;
        case '/':
            result2 = num3 / num4;
            cout << "Your  Result is: " << result2 << " " << endl;
            cout << " " << endl;
            break;
        default:
            cout << " You Enter An Invalid Opreater Or Invalid Number --- Thanks Please Try Again" << endl;
            cout << " " << endl;
            break;
        }
        cout << "1: If You want to give any feed back" << endl;
        cout << " " << endl;
        cout << "2: Exit the program" << endl;
        cout << " " << endl;
        cout << "Input Your Choise:  ";
        cin >> userInput;
        cout << " " << endl;
        if (userInput == 1)
        {
            cout << "write your feedback" << endl;
            cout << " " << endl;
            cin >> feedBack;
        }
        else if (userInput == 2)
        {
            exit(0);
        }
        else
        {
            cout << "You Input An Invalid Number";
        }
    }
//----------------------- Starting Third Option Decimel Advance Math----------------------------------
	else if (userInput == 3)
    {
    system("CLS");
        cout << "---------Wellcome to advance math solver---------" << endl;
        cout << " " << endl;
        cout << "Choose The One Option" << endl;
        cout << " " << endl;
        cout << "1: Matrix Solver" << endl;
        cout << " " << endl;
        cout << "2: Find The Area Of Square" << endl;
        cout << " " << endl;
        cout << "3: Find The Area Of The Rectangle" << endl;
        cout << " " << endl;
        cout << "4: Find The Area Of Circle" << endl;
        cout << " " << endl;
        cout << "5: Find The Area Of Triangle" << endl;
        cout << " " << endl;
        cin >> userInput;
        if (userInput == 1)
        {
            system("CLS");
            cout << "---------------Wellcome to the matrix solver----------------" << endl;
            cout << endl;
            cout << "------------------- This is matrix solver ------------------" << endl;
            cout << endl;
            cout << "1: Sum Of Matrix" << endl;
            cout << endl;
            cout << "2: Subtract Of Matrix" << endl;
            cout << endl;
            cout << "Enter a number:  ";
            cin >> userInput;
            if (userInput == 1)
            {
                system("CLS");
                cout << "Input No Of Rows:  ";
                cin >> row;
                cout << endl;
                cout << "Input No Of Column:  ";
                cin >> column;
                //enter a element for matrix one
                cout << endl;
                cout << "----------Enter The Number For first matrix----------" << endl;
                cout << endl;
                for (int i = 0; i < row; ++i)
                {
                    for (int j = 0; j < column; ++j)
                    {
                        cout << "Enter An integer 'OR' Enter A Number: [" << i + 1 << "] [" << j + 1 << "] = ";
                        cin >> matrixA[i][j];
                    }
                }
                //enter a elemenr for matrix two
                cout << endl;
                cout << "----------Enter The Number For Second matrix----------" << endl;
                cout << endl;
                for (int i = 0; i < row; ++i)
                {
                    for (int j = 0; j < column; ++j)
                    {
                        cout << "Enter An integer 'OR' Enter A Number: [" << i + 1 << "] [" << j + 1 << "] = ";
                        cin >> matrixB[i][j];
                    }
                }
                //adding both matrix 
                for (int i = 0; i < row; ++i)
                {
                    for (int j = 0; j < column; ++j)
                    {
                        resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
                    }
                }
                //showing the result of sum  matrix
                cout << endl;
                cout << "----------The result of sum is----------\n";
                cout << endl;
                for (int i = 0; i < row; ++i)
                {
                    for (int j = 0; j < column; ++j)
                    {
                        cout << resultMatrix[i][j] << " ";
                    }
                    cout << endl;
                }
                _getch();
            }
            else if (userInput == 2)
            {
                system("CLS");
                cout << "Input No Of Rows:  ";
                cin >> row;
                cout << endl;
                cout << "Input No Of Column:  ";
                cin >> column;
                //enter a element for matrix one
                cout << endl;
                cout << "----------Enter The Number For first matrix----------" << endl;
                cout << endl;
                for (int i = 0; i < row; ++i)
                {
                    for (int j = 0; j < column; ++j)
                    {
                        cout << "Enter An integer 'OR' Enter A Number: [" << i + 1 << "] [" << j + 1 << "] = ";
                        cin >> matrixA[i][j];
                    }
                }
                //enter a elemenr for matrix two
                cout << endl;
                cout << "----------Enter The Number For Second matrix----------" << endl;
                cout << endl;
                for (int i = 0; i < row; ++i)
                {
                    for (int j = 0; j < column; ++j)
                    {
                        cout << "Enter An integer 'OR' Enter A Number: [" << i + 1 << "] [" << j + 1 << "] = ";
                        cin >> matrixB[i][j];
                    }
                }
                //subtracting both matrix 
                for (int i = 0; i < row; ++i)
                {
                    for (int j = 0; j < column; ++j)
                    {
                        resultMatrix[i][j] = matrixA[i][j] - matrixB[i][j];
                    }
                }
                //showing the result of sum  matrix
                cout << endl;
                cout << "----------The result of sum is----------\n";
                cout << endl;
                for (int i = 0; i < row; ++i)
                {
                    for (int j = 0; j < column; ++j)
                    {
                        cout << resultMatrix[i][j] << " ";
                    }
                    cout << endl;
                }
                _getch();
            }
        }
        else if (userInput == 2) 
        { 
        system("CLS");
            cout << "-------------Area Of Square-------------" << endl;
            cout << " " << endl;
            cout << "Enter The Lengeth Of One Side Of Square  " << endl;
            cout << " " << endl;
            cout << "Side Of Square:  ";
            cin >> squareSide;
            if (squareSide == 0)
            {
                cout << "This is Not Square " << endl;
                cout << "Press Enter To Exit The Program...";
                _getch();
            }
            else
            {
                area = squareSide * squareSide;
                cout << "-------The Area Of Given square is------- " << endl;
                cout << "Area = " << area << endl;
                _getch();
            }
        }
        else if (userInput == 3)
        {
        system("CLS");
            cout << "-------------Area Of Rectangle-------------" << endl;
            cout << " " << endl;
            cout << "Enter The Lenght Of Rectangle" << endl;
            cout << " " << endl;
            cout << "Length Of Recangle:  ";
            cin >> lenght;
            cout << " " << endl;
            cout << "Enter The Width/Breath of rectangle" << endl;
            cout << " " << endl;
            cout << "Width/Breath of Rectangle:  ";
            cin >> width;
            if (lenght == 0 || width == 0)
            {
                cout << "This is not Retangle" << endl;
                cout << "Press Enter To Exit The Program...";
                _getch();
            }
            else
            {
                area = lenght * width;
                cout << "The Area Of Rectangle is " << endl;
                cout << " " << endl;
                cout << "Area = " << area;
                _getch();
            }
        }
        else if (userInput == 4)
        {
        system("CLS");
            cout << "-------------Area Of Circle-------------" << endl;
            cout << " " << endl;
            cout << "Enter The Radius Of Circle" << endl;
            cout << " " << endl;
            cout << "Radius Of Circle:  ";
            cin >> radius;
            if (radius == 0)
            {
                cout << "The Circle Is In Origin Or The Circle Is Not Exist." << endl;
                cout << "" << endl;
                cout << "Press Enter To Exit The Program..." << endl;
                _getch();
            }
            else
            {
                area2 = PI * radius * radius;
                cout << "The Area Of Circle Is" << endl;
                cout << " " << endl;
                cout << "Area = " << area2;
                _getch();
            }
        }
        else if (userInput == 5)
        {
        system("CLS");
            cout << "-------------Area Of Triangle-------------" << endl;
            cout << " " << endl;
            cout << "Enter The Height Of Triangle" << endl;
            cout << " " << endl;
            cout << "Height Of Triangle:  ";
            cin >> height;
            cout << "Enter The Breath Of Triangle" << endl;
            cout << " " << endl;
            cout << "Breath of Triangle:  ";
            cin >> breath;
            if (height == 0 || breath == 0)
            {
                cout << "This Is Not a Triangle" << endl;
                cout << " " << endl;
                cout << "Press Enter To Exit The Program...";
                _getch();
            }
            else {
                area = 1 / 2 * breath * height;
                cout << "The Area Of Triangle is " << endl;
                cout << " " << endl;
                cout << "Area = " << area;
                _getch();
            }
        }
    }
// --------------------------Starting Third Option Decimel Trignomatic Values------------------------
	else if (userInput == 4)
    {
    system("CLS");
        cout << "---------------Wellcome To Trignomatic Value---------------" << endl;
        cout << " " << endl;
        cout << "1: Sin" << endl;
        cout << " " << endl;
        cout << "2: Cos" << endl;
        cout << " " << endl;
        cout << "3: Tan" << endl;
        cout << " " << endl;
        cout << "Your Input:  ";
        cin >> userInput;
        if (userInput == 1)
        {
        system("CLS");
            cout << "Select The below" << endl;
            cout << " " << endl;
            cout << "1: Integer" << endl;
            cout << " " << endl;
            cout << "2: Decimal" << endl;
            cout << " " << endl;
            cin >> userInput;
            if (userInput == 1)
            {
            system("CLS");
                cout << "Input The Angle to find the vlaue of SIN" << endl;
                cout << " ";
                cout << "Angle is:  ";
                cin >> angel;
                Sin = sin(angel);
                cout << "The value of SIN is" << endl;
                cout << " ";
                cout << "sin(angle) = " << Sin;
                _getch();
            }
            else if (userInput == 2)
            {
            system("CLS");
                cout << "Input The Angle to find the vlaue of SIN" << endl;
                cout << " ";
                cout << "Angle is:  ";
                cin >> angel2;
                Sin2 = sin(angel2);
                cout << "The value of SIN is" << endl;
                cout << " ";
                cout << "sin(angle) = " << Sin2;
                _getch();
            }
            else
            {
                cout << "You Input Invalid Number" << endl;
                cout << " " << endl;
                cout << "Press enter to exit the program...";
                _getch();
            }
        }
        else if (userInput == 2)
        {
        system("CLS");
            cout << "Select The below" << endl;
            cout << " " << endl;
            cout << "1: Integer" << endl;
            cout << " " << endl;
            cout << "2: Decimal" << endl;
            cout << " " << endl;
            cin >> userInput;
            if (userInput == 1)
            {
            system("CLS");
                cout << "Input The Angle to find the vlaue of COS" << endl;
                cout << " ";
                cout << "Angle is:  ";
                cin >> angel;
                Cos = cos(angel);
                cout << "The value of COS is" << endl;
                cout << " ";
                cout << "COS(angle) = " << Cos;
                _getch();
            }
            else if (userInput == 2)
            {
            system("CLS");
                cout << "Input The Angle to find the vlaue of COS" << endl;
                cout << " ";
                cout << "Angle is:  ";
                cin >> angel2;
                Cos2 = cos(angel2);
                cout << "The value of COS is" << endl;
                cout << " ";
                cout << "COS(angle) = " << Cos2;
                _getch();
            }
            else
            {
                cout << "You Input Invalid Number" << endl;
                cout << " " << endl;
                cout << "Press enter to exit the program...";
                _getch();
            }
        }
        else if (userInput == 3)
        {
        system("CLS");
            cout << "Select The below" << endl;
            cout << " " << endl;
            cout << "1: Integer" << endl;
            cout << " " << endl;
            cout << "2: Decimal" << endl;
            cout << " " << endl;
            cin >> userInput;
            if (userInput == 1)
            {
            system("CLS");
                cout << "Input The Angle to find the vlaue of TAN" << endl;
                cout << " ";
                cout << "Angle is:  ";
                cin >> angel;
                Tan = tan(angel);
                cout << "The value of TAN is" << endl;
                cout << " ";
                cout << "Tan(angle) = " << Tan;
                _getch();
            }
            else if (userInput == 2)
            {
            system("CLS");
                cout << "Input The Angle to find the vlaue of TAN" << endl;
                cout << " ";
                cout << "Angle is:  ";
                cin >> angel2;
                Tan2 = tan(angel2);
                cout << "The value of TAN is" << endl;
                cout << " ";
                cout << "Tan(angle) = " << Tan2;
                _getch();
            }
            else
            {
                cout << "You Input Invalid Number" << endl;
                cout << " " << endl;
                cout << "Press enter to exit the program...";
                _getch();
            }
        }
    }
 // --------------------------Starting Third Option Show Constant Values In Math------------------------
    else if (userInput == 5)
{
        system("CLS");
            cout << "Some Constant Values Are Given Below" << endl;
            cout << " " << endl;
            cout << "The exact Value Of PI is: " << PI << endl;
            cout << " " << endl;
            _getch();
        }
// --------------------------Starting Third Option Credit------------------------
    else if (userInput == 6)
        {
        system("CLS");
        
            cout << "This Program Is An Advance Math Solver" << endl;
            cout << " This Program Is Made By Waleed Rehman";
            cout << " " << endl;
            cout << "Press 'Y' to repeate the program OR Press 'N' To Terminatre \n \a" << endl;
            cin >> userRepate;
            _getch();
        }
// --------------------------Starting Third Option Exit The Program------------------------
    else if (userInput == 7)
        {
            cout << "\a";
            exit(0);
        }
// --------------------------Starting Third Option Decimel Trignomatic Values------------------------
    else
        {
            cout << "---------------Error---------------" << endl;
            cout << " " << endl;
            cout << "You Input Wrong Number" << endl;
            cout << "Press Enter To Exit...........";
            _getch();
        }

	return 0;
    }

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
