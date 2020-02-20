#include<iostream>
using namespace std;
struct lista
{
    int ertek;
    string word;
    lista * kov;
};
int main()
{
    lista * mutato = NULL;
    int i;
    int n;
    cin>>n;
    int maxi=-INT_MAX;
    string save;
    for(i=0; i<n; i++)
    {
        lista * ujelem = new lista;
        ujelem->ertek = i;
        cin>>ujelem->ertek;
        cin>>ujelem->word;
        if (ujelem->ertek > maxi) {
            maxi=ujelem->ertek;
            save=ujelem->word;
        }
        ujelem->ertek = i;
        ujelem->kov = mutato;
    }
    cout<<save;
    return 0;
}
