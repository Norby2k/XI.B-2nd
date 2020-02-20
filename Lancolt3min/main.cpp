#include <iostream>

using namespace std;
struct lista {
    int pos1,pos2,pos3;
    lista * next;
};
int main()
{
    struct lista * mutato = NULL;
    int pos1,pos2,pos3;
    int savepos1,savepos2,savepos3;
    int p1,p2,p3;
    int min=INT_MAX;
    do {
        lista * ujelem = new lista;
        cin>>ujelem->pos1;
        cin>>ujelem->pos2;
        cin>>ujelem->pos3;
        p1=ujelem->pos1,p2=ujelem->pos2,p3=ujelem->pos3;
        if ((ujelem->pos1+ujelem->pos2+ujelem->pos3 < min) && (ujelem->pos1+ujelem->pos2+ujelem->pos3 > 0)) {
            min=ujelem->pos1+ujelem->pos2+ujelem->pos3;
            savepos1=ujelem->pos1;
            savepos2=ujelem->pos2;
            savepos3=ujelem->pos3;
        }
        ujelem->next=mutato;
        mutato=ujelem;
    } while (p1+p2+p3 > 0);

   cout<<savepos1<<" "<<savepos2<<" "<<savepos3;
    return 0;
}
