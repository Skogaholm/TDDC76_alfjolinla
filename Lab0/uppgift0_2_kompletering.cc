//####
//2-11 Inkludera samtliga kodbibliotek som används i filen.
#include <iostream>
#include <iomanip>
using namespace std;

//####
//8-8 Koden uppfyller inte specifikationen.
//Beräkningar ska genomföras i funktioner som anropas av huvudprogrammet.
int main()
{
    int startvarde;
    int slutvarde;
    float kelvin;
    float farenheit;
    float reaumur;

    cout << "Ange startvärde: " << flush;

    //Kolla om starttemp är ett heltal och varmare än den absoluta nollpunkten
    while (!(cin >> startvarde) || startvarde <= -274)
    {
        if (startvarde <= -274)
        {
            cout << "Du bryter fysikens lagar!" << endl;
        }
        else
        {
            cout << "Felaktig inmatning, skriv ett giltigt heltal" << endl;
        }
        cout << "Ange startvärde: " << flush;
        cin.clear();
        cin.ignore(1000, '\n');
    }

        cin.clear();
        cin.ignore(1000, '\n');

        cout << "Ange slutvärde: " << flush;

      //Kolla om sluttemp är ett heltal och varmare än starttemp
    while (!(cin >> slutvarde) || startvarde >= slutvarde)
    {
        if (!(slutvarde))
        {
            cout << "Felaktig inmatning, skriv ett giltigt heltal" << endl;
        }
        else
        {
            cout << "Välj en temperatur som är högre än startvärdet" << endl;
        }
        cout << "Ange nytt slutvärde: " << flush;
        cin.clear();
        cin.ignore(1000, '\n');
      }
    // Översta raderna i tabellen
    cout << setw(12) << setfill(' ') << left << "Celsius" << flush;
    cout << setw(8)  << setfill(' ') << left << "Kelvin" << flush;
    cout << setw(13) << setfill(' ') << left << "Farenheit" << flush;
    cout << setw(7)  << setfill(' ') << left << "Réaumur" << endl;
    cout << setw(40) << setfill('-') << '-'  << endl;

    // Temperaturvärden i tabellen
    for (int i{startvarde}; i <= slutvarde; ++i)
    {
        //Beräka de olika temperaturerna
        kelvin    = i + 273.15;
        farenheit = i * 9.00/5 + 32;
        reaumur   = i * 4.00/5;

        // Rad i tabellen
	//####
        //4-3 Upprepa inte manipulatorer som gäller tills vidare.
        cout << setw(7)  << setfill(' ') << right << i << flush;
        cout << setw(11) << setfill(' ') << fixed << setprecision(2)
                                         << right << kelvin << flush;
        cout << setw(11) << setfill(' ') << fixed << setprecision(2)
                                         << right << farenheit << flush;
        cout << setw(11) << setfill(' ') << fixed << setprecision(2)
                                         << right << reaumur << endl;
    }

    return 0;
}
