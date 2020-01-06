#include <iostream>
#include <string>
using namespace std;

int main()
{
    double myDoubles[20];
    double sum=0,average;
    for(int i=0; i<20; i++)
        {
            myDoubles[i]=i;
        }
    cout<<"myDouble array is :"<<endl;
    for(int i=0; i<20; i++)
        {
            cout<<myDoubles[i]<<endl;
        }
    for(int i=0; i<20; i++)
        {
            sum+=myDoubles[i];
        }
    average=sum/20;
    cout << "The average value of myDoubles is: " <<average<<endl;
return 0;
}
