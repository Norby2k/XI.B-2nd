//szukseges konyvtarak deklaralasa
#include <stdlib.h>
#include <stdio.h>

//a tomb meretenek meghatarozasa
#define n 499999


using namespace std;

/*
Egyszerű rendező függvény,
mely a hagyományos modszerrel rendez egy tombot

@arr - a rendezesre varo tomb
*/
void normal(int arr[]){
 for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {

            //ha a tomb első feleben valamelyik elem nagyobb,
            //mint a tomb masodik feleben, csereld ki őket

            if ( arr[i]> arr[j])
            {
                int aux= arr[j];
                arr[j]= arr[i];
                arr[i]=aux;

            }

        }

    }

}

/*
Divide et impera modszeren alapulo gyorsrendezes
az argumentumkent megadott tombot rendezni fogja
a ket index kozott

@arr - a rendezesre varo tomb
@balindex - a baloldali index, ahonnan rendezze a tombot
@jobbindex - a jobboldali index, ameddig rendezze a tombot
*/

void quickSort(int arr[], int balindex, int jobbindex) {

      int i = balindex, j = jobbindex;

      int tmp;
    //megkeressuk a rendezesre varo tomb kozepső elemet
      int pivot = arr[(balindex + jobbindex) / 2];



      /* rendezzuk ugy a tombot,
      hogy bal oldalon a pivot helyen levő elemnel csak kisebb
      a jobb oldalon pedig csak nagyobb elemek legyenek */

      while (i <= j) {

            while (arr[i] < pivot)

                  i++;

            while (arr[j] > pivot)

                  j--;

            if (i <= j) {

                  tmp = arr[i];

                  arr[i] = arr[j];

                  arr[j] = tmp;

                  i++;

                  j--;

            }

      };



      /* rekurzivan hivjuk meg a quicksort fuggvenyt
        a ket tombreszletre */

      if (balindex < j)

            quickSort(arr, balindex, j);

      if (i < jobbindex)

            quickSort(arr, i, jobbindex);

}


int main(){
srand(0);
int v[n];
//a tombot feltoltjuk veletlenszamokkal
for(int i = 0; i<n; i++){

v[i]=rand()%10000;
}
//quickSort(v, 0, n);
normal(v);
return 0;

}
