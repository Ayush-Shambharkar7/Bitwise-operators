//Ayush Shambharkar
//23070123034
//Aim - to set or reset a particular bit


#include<iostream>
using namespace std;
int main()
{
    int bit_set,bit_reset;
    int i;
    int set, reset;

    cout<<"Enter the number to be set or reset: ";
    cin>>i;

    cout<<"Enter the bit to be changed: ";
    cin>>bit_set>>bit_reset;

    set = i|(1<<bit_set);                         //using or operator to convert from 0 to 1
    reset = i&(~(1<<bit_reset));                    //using and operator to convert from 1 to 0

    cout<<"set: "<<set<<endl;
    cout<<"Reset: "<<reset<<endl;
}

/*
OUTPUT:
Enter the number to be set or reset: 5
Enter the bit to be changed: 1 2
set: 7
Reset: 1

Enter the number to be set or reset: 7
Enter the bit to be changed: 3 2
set: 15
Reset: 3
*/
