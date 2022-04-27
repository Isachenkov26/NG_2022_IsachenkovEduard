#include <iostream>
#include <random>
#include <time.h>
#include <string>

using namespace std;

int main()
{
    srand(time(0));

    const int worldSizeY = 20;
    const int worldSizeX = 70;

    string dialog1 = "Good morning, sir. Be careful, because in our world there are evil \"KATSAPY\", they harm you. Don't approach them. How old are you?";
    string dialog2 = "Great, my name is Jonas Freud, I'm a farmer, how many days will you spend in this world?";
    string dialog3 = "Great, I hope you enjoy our beautiful and magical world!";
    int answer = 0, years = 0;

    char action = -1;

    char map[worldSizeY][worldSizeX];
    char pMap[worldSizeY][worldSizeX];

    int playerPosX = worldSizeX/2;
    int playerPosY = worldSizeY/2;

    int ladder = 0, heart = 100;

    for(int y = 0; y < worldSizeY; y++)
    {
        for(int x = 0; x < worldSizeX; x++)
        {
            switch(rand()%15)
            {
                case 1: map[y][x] = 't'; break;
                case 2: map[y][x] = 's'; break;
                default: map[y][x] = '.';
            }
            switch(rand()%100){
                case 1: map[y][x] = 'H'; break;  //Added new object. 'H' - it's ladder. Features climb over wood and stone
                case 2: map[y][x] = '?'; break; //Added new object. '?' - it's enemy. Features atack
                case 3: map[y][x] = '#'; break; //Added new object. '#' - it's person. He talks with general person
            }
            if (x == 0 || y == 0  || x == worldSizeX - 1 || y == worldSizeY - 1)
                map[y][x] = 'm'; // Added new object. 'm' - it's sea

            pMap[y][x] = '*';
        }
    }

    while(true)
    {
        system("cls");
        for(int y = 0; y < worldSizeY; y++)
        {
            for(int x = 0; x < worldSizeX; x++)
            {
                if(y == playerPosY && x == playerPosX)
                    cout << "$";
                else
                    cout << pMap[y][x];
            }
            cout << endl;
        }
        cout << "+---------Inventory----------+" << endl
                 << "| You have ladder(H): " << ladder  << endl
                 <<"+----------------------------+" << endl;
        cout <<"+----------------+" << endl
                 << "| Heart: - " << heart  << endl
                 <<"+----------------+" << endl;
        cout << ">";
        cin >> action;

        // Changed SWITCH to normal IF
        if(action == 'w'){
            if(map[playerPosY-1][playerPosX] == '.' || ladder > 0){
                if(map[playerPosY-1][playerPosX] != 'm')
                    playerPosY--;
                if(map[playerPosY-1][playerPosX] == '?')
                    heart -= 10;
            }
        }

        if(action == 's'){
            if(map[playerPosY+1][playerPosX] == '.' || ladder > 0){
                if(map[playerPosY+1][playerPosX] != 'm')
                    playerPosY++;
                if(map[playerPosY+1][playerPosX] == '?')
                    heart -= 10;
            }
        }

        if(action == 'a'){
            if(map[playerPosY][playerPosX-1] == '.' || ladder > 0) {
                if(map[playerPosY][playerPosX-1] != 'm')
                    playerPosX--;
                if(map[playerPosY][playerPosX-1] == '?')
                    heart -= 10;
            }
        }

        if(action == 'd'){
            if(map[playerPosY][playerPosX+1] == '.' || ladder > 0){
                if(map[playerPosY][playerPosX+1] != 'm')
                    playerPosX++;
                if(map[playerPosY][playerPosX+1] == '?')
                    heart -= 10;
            }
        }

        if(action == 'e'){
            if(map[playerPosY][playerPosX+1] == 'H' || map[playerPosY][playerPosX-1] ==  'H' ||
               map[playerPosY+1][playerPosX] == 'H' || map[playerPosY-1][playerPosX] ==  'H') {
                ladder++;
            }
        }

        if(action == 'q'){
            if(map[playerPosY-1][playerPosX] == '#' || map[playerPosY+1][playerPosX] == '#' ||
                map[playerPosY][playerPosX-1] == '#' || map[playerPosY][playerPosX+1] == '#'){
                cout << dialog1 << endl;
                cin >> years;
                cout << dialog2 << endl;
                cin >> answer;
                cout << dialog3 << endl;
                system("pause");
            }
        }

        pMap[playerPosY-1][playerPosX] = map[playerPosY-1][playerPosX];
        pMap[playerPosY+1][playerPosX] = map[playerPosY+1][playerPosX];
        pMap[playerPosY][playerPosX-1] = map[playerPosY][playerPosX-1];
        pMap[playerPosY][playerPosX+1] = map[playerPosY][playerPosX+1];
        pMap[playerPosY-1][playerPosX-1] = map[playerPosY-1][playerPosX-1];
        pMap[playerPosY-1][playerPosX+1] = map[playerPosY-1][playerPosX+1];
        pMap[playerPosY+1][playerPosX-1] = map[playerPosY+1][playerPosX-1];
        pMap[playerPosY+1][playerPosX+1] = map[playerPosY+1][playerPosX+1];

        //GAME OVER!
        if(heart < 0){
            break;
        }
    }
    return 0;
}
