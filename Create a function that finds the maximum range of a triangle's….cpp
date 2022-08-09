#include <iostream>

using namespace std;



int nextedge(int side1,int side2)
{ 
    int maximum = side1+side2;
    int finalmax=maximum-1;
    cout<<"nextEdge ("<<side1<<", "<<side2<<") ---> "<<finalmax<<"\n";
    return finalmax;
}
int main()
{

   nextedge(10,9);
   nextedge(5,4); 
   nextedge(18,2);
    return 0;
}

