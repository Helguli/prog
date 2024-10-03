#include <iostream>

using namespace std;

int main()
{
    // A kimenetet már tudjuk, hogy hogyan működik.
    // << jellel tudunk összefűzni számokat, szövegeket, változók értékeit.
    int a = 0;
    cout << "Az a változó értéke: " << a << endl << "Ez új sorba kerül. " << 32 << " " << 64 << endl;
    // Üres sort is tudunk írni.
    cout << endl;
    // A bemenet ehhez hasonlóan használható.
    // Itt a felhasználótól várunk egy számot, és azt eltároljuk az a változóban.
    cin >> a;
    // Mivel ilyenkor nem látja a felhasználó, hogy a program rá vár, célszerű előtte üzenni a felhasználónak.
    cout << "Irj be egy szamot!" << endl;
    cin >> a;

    // Kiírajtuk a számot, amit írt a felhasználó.
    cout << "A szám, amit írtál: " << a << endl;

    // Az alábbi kódban bekérünk két számot, és kiírjuk a szorzatukat.
    // Ugyanúgy lehet lebegőpontos számot is bekérni, mint egészet.
    // Először deklaráljuk (létrehozzuk) a változókat.
    float f;
    float e;
    // Írunk üzenetet a felhasználónak.
    cout << "Irj be 2 szamot!" << endl;
    // Bekérjük a számokat.
    cin >> e;
    cin >> f;
    // Létrehozunk a szorzatnak egy változót.
    float d;
    // Elvégezzük a műveletet.
    d = e * f;
    // Végül kiarjuk az eredményt.
    cout << "A szamok szorzata: " << d << endl;

    // Kérdés: Lehetne-e ezt kevesebb sor kóddal megcsinálni?
    // Igen!
    float g, h;
    cout << "Irj be 2 szamot!" << endl;
    cin >> g >> h;
    cout << "A szamok szorzata: " << g * h << endl;

    // A cout-hoz hasonlóan a cin-nek is meg tudunk adni több változót.
    // És a kiíratás közben is tudunk végezni műveletet.




    // Feladatok:
    // Kérj be két számot a felhasználótól, és írd ki azok összegét a konzolra!
    // Kérj be egy számot a felhasználótól, és írd ki a szám kétszeresét!
    // Kérj be két számot a felhasználótól, és írd ki a hányadosukat!

    return 0;
}
