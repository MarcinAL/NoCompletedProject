#include <iostream>
#include "my_types.h";
#include <windows.h>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;

//przeciazenie strumienia wyjsciowego dla wszystkich obiektow, brak mozliwosci wpisania w szablon
//wyswietla blad C++ ambiguous overload for ‘operator ’
ostream &operator<<(ostream &cout, Piec *pie)
{
    int liczba_obiektow=0;
    for(int i=0; i<liczba(pie); i++)
    {
        liczba_obiektow=liczba_obiektow+1;
        pie[i].obiekt_wypisz();
    }
    if(liczba_obiektow<1)
    {
    cout << "Brak dodanych urzadzen grzewczych."<<endl;
    }
}

ostream &operator<<(ostream &cout, NaWode *nw)
{
    int liczba_obiektow=0;
    for(int i=0; i<liczba(nw); i++)
    {
        liczba_obiektow=liczba_obiektow+1;
        nw[i].obiekt_wypisz();
    }
    if(liczba_obiektow<1)
    {
    cout << "Brak dodanych urzadzen wodnych."<<endl;
    }
}

ostream &operator<<(ostream &cout, Ele *el)
{
    int liczba_obiektow=0;
    for(int i=0; i<liczba(el); i++)
    {
        liczba_obiektow=liczba_obiektow+1;
        el[i].obiekt_wypisz();
    }
    if(liczba_obiektow<1)
    {
    cout << "Brak dodanych urzadzen elektrycznych."<<endl;
    }
}

ostream &operator<<(ostream &cout, ElektPrzenosna *ep)
{
    int liczba_obiektow=0;
    for(int i=0; i<liczba(ep); i++)
    {
        liczba_obiektow=liczba_obiektow+1;
        ep[i].obiekt_wypisz();
    }
    if(liczba_obiektow<1)
    {
    cout << "Brak dodanych urzadzen elektronicznych."<<endl;
    }
}

//pzeciazanie strumienia wejsciowego

istream &operator>>(istream &cin, Piec *pie)
{
     pie[liczba(pie)].obiekt_wpisz();
    cout << "Dodany do pamieci podrecznej."<<endl;
}

istream &operator>>(istream &cin, NaWode *nw)
{
     nw[liczba(nw)].obiekt_wpisz();
    cout << "Dodany do pamieci podrecznej."<<endl;
}

istream &operator>>(istream &cin, Ele *el)
{
     el[liczba(el)].obiekt_wpisz();
    cout << "Dodany do pamieci podrecznej."<<endl;
}

istream &operator>>(istream &cin, ElektPrzenosna *ep)
{
     ep[liczba(ep)].obiekt_wpisz();
    cout << "Dodany do pamieci podrecznej."<<endl;
}

