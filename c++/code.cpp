#include <iostream>
using namespace std;
int main()
{
    int num[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter value"<<i+1<<"=";
        cin>>num[i];
        num[i]=num[i]+1;
    }
      cout<<"\nafter incrementing the values in array num"<<endl;
        for(int j=0;j<5;j++)
        {
            cout<<num[j]<<endl;
        }
}