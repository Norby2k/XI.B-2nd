#include <iostream>

using namespace std;
struct lista {
    int pos1,pos2;
    lista * next;
};
int main()
{
    struct lista * mutato = NULL;
    int pos1,pos2;
    int savepos1,savepos2;
    int p1,p2;
    int max=-INT_MAX;
    do {
        lista * ujelem = new lista;
        cin>>ujelem->pos1;
        cin>>ujelem->pos2;
        p1=ujelem->pos1,p2=ujelem->pos2;
        if (ujelem->pos1+ujelem->pos2 > max) {
            max=ujelem->pos1+ujelem->pos2;
            savepos1=ujelem->pos1;
            savepos2=ujelem->pos2;
        }
        ujelem->next=mutato;
        mutato=ujelem;
    } while (p1+p2 > 0);

   cout<<savepos1<<" "<<savepos2;
    return 0;
}
