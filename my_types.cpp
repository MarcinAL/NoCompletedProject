#include <iostream>
#include "my_types.h"

using namespace std;

//klasa bazowa

void MediaDomowe::wpisz()
    {
        Dodany=1;
        cout << "Wprowadz nazwe urzadzenia: ";
        cin>>Nazwa;
        cout << "Wprowadz marke urzadzenia: ";
        cin>>Marka;
        cout <<"Wprowadz model urzadzenia: ";
        cin>>Model;
        cout <<"Wprowadz wage urzadzenia(kg): ";
        cin>>Waga;
        cout <<"Wprowadz koszt zakupu urzadzenia(PLN): ";
        cin>>Koszt;
        cout<<"Wprowadz pobor energii(kWh*rok): ";
        cin>>Energia;
    }

void MediaDomowe::wypisz()
{
    cout << "Przeznaczenie: "<<Nazwa<<endl;
    cout<<"Marka uzadzenia: "<<Marka<<endl;
    cout<<"Wprowadz model urzadzenia: "<<Model<<endl;
    cout<<"Waga urzadzenia"<<Waga<<endl;
    cout<<"Koszt zakupu urzadzenia: "<<Koszt<<" PLN."<<endl;
    cout<<"Pobor Energi(kWh*rok): "<<Energia<<endl;
}

int MediaDomowe::ilosc()
{
    return Dodany;
}

void Piec::obiekt_wpisz()
{
    Piec::wpisz();
    cout << "Wprowadz moc znamionowa: ";
    cin>>Moc;
    cout<<"Wprowadz temperature wylotowa: ";
    cin>>Wylot;
    cout << "Temperatura dopuszczalna";
    cin>>Max;
}

void Piec::obiekt_wypisz()
{
    Piec::wypisz();
    cout << "Moc znamionowa: "<<Moc<<endl;
    cout<<"Wprowadz temperature wylotowa: "<<Wylot<< char(248)<<"C"<<endl;
    cout << "Temperatura dopuszczalna: "<<Max<<char(248)<<"C"<<endl;
}

void NaWode::obiekt_wpisz()
{
    NaWode::wpisz();
    cout<<"Jaka zuzywa ilosc wody(litry):";
    cin>>ZuzycieWody;
    cout <<"Ile zmiesci kg: ";
    cin>>Wsad;
    cout<<"Jaka jest pojemnosc urzadzenia w litrach: ";
    cin>>Pojemnosc;
}

void NaWode::obiekt_wypisz()
{
   NaWode::wypisz();
    cout <<"Wsad "<<Wsad<<" kg."<<endl;
    cout<<"Zuzycie wody: "<<ZuzycieWody<<" litrow"<<endl;
    cout<<"Pojemnosc bebna: "<<Pojemnosc<<" litrow."<<endl;
}

void Ele::obiekt_wpisz()
{
    Ele::wpisz();
}

void Ele::obiekt_wypisz()
{
    Ele::wypisz();
}

void ElektPrzenosna::obiekt_wpisz()
{
    ElektPrzenosna::wpisz();
    cout<<"Wprowadz pojemnosc baterii: ";
    cin>>Pojemnosc;
}

void ElektPrzenosna::obiekt_wypisz()
{
    ElektPrzenosna::wypisz();
    cout<<"Pojemnosc baterii: "<<Pojemnosc;
}


