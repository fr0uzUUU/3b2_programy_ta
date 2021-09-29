#include <iostream>
#include <vector>
using namespace std;

bool sprawdz(int x, int y, int z, int plansza[7][7], int a) {
    bool ok = true;
    if (z == 1) { //poziomo
        if (x > 6 - a) ok = false;
        else {
            for (int i = x; i < x + a; i++)
                if (plansza[i][y] != 0) ok = false;
        }
    }
    else if (z == 0) {
        if (y > 6 - a) ok = false;
        else {
            for (int i = y; i < y + a; i++)
                if (plansza[x][i] != 0) ok = false;
        }
    }
    return ok;
}

void wstaw(int x, int y, int z, int plansza[7][7], vector <int> statki[3], int a) {
    int id;
    id = statki[2][statki->size() - 1];
    id++;
    if (z == 1) { //poziomo
        for (int i = x; i < x + a; i++) {
            for (int k = i - 1; k <= i + 1; k++)
                for (int l = y - 1; l <= y + 1; l++) {
                    plansza[k][l] = 9;
                }
        }
        for (int i = x; i < x + a; i++) {
            statki[0].push_back(i); //x
            statki[1].push_back(y); //y
            statki[2].push_back(id); //lp
            plansza[i][y] = a;
        }
    }
    else { //pionowo
        for (int i = y; i < y + a; i++) {
            for (int k = i - 1; k <= i + 1; k++)
                for (int l = x - 1; l <= x + 1; l++) {
                    plansza[l][k] = 9;
                }
        }
        for (int i = y; i < y + a; i++) {
            statki[0].push_back(x);
            statki[1].push_back(i);
            statki[2].push_back(id);
            plansza[x][i] = a;
        }
    }
}

int strzal(int x, int y, int plansza[7][7], vector <int> statki[3]) {
    int id;
    int z;
    if ((plansza[x][y] > 0) && (plansza[x][y]))
    {
        if (plansza[x][y] == 1) // zatopiony
        {
            plansza[x][y] = 0;
            z = 2;
        }
        else
        {
            plansza[x][y] = 0;
            for (int i = 1; i < statki[2].size(); i++)
            {
                if ((statki[0][i] == x) && (statki[1][i] == y))
                {
                    id = statki[2][i];
                    statki[2][i] = 0;  
                }
            }
            for (int i = 1; i < statki[2].size(); i++)
            {
                if (statki[2][i] == id)
                {
                    plansza[statki[0][i]][statki[1][i]]--;
                }
            }
            z = 1;
        }
    }
    else
    {
        z = 0;
    }
    return z;
}

int main()
{
    const int np = 7;
    int plansza1[np][np];
    string plansza11[5][5];
    int x, y, z, s, zat = 0;
    vector <int> statki1[3];
    bool ok;

    for (int i = 0; i < np; i++)
        for (int j = 0; j < np; j++)
            plansza1[i][j] = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            plansza11[i][j] = '.';
        }
    }
    for (int i = 0; i < 3; i++) statki1[i].push_back(0);

    for (int m = 3; m >= 0; m--) {
        int b;
        if (m == 0) b = 1;
        else b = m;
        ok = false;
        while (ok == false) {
            cout << "podaj wspolrzedne " << b << " - masztowca: ";
            cin >> x >> y >> z;
            ok = sprawdz(x, y, z, plansza1, b);
        }
        wstaw(x, y, z, plansza1, statki1, b);
    }
    while (zat < 4)
    {
        cout << "u: ";
        cin >> x >> y;
        s = strzal(x, y, plansza1, statki1);
        if (s == 0)
        {
            plansza11[x - 1][y - 1] = 'O';
        }
        else
        {
            plansza11[x - 1][y - 1] = 'X';
            if (s == 2)
            {
                zat++;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cout << plansza11[j][i] << " ";
            }
            cout << endl;
        }
        cout << "--------------------------------------------------\n";
    }

    //for (int i = 0; i < np; i++) {
    //    for (int j = 0; j < np; j++)
    //        cout << plansza1[j][i] << " ";
    //    cout << "\n";
    //}
    //
    ///*cout << statki1->size();*/
    //for (int i = 0; i < statki1->size(); i++)
    //    cout << statki1[0][i] << " " << statki1[1][i] << " " << statki1[2][i] << endl;
}

