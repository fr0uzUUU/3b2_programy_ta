#include <iostream>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
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
    int id, z;
    if ((plansza[x][y] > 0) && (plansza[x][y] < 4)) {
        if (plansza[x][y] == 1) { //zatopiony
            plansza[x][y] = 0;
            z = 2;
        }
        else {
            plansza[x][y] = 0;
            for (int i = 1; i < statki[2].size(); i++)
                if ((statki[0][i] == x) && (statki[1][i] == y)) {
                    id = statki[2][i];
                    statki[2][i] = 0;
                }
            for (int i = 1; i < statki[2].size(); i++)
                if (statki[2][i] == id) plansza[statki[0][i]][statki[1][i]]--;
            z = 1;
        }
    }
    else z = 0;
    return z;
}

void sortowanie_przez_wstawianie(int tab[][2], int n) {
    int j = 1, k;
    while (j <= n) {
        for (k = j; k > 0; k--)
            if (tab[k][0] > tab[k - 1][0]) {
                swap(tab[k][0], tab[k - 1][0]);
                swap(tab[k][1], tab[k - 1][1]);
            }
            else break;
        j++;
    }
}

int main()
{
    srand(time(NULL));
    const int np = 7;
    int plansza1[np][np], plansza2[np][np], komp[25][2];
    string plansza11[5][5];
    int x, y, z, s, zat = 0, zatk = 0, licznik = 0, kom;
    vector <int> statki1[3], statki2[3];
    bool ok, kol = true;

    for (int i = 0; i < np; i++)
        for (int j = 0; j < np; j++) {
            plansza1[i][j] = 0;
            plansza2[i][j] = 0;
        }
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            plansza11[i][j] = '.';
            komp[licznik][0] = i + 1;
            komp[licznik][1] = j + 1;
            licznik++;
        }
    for (int i = 0; i < 3; i++) {
        statki1[i].push_back(0);
        statki2[i].push_back(0);
    }

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

    for (int m = 3; m >= 0; m--) {
        int b;
        if (m == 0) b = 1;
        else b = m;
        ok = false;
        while (ok == false) {
            x = rand() % 5 + 1;
            y = rand() % 5 + 1;
            z = rand() % 2;
            ok = sprawdz(x, y, z, plansza2, b);
            /*cout << x << " " << y << " " << z << " " << b << endl;*/
        }
        wstaw(x, y, z, plansza2, statki2, b);
    }

    while ((zat < 4) || (zatk < 4)) {
        if (kol) {
            cout << "u: ";
            cin >> x >> y;
            s = strzal(x, y, plansza2, statki2);
            if (s == 0) {
                plansza11[x - 1][y - 1] = 'O';
                kol = false;
            }
            else {
                plansza11[x - 1][y - 1] = 'X';
                if (s == 2) zat++;
                kol = true;
            }
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 5; j++)
                    cout << plansza11[j][i] << " ";
                cout << endl;
            }
            cout << "-------------------------------------------------------------------------\n";
        }
        else {
            kom = rand() % licznik;
            int xx, yy;
            xx = komp[kom][0];
            yy = komp[kom][1];
            cout << xx << " " << yy;
            s = strzal(xx, yy, plansza1, statki1);
            if (s == 0) {
                cout << " pudlo\n";
                kol = true;
            }
            else if (s == 1) {
                cout << " trafiony\n";
                kol = false;
            }
            else if (s == 2) {
                cout << " zatopiony\n";
                kol = false;
                zatk++;
            }
            komp[kom][0] = 0;
            komp[kom][1] = 0;
            sortowanie_przez_wstawianie(komp, licznik);
            licznik--;
        }
    }
    if (zat == 4) cout << "wygral uzytkownik";
    else cout << "wygral komputer";

    /*for (int i = 0; i < np; i++) {
        for (int j = 0; j < np; j++)
            cout << plansza2[j][i] << " ";
        cout << "\n";
    }

    for (int i = 0; i < statki2->size(); i++)
        cout << statki2[0][i] << " " << statki2[1][i] << " " << statki2[2][i] << endl;*/

}

