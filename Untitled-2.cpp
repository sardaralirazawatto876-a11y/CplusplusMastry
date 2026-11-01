#include<iostream>
using namespace std;
int main()
{
    int marks;
    int attendance;

    cout<<"enter your marks:\n";
    cin>>marks;

    cout<<"enter your attendance percentage:\n";
    cin>>attendance;
    if(marks>=85 && attendance>=90)
    {
        cout<<"congratulations your scholarship has been approved:\n";
    }
    else
    {
        cout<<"sorry you do not meet the criteria for scholarship:\n";
    }
    return 0;
};