#include <iostream>
#include <string>
using namespace std;
class Wyjatki {
public:
	static bool wejscieFormat(string sDana) {
		for (int i = 0; i < sDana.length(); i++) {
			if (isdigit(sDana[i]) == false)
				return false;
		}
		return true;
	}

	static bool wejscieZakres(int iDana) {
		if ((iDana >= 1) && (iDana <= 6)) return true;
		else return false;
	}
};


int main()
{
	string sOcena = "10";
	try {
		if (!Wyjatki::wejscieFormat(sOcena) == false)
			throw sOcena;
		int ocena = stoi(sOcena);
		if (!Wyjatki::wejscieZakres(ocena) == false)
			throw ocena;
		switch (ocena) {
		case 1:
			cout << "uczen nie otrzymuje promocji do nastepnej klasy";
			break;
		case 2:
			cout << "uczen nie otrzymuje promocji do nastepnej klasy";
			break;
		case 3:
			cout << "uczen nie otrzymuje promocji do nastepnej klasy";
			break;
		case 4:
			cout << "uczen nie otrzymuje promocji do nastepnej klasy";
			break;
		case 5:
			cout << "uczen nie otrzymuje promocji do nastepnej klasy";
			break;
		}
	}
	catch (string sOcena) {
		cout << "format nie odpowiada liczbie calkowitej!";
	}
	catch (int ocena) {
		cout << "liczba nie miesci sie w zakresie !";
	}
}