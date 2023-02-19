#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include "my_types.h"

using namespace std;



/*template <class urzadzenie>
ostream &operator<<(ostream &cout, urzadzenie *tab)
{
    for(int i=0; i<(liczba(tab)); i++)
    {
        if(i==0)
        {
    //    cout<<"|||||||||||||||||||||"<<endl;
        tab[i].wypisz();
     //   cout<<"|||||||||||||||||||||"<<endl;
        }else if(i>0)
        {
        tab[i].wypisz();
    //    cout<<"|||||||||||||||||||||"<<endl;
        }
    }
}*/


int main()
{
    //liczba obiektow wczytana z notatnika
    int liczPie=0;
    int liczNw=0;
    int liczEl=0;
    int liczEp=0;
    bool exit=false;
    Piec *pie;
    pie= new Piec[20];
    NaWode *nw;
    nw= new NaWode[20];
    Ele *el;
    el= new Ele[20];
    ElektPrzenosna *ep;
    ep=new ElektPrzenosna[20];
    while(exit!=true)
    {
    menu(pie,nw,el,ep);
    mozliwosci(pie,nw,el,ep);
  //  system("pause");
    system("cls");
    }
    delete[] pie;
    delete[] nw;
    delete[] el;
    delete[] ep;
    return 0;
}
