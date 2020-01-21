#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;
/*
int min(int n,int v[]){
int min[v[0];
for (int i=1;i<n;i++){
    if (min>v[i] {
            min=v[i];
    }
    return min;
} */
int min(int bal,int jobb,int v[]) {
    if (bal==jobb) return v[bal];
    int m=(bal+jobb)/2;
    int min1=min(bal,m,v);
    int min2=min(m+1,jobb,v);
    if (min1>min2) return min1;
    return min2;
    }
int main()
{
    srand(time(NULL));
    int n=500000;
    int v[n];
    for (int i=0;i<n;i++) {
        v[i]=rand()%10000+1;
    }
    min(0,n-1,v);
    return 0;
}
