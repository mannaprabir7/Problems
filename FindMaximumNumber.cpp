#include <iostream>
 
using namespace std;
 
 int Max(int a, int b, int c){
        if (a>b && a>c)
            return a;
        else if(b>c)
            return b;
        else
            return c;
    }
    
int main()
{
    cout<<Max(10,15,32);
    return 0;
}
