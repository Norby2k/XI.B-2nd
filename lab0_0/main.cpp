#include <iostream>
#include <time.h>
using namespace std;
int min(int bal,int jobb,int v[]) {
    if (bal==jobb) return v[bal];
    int m=(jobb+bal)/2;
    int min1=min(bal,m,v);
    int min2=min(m+1,jobb,v);
    if (min1<min2) return min1; //ez minimum, if(neked.kell()==max) {change to min1>min2}
    return min2;
}
int main() {
    int v[5]={4,2,5,9,3};
    cout<<'\n'<<min(0,4,v);
    return 0;
}
