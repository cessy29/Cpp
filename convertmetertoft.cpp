#include <iostream>

using namespace std;

int main()
{
    
    float meter,ft,convert;
    
    cout<<"Convert meters to feet\n";
    
    cout<<"Enter how many meters you want to convert into feet:";
    cin>>meter;
    
    //1 meter = 3.2808399 feet; 
    
     
     convert = 3.2808 * meter; 
     
   cout<<convert<<" in feet ";
    return 0;
}
