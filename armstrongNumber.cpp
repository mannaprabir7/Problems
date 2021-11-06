#include <iostream>

using namespace std;

int main()
{
    int i, n,r, m, sum=0;
    
    cout<<"Enter number ";
    cin>>n;
    m=n;
    while(n>0){
        r = n%10;
        n = n/10;
        sum = sum+r*r*r;
    }
    if (sum == m){
        cout<<"Armstrong number";
    } else {
        cout<<"Not Armstrong number";
    }
    return 0;
}
