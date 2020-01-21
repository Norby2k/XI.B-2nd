#include <iostream>

using namespace std;

int Hanoi (int n,char a,char b,char c) {
    if (n==1) {
        cout<<n<<" "<<a<<"-->"<<c<<endl;
    }
    else {
    Hanoi(n-1,a,c,b);
    cout<<n<<" "<<a<<"-->"<<c<<endl;
    Hanoi(n-1,c,a,b);
    }
}
int main()
{
    char a='a',b='b',c='c';
    int n;
    cin>>n;
    Hanoi(n,a,b,c);
    return 0;
}
