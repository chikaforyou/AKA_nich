#include <iostream>
using namespace std;
// Recursive function to return gcd of a and b
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

// Driver program to test above function
int main()
{
    int a, b;
    cout<<"GCD calculator"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"GCD: "<<gcd(a, b);
    return 0;
}
