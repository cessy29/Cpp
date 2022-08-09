#include <iostream>

using namespace std;

int main()
{
    int mins,converted;
    cout<<"Convert Minute to Second\n";
    
    cout<<"Enter how many minutes you want to covert: ";
    cin>>mins;
     
    converted = mins * 60 ;
    
    cout<<converted<<" in seconds ";
    return 0;
}
