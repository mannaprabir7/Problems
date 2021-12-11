#include<iostream>
using namespace std;

//write a Max() function template for 2 numbers
template <class T>
 T Max(T x, T y){
     if(x>y)
        return x;
    else 
        return y;
 }

void Main()
{
    cout<<Max(10,5)<<endl;
    cout<<Max(12.5f,17.3f);
}
