#include<iostream>
using namespace std;

int main()
{
    int a[10];
    cout<<"enter 10 elements : \n";
    for(int i=0; i<10; i++)
        cin>>a[i];

    int sum=0;
    for(int i=0; i<10; i++)
        sum+=a[i];

    cout<<"sum : "<<sum;


    return 0;
}









