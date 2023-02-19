#include <iostream>
#include "my_types.h";
#include <windows.h>
#include <string>
#include <cstdlib>
#include <fstream>

using namespace std;


void zera(Piec *pie, NaWode *nw, Ele *el, ElektPrzenosna *ep)
{
        int wypisz=10, suma_obiektow=0, dlugosc;
        //suma dodanych obiektow
            suma_obiektow=suma_obiektow+liczba(pie);
            suma_obiektow=suma_obiektow+liczba(nw);
            //suma_obiektow=suma_obiektow+liczba(ep);
            suma_obiektow=suma_obiektow+liczba(el);


            wypisz=10-to_string(suma_obiektow).length();
            for(int i=0; i<wypisz; i++)
            {
                cout << "0";
            }
            cout <<suma_obiektow;
           //cout<<10;
}

//szablon funkcji, wyliczajaca wypelnione obiekty danymi
template <class urzadzenie>
int liczba(urzadzenie *tab)
{
        int liczba=0;
        for(int i=0; i<20; i++)
        {
            liczba=liczba+tab[i].ilosc();
        }
        return liczba;
}

//wypis mozliwych klas do wyboru
void menu2()
{
    cout<<"======================"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| Wybierz urzadzenie |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 1.Piec             |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 2.Wodne            |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 3.Elektroniczne    |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 4.Przenosne        |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 5.Powrot           |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"======================"<<endl;
}

void menu(Piec *pie, NaWode *nw, Ele *el, ElektPrzenosna * ep)
{
    cout<<"======================"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"|    Media domowe.   |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| Liczba= ";
    zera(pie,nw,el,ep);
    cout<<" |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 1.Dodaj wybrane    |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 2.Wypisz wybrane   |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 3.Wypisz wszystko  |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 4.Zapisz sesje     |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 5.Wczytaj sesje    |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"| 6.Zakoncz program  |"<<endl;
    cout<<"|                    |"<<endl;
    cout<<"======================"<<endl;
}


//szablon funkcji zapisywania danych w pliku dla wybranych obiektow
template <class urzadzenie>
void zapiszPlik(urzadzenie *tab)
{
    fstream plik;
    plik.open(tab[0].id+".txt", ios::out);
    if(plik.good()==true)
    {
    cout<< tab[0].id+".txt"<<endl;
    plik<<liczba(tab)<<endl;
    plik.close();
    }
    plik.open(tab[0].id+".txt", ios::out |ios::app);
    if(plik.good()==true)
        {
            for(int i=0; i<liczba(tab); i++)
                {
                 // if(tab[i].ilosc()==1)
                    //{
                        plik<<tab[i].Nazwa<<endl;
                        plik<<tab[i].Marka<<endl;
                        plik<<tab[i].Model<<endl;
                        plik<<tab[i].Waga<<endl;
                        plik<<tab[i].Koszt<<endl;
                        plik<<tab[i].Energia<<endl;
                        cout <<(tab[i].Nazwa)<<endl;
                        system("pause");
                  //  }
                }
                plik.close();
        }
}
//szablon funkcji wczytywania danych w pliku dla wybranych obiektow
template <class urzadzenie>
void wczytajPlik(urzadzenie *tab)
{
    int licznik;
    fstream plik;
    string linia;
    plik.open(tab[0].id+".txt", ios::in);
    if(plik.good()==true)
    {
    getline(plik,linia);
    licznik=atoi(linia.c_str());
    int i=licznik;
            while(i<=licznik+liczba(tab))
                {
                  if(tab[i].ilosc()==0)
                    {
                        getline(plik,linia);
                        cout << linia<<endl;
                        tab[i].Nazwa=linia;
                        getline(plik,linia);
                        cout << linia<<endl;
                        tab[i].Marka=linia;
                        getline(plik,linia);
                        cout << linia<<endl;
                        tab[i].Model=linia;
                        getline(plik,linia);
                        cout << linia<<endl;
                        tab[i].Waga=atof(linia.c_str());
                        getline(plik,linia);
                        cout << linia<<endl;
                        tab[i].Koszt=atof(linia.c_str());
                        getline(plik,linia);
                        cout << linia<<endl;
                        tab[i].Energia=atof(linia.c_str());
                        tab[i].Dodany=1;
                    }
                    i++;
                }
            plik.close();
        }
        system("pause");
    }

template <class urzadzenie>
void connect(urzadzenie *tab, int num_of_case)
{
            if(num_of_case==1)
            {
            cin>>tab;
            system("pause");
            }
            else if(num_of_case==2)
            {
                cout<<tab;
                system("pause");
            }else if(num_of_case==3)
            {
                cout<<tab;
            }else if(num_of_case==4)
            {
                zapiszPlik(tab);
            }else if(num_of_case==5)
            {
                wczytajPlik(tab);
            }
}

void mozliwosci(Piec *pie, NaWode *nw, Ele *el, ElektPrzenosna * ep)
{
    cout << "Wybierz kategorie: ";
    int wybor1=0;
    cin>>wybor1;
    switch(wybor1)
    {
    case 1:
        {
            mozliwosci2(pie,nw,el,ep, 1);
            break;
        }
   case 2:
        {
            mozliwosci2(pie,nw,el,ep, 2);
            break;
        }
   case 3:
        {
            connect(pie,3);
            connect(nw,3);
            connect(el,3);
            connect(ep,3);
            system("pause");
            break;
        }
   case 4:
        {
        mozliwosci2(pie,nw,el,ep, 4);
        break;
        }
    case 5:
        {
        mozliwosci2(pie,nw,el,ep, 5);
        break;
        }
    case 6:
        {
            exit(0);
            break;
        }
    }
}

void mozliwosci2(Piec *pie, NaWode *nw, Ele *el, ElektPrzenosna * ep, int num_of_case)
{
    system("cls");
    menu2();
    cout<<"Wybierz urzadzenie:";
    int wybor=0;
    cin>>wybor;
    switch(wybor)
    {
    case 1:
        {
            connect(pie,num_of_case);
            mozliwosci2(pie,nw,el,ep,num_of_case);
            break;
        }
    case 2:
        {
            connect(nw,num_of_case);
            mozliwosci2(pie,nw,el,ep,num_of_case);
            break;
        }
    case 3:
        {
            connect(el,num_of_case);
            mozliwosci2(pie,nw,el,ep,num_of_case);
            break;
        }
    case 4:
        {
            connect(ep,num_of_case);
            mozliwosci2(pie,nw,el,ep,num_of_case);
            break;
        }
    case 5:
        {
            system("cls");
            menu(pie,nw,el,ep);
            break;
        }
    }
}
