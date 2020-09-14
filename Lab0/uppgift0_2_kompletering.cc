//####
//2-11 Inkludera samtliga kodbibliotek som används i filen.
//SVAR: La till #include <string>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//####
//8-8 Koden uppfyller inte specifikationen.
//Beräkningar ska genomföras i funktioner som anropas av huvudprogrammet.
//SVAR: Har nu ändrat så alla beräkningar görs genom funktioner

//Omvandlar celcius till kelvin
float to_kelvin(int celcius);

//Omvandlar celcius till farenheit
float to_farenheit(int celcius);

//Omvandlar celcius till réamur
float to_reaumur(int celcius);

int main()
{
    int startvarde;
    int slutvarde;

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

    // Bestämmer konstanta manipulatorer
    cout << setfill(' ') << left;
    // Översta raderna i tabellen
    cout << setw(12) << "Celsius" << flush;
    cout << setw(8)  << "Kelvin" << flush;
    cout << setw(13) << "Farenheit" << flush;
    cout << setw(7)  << "Réaumur" << endl;
    cout << setw(40) << setfill('-') << '-' << endl;


    //Bestämmer alla konstanta manipulatorer
    cout << fixed << setprecision(2) << setfill(' ') << right << flush;

    //Temperaturvärden i tabellen
    for (int i{startvarde}; i <= slutvarde; ++i)
    {

        // Rad i tabellen
	//####
        //4-3 Upprepa inte manipulatorer som gäller tills vidare.
        //SVAR: Ändrade så det finns en cout innan for-loopen
        //där alla konstanta manipulatorer bestäms.
        //Gjorde detta på de första två raderna också
        cout << setw(7) << i << flush;
        cout << setw(11) << to_kelvin(i) << flush;
        cout << setw(11) << to_farenheit(i) << flush;
        cout << setw(11) << to_reaumur(i) << endl;
    }

    return 0;
}

//Omvandlar celcius till kelvin
float to_kelvin(int celcius)
{
    float kelvin = celcius + 273.15;
    return kelvin;
}

//Omvandlar celcius till farenheit
float to_farenheit(int celcius)
{
    float farenheit = celcius * 9.00/5 + 32;
    return farenheit;
}

float to_reaumur(int celcius)
{
    float reaumur = celcius * 4.00/5;
    return reaumur;
}
