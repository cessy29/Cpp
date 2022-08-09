#include <iostream>

using namespace std;

int Seconds(int hours)
{ 
    int mins = hours * 60;
    int secs = mins * 60;  
    cout<<"howManySeconds("<<hours<<") ------> " <<secs<<"\n"; 
    return secs;
} 

int main()
{ 
    Seconds(2); 
    Seconds(10);
    Seconds(24);
    return 0;
    
}
