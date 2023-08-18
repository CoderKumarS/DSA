#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[100]={2,3,1,8};
    int pos, num, i;
    cout<<"Enter the Position and Number";
    cin>>pos>>num;
    for ( i = 0; i >= pos; i++)
    {
        cout<<a[i];
    }
    
    return 0;
}
