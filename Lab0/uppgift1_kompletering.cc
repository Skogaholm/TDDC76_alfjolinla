//####
//2-11 Inkludera samtliga kodbibliotek som används i filen.
//#svar# lagt till #include <string>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//mainfunktion
int main()
{
    //####
    //2-2 - Engelska i kod.
    //#svar# Ändrat variabelnamn
  	//Deklarera variabler
  	int integer{0};
  	string text{" "};
  	char character{' '};
  	float floatnumber{0.0};

  	//Första delen
  	cout << "Skriv in ett heltal: " << flush;
  	cin >> integer;
  	cout << "Du skrev in heltalet: ";
  	cout << integer << '\n' << endl;

  	//Nollställ cin, görs mellan alla delar
  	cin.clear();
  	cin.ignore(1000, '\n');

  	//Andra delen
  	cout << "Skriv in fem  heltal: " << flush;
  	cin >> integer;
   	cout << "Du skrev in heltalen: ";
	//#### 1-7 Undvik onödiga tomrader.
    //#svar# Tyckte det blev tydligare, men var felaktigt
  	cout << integer << ' ';
  	cin >> integer;
  	cout << integer << ' ';
  	cin >> integer;
  	cout << integer << ' ';
  	cin >> integer;
  	cout << integer << ' ';
  	cin >> integer;
  	cout << integer << '\n' << endl;

  	cin.clear();
  	cin.ignore(1000, '\n');

  	//Tredje delen
  	cout << "Skriv in ett heltal och ett flyttal: " << flush;
  	cin >> integer >> floatnumber;
  	cout << "Du skrev in heltalet: " << flush;
  	cout << setw(10) << integer << endl;
  	cout << "Du skrev in flyttalet: " << flush;
  	cout << setw(9) << fixed << setprecision(4) << floatnumber << '\n' << endl;

	cin.clear();
	cin.ignore(1000, '\n');

	//Fjärde delen
	//####
	//1-3 Använd konsekvent indenteringsstil.
    //#svar# Tror det blev fel pga textredigeringsprogrammet,
    //har ändrat inställningarna så det borde vara rätt.
    cout << "Skriv in ett flyttal och ett heltal: " << flush;
	cin >> floatnumber >> integer;
	cout << "Du skrev in heltalet:" << flush;
    cout << setw(11) << setfill('-') << integer << endl;
  	cout << "Du skrev in flyttalet:" << flush;
	//####
    //4-3 Upprepa inte manipulatorer som gäller tills vidare.
    //#svar#Tog bort extra << setfill('-') << fixed << setprecision(4)
  	cout << setw(10)  << floatnumber << '\n' <<  endl;
	//####
    //1-4 Radbryt långa rader på lämpligaste sätt.
    //#svar# oklart vad lämpligast är, men tror de är rätt

  	cin.clear();
  	cin.ignore(1000, '\n');

	//Femte delen
	cout << "Skriv in ett tecken: " << flush;
  	cin >> character;
  	cout << "Du skrev in tecknet: " << character << '\n' << endl;

    cin.clear();
    cin.ignore(1000, '\n');

    //Sjätte delen
    cout << "Skriv in ett ord: " << flush;
    cin >> text;
    cout << "Du skrev in ordet: " << text << '\n' <<  endl;

    cin.clear();
    cin.ignore(1000, '\n');

    //Sjunde delen
    cout << "Skriv in ett heltal och ett ord: " << flush;
    cin >> integer >> text;
    cout << "Du skrev in talet |" << integer << "| och ordet |"
                                  << text << "|." << '\n' <<  endl;

    cin.clear();
    cin.ignore(1000, '\n');

    //Åttonde delen
    cout << "Skriv in ett tecken och ett ord: " << flush;
    cin >> character >> text;
    cout << "Du skrev in \"" << text << "\" och \'"
                             << character << "\'." << '\n' << endl;
    cin.clear();
    cin.ignore(1000, '\n');

    //Nionde delen
    cout << "Skriv in en rad text: " << flush;
    getline(cin, text, '\n');
    cout << "Du skrev in: \"" << text << "\"\n" <<  endl;

    cin.clear();
    //cin.ignore(1000, '\n'); Behövs inte eftersom getline tar hela raden

    //Tionde delen
    cout << "Skriv in en till rad text: " << flush;
    getline(cin, text, '\n');
    cout << "Du skrev in: \"" << text << "\"\n" <<  endl;

    cin.clear();
    //cin.ignore(1000, '\n'); Behövs inte eftersom getline tar hela raden

    //Elfte delen
    cout << "Skriv in tre ord: " << flush;
    cin >> text;
    cout << "Du skrev in: \"" << text << "\", \"";
    cin >> text;
    cout << text << "\" och \"";
    cin >> text;
    cout << text << '\"' << '\n' << endl;

    cin.clear();
    cin.ignore(1000, '\n');

    return 0;

}
