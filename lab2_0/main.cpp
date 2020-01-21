#include <iostream>
#include <fstream>
using namespace std;
int getLCM(int a, int b){
   int m;
   m = (a > b) ? a : b;
   while(true){
      if(m % a == 0 && m % b == 0)
      return m;
      m++;
   }
}
int LCM(int arr[], int n){
   int lcm = getLCM(arr[0], arr[1]);
   for(int i = 2; i < n; i++){
      lcm = getLCM(lcm, arr[i]);
   }
   return lcm;
}


int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in>>n;
    int a[n];
    for (int i=0;i<n;i++) {
        in>>a[i];
    }
    out<<LCM(a,n);
    int b=LCM(a,n);
    int sum=0;
    while(b>0) {sum+=b%10;
    b/=10;
    }
    out<<endl<<sum;
    return 0;
}
