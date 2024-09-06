#include <iostream>
using namespace std;

void draw(int size)
{
    int FuelTank_size = size * 1.4;

    // Это голова ракеты //
    cout << "    _/\\_     " << endl;
    cout << "   /    \\    " << endl;
    cout << "  |_|__|_|   " << endl;
    cout << "  | |  | |   " << endl;
    cout << "   \\____/   " << endl;
    cout << "   /    \\    " << endl;
    cout << "  |------|   " << endl;

    // Это корпус ракеты //
    for (int i = 0; i < size; i++)
    {
        cout << "  |-    -| " << endl;
        if (i % 3 == 0)
        {
            cout << "  |\\____/| " << endl;
            cout << "  |_|__|_| " << endl;
            cout << "  |/    \\|" << endl;
        }
        if (i == 2) cout << "  |-СССР-|" << endl;
    }

    // Это реактивные двигатели ракеты //
    cout << "  /__/\\__\\  " << endl;
    cout << " /__/__\\__\\ " << endl;
    cout << "/__|    |__\\" << endl;

    for (int i = 0; i < FuelTank_size; i++) cout << "|  | -- |  |" << endl;
    cout << "\\_/ \\__/ \\_/" << endl;
}

// Это проверка размера ракеты //
bool size_checker(int &size)
{
    if (size < 3) return false;
    return true;
}

int main()
{
    int rocket_size;
    char guess;

    do
    {
        cout << "____ROCKET BUILDING____" << endl;
        cout << "Enter rocket size (minimum size 3): "; cin >> rocket_size;

        if (size_checker(rocket_size))
        {
            draw(rocket_size);
            break;
        }
        else 
        {
            cout << "The rocket is too small. Wanna try again? (y/n):\n";cin >> guess;
        }

    }while(size_checker && tolower(guess) != 'n');

    return 0;
}
