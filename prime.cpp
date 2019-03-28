//
//  main.cpp
//  ProgEx3
//
//  Created by Sean Battin on 3/11/19.
//  Copyright © 2019 Sean Battin. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int k;
    
    cout<<"Enter n (to print primes from 3 to n): ";
    cin>>k;
    
    for (int i=3; i<k; i++)
    {
        bool prime_num=true;
        for (int j=2; j<=i-1; j++)
        {
            if (i % j == 0)
            {
                prime_num=false;
                break;
            }
        }
        if(prime_num)
            cout << i <<" is a prime number\n";
    }
        
    
    return 0;
}
