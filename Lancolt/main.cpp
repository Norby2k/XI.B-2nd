#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
struct LIST {
    int number;
    LIST * next;
};
int main()
{
    srand(time(NULL));
    int n;
    cin>>n;
    LIST * mutato = NULL;
    int i;
    for (i=0;i<n;i++) {
        LIST * ujelem = new LIST;
        ujelem->number=rand()%100; //beolvasas modositas, en randomot adtam neki
        ujelem->next=mutato;
        mutato=ujelem;
        cout<<ujelem->number<<" ";
    }
    int MIN=INT_MAX;
    LIST * tmpmutato = mutato;
    for (i=0;i<n;i++) {
        if (tmpmutato->number < MIN) MIN=tmpmutato->number;
        tmpmutato=tmpmutato->next;
    }
    cout<<endl<<MIN;
    return 0;
}
