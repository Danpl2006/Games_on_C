// Утраченный клад

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    const int GOLD_PRICES = 900;
    int adventurers, killed, survivors;
    string leader;
    
    // получение информации
    
    cout << "Welcome to Lost Fortune\n\n";
    cout << "Please enter the following for your personalized adventure\n";
    cout << "Enter a number: ";
    cin >> adventurers;
    cout << "Enter a number smaller than the first: ";
    cin >> killed;
    survivors = adventurers - killed;
    cout << "Enter your last name: ";
    cin >> leader;

    // Сюжет
    cout << "\nAbrave group of " << adventurers << " set out on a quest ";
    cout << "-- in search of the lost treasure of the ANCIENT RUINS...";
    cout << "The team was led by the legendary hero " << leader <<".\n";
    cout << "\nAlong the way, a band of marauding ogres ambushed the party";
    cout << "All fought bravely under the command of " << leader << ".\n";
    cout << killed << " adventurers was killed by ogres";
    cout << "Leaving just " << survivors << " in the group";
    cout << "So the adventurers split " << GOLD_PRICES << " gold";
    cout << leader << " held on the extra " << (GOLD_PRICES % survivors);
    return 0;

}

