#include <iostream>
using namespace std;

void draw(int size)
{
    int sizeFuel = size * 1.4;

    cout << "    _/\\_     " << endl;
    cout << "   /    \\    " << endl;
    cout << "  |_|__|_|   " << endl;
    cout << "  | |  | |   " << endl;
    cout << "   \\____/   " << endl;
    cout << "   /    \\    " << endl;
    cout << "  |------|   " << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "  |-    -| " << endl;
        if (i % 3 == 0)
        {
            cout << "  |\\____/| " << endl;
            cout << "  |_|__|_| " << endl;
            cout << "  |/    \\|" << endl;
        }
    }

    cout << "  /__/\\__\\  " << endl;
    cout << " /__/__\\__\\ " << endl;
    cout << "/__|    |__\\" << endl;


    for (int i = 0; i < sizeFuel; i++) cout << "|  | -- |  |" << endl;
    cout << "\\_/ \\__/ \\_/" << endl;
}

int main()
{
    int rocket_size = 5;
    bool sizeChecker = false;
    char guess;

    do
    {
        cout << "____ROCKET BUILDING____" << endl;
        cout << "Enter rocket size, minimum size 5: "; cin >> rocket_size;

        if (rocket_size > 5)
        {
            draw(rocket_size);
            sizeChecker = true;
            break;
        }else{
            cout << "Slishkom malenkaya raketa. Wanna try again? (y/n):\n";cin >> guess;
            sizeChecker = false;
        }

    }while(!sizeChecker && guess != 'n');

    return 0;
}
