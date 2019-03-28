/*
 Sean Battin
 CIS 121
 Assignment 3
 
 
 This program prints 10 multiplcation problems and prints
 the number correct and incorrect, along with the percentage.
 */




#include <iostream>
#include<cstdlib>
#include <time.h>

using namespace std;
//function declarations
void displayProblem();
void checkAnswer(int a, int num_1, int num_2);
void printResults(int& correct_count, int& incorrect_count);
//declaring global variables
int correct_count=0, incorrect_count=0;

int main()
{
    //for loop to print 10 math problems
    for (int i = 0; i < 10; i++)
    {
      //calls function
        displayProblem();
    }
    //calls function
    printResults(correct_count,incorrect_count);
    
    }
//function to display the problem using random numbers 1-10
void displayProblem()
{
    int num_1, num_2,answer;
    srand(time(0));
    num_1 = rand() % 10 + 1;
    num_2 = rand() % 10 + 1;
    
    
    cout << "What is " << num_1 << " times " << num_2 << endl;
    cin >> answer;
    checkAnswer(answer, num_1, num_2);
}
//function to check answer
void checkAnswer(int a,int num_1,int num_2)
{
    
    if (a == (num_1*num_2))
    {
        int response_num;
        response_num=rand()%4+1;
        srand(time(0));
        //switch statement to vary answers
        switch(response_num)
        {
            case 1:
                cout<<"Nice work!\n";
                break;
            case 2:
                cout<<"Excellent!\n";
                break;
            case 3:
                cout<<"Very good!\n";
                break;
            case 4:
                cout<<"Keep up the good work!\n";
                break;
        }
        
        correct_count++;
    }
    else
    {
        int response_num_2;
        response_num_2=rand()%4+1;
        srand(time(0));
        //switch statment to vary responses
        switch(response_num_2)
        {
            case 1:
                cout<<"No. Please try again\n";
                break;
            case 2:
                cout<<"Wrong. Try once more.\n";
                break;
            case 3:
                cout<<"Don't give up!\n";
                break;
            case 4:
                cout<<"No. Keep trying.\n";
                break;
        }
        incorrect_count++;
    }
    
}
//function to print score and correct/incorrect
void printResults(int& correct_count, int& incorrect_count)
{
    cout<<"You got "<<correct_count<<" questions corect\n";
    cout<<"You got "<<incorrect_count<<" questions incorrect\n";
    
    double percentage=correct_count/10.0;
    percentage*=100;
    
    if(percentage>=75)
    {
        cout<<"Your score was: "<<percentage<<"%\n";
        cout<<"Congratulations, you are ready to go to the next level!\n";
    }
    else
    {
        cout<<"Your score was: "<<percentage<<"%\n";
        cout<<"Please ask your instructor for help!\n";
    }
}

