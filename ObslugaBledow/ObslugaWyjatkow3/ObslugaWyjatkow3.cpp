#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

struct Wyjatek{
    virtual string komuinikat() = 0;
};

class Format : public Wyjatek {
	string sOcena;
public:
	Format(string sOcena) : sOcena(sOcena) {};
	string komuniakt() {
		stringstream sTemp;
		sTemp << "Format danej wejściowej " << sOcena << " nie odpowiada liczbie całkowitej" << endl;
		return sTemp.str();
	}
};

class Zakres : public Wyjatek {
	int ocena;
public:
	Zakres(int ocena) : ocena(ocena) {};
	string komunikat() {
		stringstream sTemp;
		sTemp << "Wartość danej wejściowej " << ocena << " nie mieści się w zakresie <1; 6>" << endl;
		return sTemp.str();
	}
};

bool wejscieFormat(string sDana) {
	for (int i = 0; i < sDana.length(); i++) {
		if (isdigit(sDana[i]) == false)
			return false;
	}
	return true;
}

bool wejscieZakres(int iDana) {
	if ((iDana > 0) && (iDana < 7)) return true;
	else return false;
}

int main()
{
	try {
		string sOcena;
		cin >> sOcena;

		if (wejscieFormat(sOcena) == false)
			throw Format(sOcena);

		int ocena = stoi(sOcena);
		if (wejscieZakres(ocena) == false)
			throw Zakres(sOcena);
		
		cout << ocena;
	}
	catch (Wyjatek& wyjatek) {
		cout << wyjatek.komuinikat();
	}
}