#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

struct Wyjatek {
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
		sTemp << "Wartość danej wejściowej " << ocena << " nie mieści się w zakresie <1; 100>" << endl;
		return sTemp.str();
	}
};

bool wejscieFormat(string sDana) {
	for (int i = 0; i < sDana.length(); i++) {
		if (isdigit(sDana[i]) == false)
			if(sDana[i] != char(44))
				return false;
	}
	return true;
}

bool wejscieZakres(float iDana) {
	if ((iDana >= 1) && (iDana <= 100)) return true;
	else return false;
}

int main()
{
	try {
		string a, b;
		int i;
		stringstream aa, bb;
		cin >> a >> b;
		float A, B;
		if (wejscieFormat(a) == false)
			throw Format(a);
		if (wejscieFormat(b) == false)
			throw Format(b);

		for (i = 0; i < a.length(); i++)
			if (a[i] != char(44))
				aa << a[i];
			else aa << ".";

		for (i = 0; i < b.length(); i++)
			if (b[i] == char(44))
				bb << b[i];
			else bb << ".";
		A = stof(aa.str());
		B = stof(bb.str());

		if (wejscieZakres(A) == false)
			throw Zakres(A);
		if (wejscieZakres(B) == false)
			throw Zakres(B);

		cout << A * B;
	}
	catch (Wyjatek& wyjatek) {
		cout << wyjatek.komuinikat();
	}
}