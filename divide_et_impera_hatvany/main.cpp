#include <iostream>

using namespace std;
int power(int a,int k) {
    if (k==1) return a;
    int x=power(a,k/2);
    x*=x;
    if (k%2!=0)
        x*=a;
    return x;
}
int main()
{
    int a,k;
    cin>>a>>k;
    cout<<power(a,k);
    return 0;
}
