//Ayush Shambharkar
//23070123034
//Aim - Basic use of bitwise operstors.

#include<iostream>
using namespace std;
int main()

{
    int a,b;
    int and_op,or_op,EXOR_op,NOT,left_shift,right_shift;

    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;

    and_op = a&b;
    cout<<"AND operator: "<<and_op<<endl;

    or_op = a|b;
    cout<<"OR operator: "<<or_op<<endl;

    EXOR_op = a^b;
    cout<<"EXOR_op operator: "<<EXOR_op<<endl;

    NOT = ~a;
    cout<<"NOT operator"<<NOT<<endl;

    left_shift = a<<2;
    cout<<"left shift: "<<left_shift<<endl;

    right_shift = a>>2;
    cout<<"right shift: "<<right_shift<<endl;
}

/*
OUTPUT:
Enter value of a: 7
Enter value of b: 9
AND operator: 1
OR operator: 15
EXOR_op operator: 14
NOT operator-8
left shift: 28
right shift: 1

Enter value of a: 8
Enter value of b: 5
AND operator: 0
OR operator: 13
EXOR_op operator: 13
NOT operator-9
left shift: 32
right shift: 2
*/
