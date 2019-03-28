//
//  Sean Battin
//  Lab_7_2
//

// This program prints a multiplication table for numbers 1-15

#include <iostream>
using namespace std;
int main()
{
    int size;
    char choice;
    for(;;)
    {
    cout<<"Enter the table size: ";
    cin>>size;
    
    if(size<1||size>15)
    {
        cout<<"Size must be between 1 and 15!!\n";
        continue;
    }
        for(int i=0;i<=size;i++)
        {
            if(i==0)
                cout<<"\t";
            else
                cout<<i<<"\t";
        }
        cout<<endl;
        for(int i=1;i<=size;i++)
        {
            cout<<i<<"\t";
            for(int j=1;j<=size;j++)
            {
                cout<<i*j<<"\t";
                
            }
            cout<<endl;
        }
        
        cout<<"\nWould you like to do another one (Y or N): "<<endl;
    cin>>choice;
    if(tolower(choice)=='y')
        continue;
     if(tolower(choice)=='n')
         break;
    }
    return 0;
}
