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

int lista_trafien(int i, int j, int licznik, int komp[][2], int traf[][2], int ll) {
    for (int m = 0; m < licznik; m++)
        if ((komp[m][0] == i) && (komp[m][1] == j)) {
            cout << i << " " << j << endl;
            traf[ll][0] = i;
            traf[ll][1] = j;
            ll++;
            return ll;
        }
}

int main()
{
    srand(time(NULL));
    const int np = 7;
    int plansza1[np][np], plansza2[np][np], komp[25][2], temp[3][2] = { 0 }, traf[4][2] = { 0 };
    string plansza11[5][5];
    int x, y, z, s, zat = 0, zatk = 0, licznik = 0, kom, trafienie = 0;
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

    while ((zat < 4) && (zatk < 4)) {
        if (kol) {
            cout << "u: ";
            cin >> x >> y;
            s = strzal(x, y, plansza2, statki2);
            if (s == 0) {
                plansza11[x - 1][y - 1] = 'O';
                kol = false;
                cout << "pudlo\n";
            }
            else {
                plansza11[x - 1][y - 1] = 'X';
                if (s == 2) {
                    zat++;
                    cout << "zatopiony\n";
                }
                else cout << "trafiony\n";
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
            int xx, yy, t, licz = 0, ll;
            sortowanie_przez_wstawianie(traf, 4);
            /*cout << "wyswietlam tablice traf: " << endl;
            for (int i = 0; i < 4; i++) cout << traf[i][0] << " " << traf[i][1] << endl;*/
            if (traf[0][0] == 0) {
                kom = rand() % licznik;
                xx = komp[kom][0];
                yy = komp[kom][1];
                komp[kom][0] = 0;
                komp[kom][1] = 0;
            }
            else {
                /*cout << "KORZYSTAM Z TABLICY TRAF" << endl;*/
                xx = traf[0][0];
                yy = traf[0][1];
                for (int m = 0; m < licznik; m++)
                    if ((komp[m][0] == xx) && (komp[m][1] == yy)) {
                        komp[m][0] = 0;
                        komp[m][1] = 0;
                        break;
                    }
                traf[0][0] = 0;
                traf[0][1] = 0;
            }
            cout << yy << " " << xx;
            s = strzal(xx, yy, plansza1, statki1);
            if (s == 0) {
                cout << " pudlo\n";
                kol = true;
            }
            else if (s == 1) {
                cout << " trafiony\n";
                kol = false;
                for (int i = 0; i < 3; i++) {
                    if (temp[i][1] == 0) {
                        temp[i][0] = xx;
                        temp[i][1] = yy;
                        t = i;
                        trafienie++;
                        break;
                    }
                }
                if (trafienie == 1) {
                    /*cout << "trafienie 2" << endl;*/
                    ll = 0;
                    int x1, y1;
                    x1 = xx;
                    y1 = yy - 1;
                    ll = lista_trafien(x1, y1, licznik, komp, traf, ll);
                    x1 = xx - 1;
                    y1 = yy;
                    ll = lista_trafien(x1, y1, licznik, komp, traf, ll);
                    x1 = xx + 1;
                    y1 = yy;
                    ll = lista_trafien(x1, y1, licznik, komp, traf, ll);
                    x1 = xx;
                    y1 = yy + 1;
                    ll = lista_trafien(x1, y1, licznik, komp, traf, ll);
                }
                else {
                    for (int i = 0; i < 3; i++) {
                        traf[i][0] = 0;
                        traf[i][1] = 0;
                    }
                    if (temp[0][0] != temp[1][0]) {
                        if (temp[0][0] < temp[1][0]) {
                            for (int m = 0; m < licznik; m++)
                                if ((komp[m][0] == temp[0][0] - 1) && (komp[m][1] == temp[0][1])) {
                                    traf[0][0] = temp[0][0] - 1;
                                    traf[0][1] = temp[0][1];
                                }
                            for (int m = 0; m < licznik; m++)
                                if ((komp[m][0] == temp[1][0] + 1) && (komp[m][1] == temp[1][1])) {
                                    traf[1][0] = temp[1][0] + 1;
                                    traf[1][1] = temp[1][1];
                                }
                        }
                        else {
                            for (int m = 0; m < licznik; m++)
                                if ((komp[m][0] == temp[0][0] + 1) && (komp[m][1] == temp[0][1])) {
                                    traf[0][0] = temp[0][0] + 1;
                                    traf[0][1] = temp[0][1];
                                }
                            for (int m = 0; m < licznik; m++)
                                if ((komp[m][0] == temp[1][0] - 1) && (komp[m][1] == temp[1][1])) {
                                    traf[1][0] = temp[1][0] - 1;
                                    traf[1][1] = temp[1][1];
                                }
                        }
                    }
                    else {
                        if (temp[0][1] < temp[1][1]) {
                            for (int m = 0; m < licznik; m++)
                                if ((komp[m][0] == temp[0][0]) && (komp[m][1] == temp[0][1] - 1)) {
                                    traf[0][0] = temp[0][0];
                                    traf[0][1] = temp[0][1] - 1;
                                }
                            for (int m = 0; m < licznik; m++)
                                if ((komp[m][0] == temp[1][0]) && (komp[m][1] == temp[1][1] + 1)) {
                                    traf[1][0] = temp[1][0];
                                    traf[1][1] = temp[1][1] + 1;
                                }
                        }
                        else {
                            for (int m = 0; m < licznik; m++)
                                if ((komp[m][0] == temp[0][0]) && (komp[m][1] == temp[0][1] + 1)) {
                                    traf[0][0] = temp[0][0];
                                    traf[0][1] = temp[0][1] + 1;
                                }
                            for (int m = 0; m < licznik; m++)
                                if ((komp[m][0] == temp[1][0]) && (komp[m][1] == temp[1][1] - 1)) {
                                    traf[1][0] = temp[1][0];
                                    traf[1][1] = temp[1][1] - 1;
                                }
                        }
                    }
                }
            }
            else if (s == 2) {
                cout << " zatopiony\n";
                kol = false;
                zatk++;
                licz = 0;
                for (int i = 0; i < 3; i++) {
                    if (temp[i][1] == 0) {
                        temp[i][0] = xx;
                        temp[i][1] = yy;
                        t = i;
                        break;
                    }
                }
                for (int i = 0; i <= t; i++) {
                    xx = temp[i][0];
                    yy = temp[i][1];
                    for (int k = xx - 1; k <= xx + 1; k++)
                        for (int l = yy - 1; l <= yy + 1; l++)
                            for (int m = 0; m < licznik; m++)
                                if ((komp[m][0] == k) && (komp[m][1] == l)) {
                                    komp[m][0] = 0;
                                    komp[m][1] = 0;
                                    licz++;
                                    break;
                                }
                }
                for (int i = 0; i < 3; i++) {
                    temp[i][0] = 0;
                    temp[i][1] = 0;
                }
                for (int i = 0; i < 4; i++) {
                    traf[i][0] = 0;
                    traf[i][1] = 0;
                }
            }
            sortowanie_przez_wstawianie(komp, licznik);
            cout << "--------------------" << licz;
            if (licz != 0) {
                licznik -= licz + 1;
                licz = 0;
            }
            else licznik--;
            cout << " -> " << licznik << endl;
            for (int i = 0; i < 25; i++) cout << komp[i][0] << " " << komp[i][1] << endl;
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

