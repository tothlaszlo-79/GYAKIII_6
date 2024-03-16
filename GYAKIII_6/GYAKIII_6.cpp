#include <iostream>
using namespace std;
void beker(int* t, int db);
float kiir(int* t, int db);
void rendez(int* t, int db);

int main()
{
    int* tomb, lsz, atlag;
    do {
        cout << "Adja meg a hallgatok szamat: ";
        cin >> lsz;
        if (lsz < 0 || lsz >15) cout << "Nem megfelelo letszam!" << endl;

    } while (lsz < 0 || lsz >15);
    tomb = new int[lsz];
    beker(tomb, lsz);
    system("cls");

    cout << "\nMagassagok: " << endl;
    cout << "\n Az osztaly atlagmagassaga: " << kiir(tomb, lsz) << endl;
    cout << "\n Rendezett magassagok: " << endl;
    rendez(tomb, lsz);
    kiir(tomb, lsz);
    cout << endl;
    delete[] tomb;
    return 0;
}

void beker (int *t, int db )
{
    for (int i = 0; i < db; i++)
    {
        cout << "Adja meg az " << i + 1 << ".hallgato magassagat : " << endl;
        cin >> t[i];
    }
}

float kiir(int* t, int db)
{
	float ossz = 0;
    for (int i = 0; i < db; i++)
    {
		cout << t[i] << " ";
        ossz += t[i];
	}
	cout << endl;
	return ossz / db;
}

void rendez(int* t, int db)
{
    for (int i = 0; i < db - 1; i++) //egystereu kivalasztasos rendezes
    {
        for (int j = i + 1; j < db; j++)
        {
            if (t[i] > t[j])
            {
				int seged = t[i];
				t[i] = t[j];
				t[j] = seged;
			}
		}
	}
}
