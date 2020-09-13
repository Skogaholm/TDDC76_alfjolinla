//####
//2-11 Inkludera samtliga kodbibliotek som används i filen.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
        //####
        //2-2 - Engelska i kod.
  	//Deklarera variabler
  	int tal{0};
  	string text{" "};
  	char tecken{' '};
  	float flyttal{0.0};

  	//Första delen
  	cout << "Skriv in ett heltal: " << flush;
  	cin >> tal;
  	cout << "Du skrev in heltalet: ";
  	cout << tal << '\n' << endl;

  	//Nollställ cin, görs mellan alla delar
  	cin.clear();
  	cin.ignore(1000, '\n');

  	//Andra delen
  	cout << "Skriv in fem  heltal: " << flush;
  	cin >> tal;
   	cout << "Du skrev in heltalen: ";
	//#### 1-7 Undvik onödiga tomrader.
	
  	cout << tal << ' ';
  	cin >> tal;
  	cout << tal << ' ';
  	cin >> tal;
  	cout << tal << ' ';
  	cin >> tal;
  	cout << tal << ' ';
  	cin >> tal;

  	cout << tal << '\n' << endl;

  	cin.clear();
  	cin.ignore(1000, '\n');

  	//Tredje delen
  	cout << "Skriv in ett heltal och ett flyttal: " << flush;
  	cin >> tal >> flyttal;
  	cout << "Du skrev in heltalet: " << flush;
  	cout << setw(10) << tal << endl;
  	cout << "Du skrev in flyttalet: " << flush;
  	cout << setw(9) << fixed << setprecision(4) << flyttal << '\n' << endl;

	  cin.clear();
	  cin.ignore(1000, '\n');

	  //Fjärde delen
	  //####
	  //1-3 Använd konsekvent indenteringsstil.
	  cout << "Skriv in ett flyttal och ett heltal: " << flush;
	  cin >> flyttal >> tal;
	  cout << "Du skrev in heltalet:" << flush;
	  cout << setw(11) << setfill('-') << tal << endl;
  	cout << "Du skrev in flyttalet:" << flush;
	//####
        //4-3 Upprepa inte manipulatorer som gäller tills vidare.
  	cout << setw(10) << setfill('-') << fixed << setprecision(4)
	  																 << flyttal << '\n' <<  endl;
	//####
        //1-4 Radbryt långa rader på lämpligaste sätt.

  	cin.clear();
  	cin.ignore(1000, '\n');

	  //Femte delen
	  cout << "Skriv in ett tecken: " << flush;
  	cin >> tecken;
  	cout << "Du skrev in tecknet: " << tecken << '\n' << endl;


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
    cin >> tal >> text;
    cout << "Du skrev in talet |" << tal << "| och ordet |"
                                  << text << "|." << '\n' <<  endl;

    cin.clear();
    cin.ignore(1000, '\n');

    //Åttonde delen
    cout << "Skriv in ett tecken och ett ord: " << flush;
    cin >> tecken >> text;
    cout << "Du skrev in \"" << text << "\" och \'"
                             << tecken << "\'." << '\n' << endl;
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
