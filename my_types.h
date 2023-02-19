#include <iostream>

using namespace std;

//klasa bazowa
class MediaDomowe
{
    protected:
    string Nazwa,Marka,Model,linia;
    int Dodany=0,KosztEnergii;
    float Waga,Koszt,Energia;
public:
    MediaDomowe(){}
    void wpisz();
    void wypisz();
    void zapisz(fstream *plik);
    void wczytaj(fstream *plik);
    int ilosc();
    template<class urzadzenie>
    friend void zapiszPlik(urzadzenie *tab);
    template<class urzadzenie>
    friend void wczytajPlik(urzadzenie *tab);
    friend class cout;
    ~MediaDomowe(){}
};
//klasa pochodna
class Piec:public MediaDomowe
{
    float Moc;
    string Wylot;
    int Max;
public:
    string id="1";
    Piec(){}
    void obiekt_wpisz();
    void obiekt_wypisz();
    void obiekt_zapisz(fstream *plik);
    void obiekt_wczytaj(fstream *plik);
    template<class urzadzenie>
    friend void zapiszPlik(urzadzenie *tab);
    template<class urzadzenie>
    friend void wczytajPlik(urzadzenie *tab);
    friend class cout;
    ~Piec(){}
};
//klasa pochodna
class NaWode:public MediaDomowe
{
    int Wsad=0,ZuzycieWody=0,Pojemnosc=0;
public:
    string id="2";
    NaWode(){}
    void obiekt_wpisz();
    void obiekt_wypisz();
    void obiekt_zapisz(fstream *plik);
    void obiekt_wczytaj(fstream *plik);
    template<class urzadzenie>
    friend void zapiszPlik(urzadzenie *tab);
    template<class urzadzenie>
    friend void wczytajPlik(urzadzenie *tab);
    friend class cout;
    ~NaWode(){}
};
//klasa pochodna
class Ele:public MediaDomowe
{
public:
    string id="3";
    Ele(){}
    void obiekt_wpisz();
    void obiekt_wypisz();
    void obiekt_zapisz(fstream *plik);
    void obiekt_wczytaj(fstream *plik);
    template<class urzadzenie>
    friend void zapiszPlik(urzadzenie *tab);
    template<class urzadzenie>
    friend void wczytajPlik(urzadzenie *tab);
    friend class cout;
    ~Ele(){}
};
//klasa pochodna
class ElektPrzenosna:public MediaDomowe
{
    float Pojemnosc=0;
    public:
    string id="4";
    ElektPrzenosna(){}
    void obiekt_wpisz();
    void obiekt_wypisz();
    void obiekt_zapisz(fstream *plik);
    void obiekt_wczytaj(fstream *plik);
    template<class urzadzenie>
    friend void zapiszPlik(urzadzenie *tab);
    template<class urzadzenie>
    friend void wczytajPlik(urzadzenie *tab);
    friend class plik;
    ~ElektPrzenosna(){}
};
//funkcje przyjmujace jako argumenty wszystkie obiekty i nie tylko
void menu(Piec *pie, NaWode *nw, Ele *el, ElektPrzenosna * ep);
void menu2();
void zera(Piec *pie, NaWode *nw, Ele *el, ElektPrzenosna *ep);
void mozliwosci(Piec *pie, NaWode *nw, Ele *el, ElektPrzenosna * ep);
void mozliwosci2(Piec *pie, NaWode *nw, Ele *el, ElektPrzenosna * ep, int num_of_case);
//szablony ograniczajace redundancje
template <class urzadzenie> void connect(urzadzenie *tab, int num_of_case);
template <class urzadzenie> void connect2(urzadzenie *tab, int num_of_case);
template <class urzadzenie> int liczba(urzadzenie *tab);
template <class urzadzenie> void zapiszPlik(urzadzenie *tab);
template <class urzadzenie> void wczytajPlik(urzadzenie *tab);
//przeciazony strumien wyjscia
ostream &operator<<(ostream &cout, Piec *pie);
ostream &operator<<(ostream &cout, NaWode *nw);
ostream &operator<<(ostream &cout, Ele *el);
ostream &operator<<(ostream &cout, ElektPrzenosna *ep);
//przeciazony strumien wejscia
istream &operator>>(istream &cin, Piec *pie);
istream &operator>>(istream &cin, NaWode *nw);
istream &operator>>(istream &cin, Ele *el);
istream &operator>>(istream &cin, ElektPrzenosna *ep);

