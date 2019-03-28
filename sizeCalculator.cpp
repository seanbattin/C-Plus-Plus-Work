#include <iostream>
#include <iomanip>

using namespace std;

double hatSize(int w, int h);
double waistSize( int w, int a);
double jacketSize(int h, int w, int a);
int main()
{
    for (;;)
    {
        
        cout << setprecision(2) << fixed;
        
        
        int age, weight, height;
        char choice;
        cout << "Enter me your height in inches, weight in pounds, and age in years\nand ";
        cout << "I will give you your hat size, jacket  size(inches at chest)\nand your waist size in inches.";
        cin >> height >> weight >> age;
        cout << "\nhat size = " << hatSize(weight, height) << "\njacket size = " << jacketSize(height, weight, age);
        cout << "\nwaist size = " << waistSize(weight, age);
        cout << "\n\nEnter Y or y to repeat, any other character ends:" << endl;
        cin >> choice;
        
        if (towlower(choice) != 'y')
        {
            break;
        }
        
        
        
        
        
        
    }
    
    
    
    return 0;
}
double hatSize(int w, int h)
{
    double hatSize;
    hatSize = ((double)w / h)*2.9;
    
    return hatSize;
    
    
}
double waistSize(int w, int a)
{
    double waistSize;
    
    waistSize = ((double)w / 5.7);
    
    if (a > 29)
    {
        
        for (int i = 30; i <= a; i+=2)
        {
            waistSize += .1;
            
        }
        
        
    }
    
    
    return waistSize;
    
    
    
}
double jacketSize(int h, int w, int a)
{
    double jacketSize;
    jacketSize = ((double)h*w) / 288;
    if (a > 49)
    {
        for (int i = 50; i <= a; i += 10)
        {
            jacketSize +=0.125;
        }
        
    }
    
    return jacketSize;
}
