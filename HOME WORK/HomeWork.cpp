#include <iostream>
using namespace std;

// Отрисовка ракеты //
void draw(int size);

// Проверка ответа //
bool answer_checker(char ch);

// Это проверка размера ракеты //
bool size_checker(int size);

int main()
{
    int rocket_size;
    char answer;

    do
    {
        cout << "\n____ROCKET BUILDING____" << endl;
        cout << "Enter rocket size (minimum size 3): "; cin >> rocket_size;

        if (size_checker(rocket_size))
        {
            draw(rocket_size);
            break;
        }
        else 
        {
            cout << "The rocket is too small. Wanna try again? (y/n):\n";cin >> answer;
        }

    }while(size_checker(rocket_size) && answer_checker(answer));

    return 0;
}

bool size_checker(int size)
{
    if (size < 3) return false;
    return true;
}

bool answer_checker(char ch)
{
     while (ch != 'n')
    {
        switch(ch)
        {
            case 'y':
                return true;
                break;
            case 'n':
                return false;
                break;
            default:
                cout << "Wrong answer!" << endl;
                return false;
                break;
        }
    }
}

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
