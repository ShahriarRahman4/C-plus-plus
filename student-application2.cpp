#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int n,sum=0;
cout<<"Enter Number of students :";
cin>>n;

int students[n];
cout<<"Enter the marks :"<<endl;
for(int i=0 ; i<n ; i++)
{
    cout<< "Marks of student no."<<i+1<<" = ";
    cin>> students[i];
    sum = sum +students[i];
}
float avg =(float) sum/n;
cout<<"TOTAL MARKS :" <<sum <<endl;
cout<<"AVERAGE :" <<avg;



    return 0;
}