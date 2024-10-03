#include <iostream>

using namespace std;

/*
Többsoros komment
Ezek a sorok nem lesznek benne a programban 
*/

int main()
{
    // Itt deklarálunk (létrehozunk) egy változót. Ehhez meg kell adni a típusát és a nevét (amiben lehet szám, betű, alsóvonás, és nem kezdődhet számmal).
    // A leggyakrabban használt típus az int (integer, egész szám).
    int val;
    int val2 = 0; // Itt inicializáljuk is (adunk egy kezdőértéket).
    cout << "Ha nem adunk értéket egy változónak, akkor memóriaszemét lesz benne. Ez minden futáskor más lesz. " << val << endl;
    // Most értéket adtunk a val nevű változónak. Már létre lett hozva, nem kell elé kitenni a típust.
    val = 7;
    cout << "Ha adunk értéket egy változónak, utána azt fogja tárolni. " << val << endl;

    // Most létrehozunk néhány változót.
    int x1, x2, x3;
    // Ezek más változók, mert nagy betűvel vannak.
    int X1, X2, X3;

    // A változónévben lehet _ karakter.
    int nagyon_hosszu_nevu_valtozo;
    // Az elején is.
    int _val;
    // De szám nem lehet az elején.
    // Próbáld ki, mi történik, ha az alábbi kódot kiveszed a kommentből!
    // int 12val;

    // A szóköz és enter elhagyható utasítások között, illetve operátorok (műveleti jelek) mellett.
    x1=23;x3=15;

    // Az egész szám mellett van lebegőpontos szám, amiben törteket, illetve nagy számokat lehet tárolni.
    // A double kétszer annyi számjegyig pontos, mint a float.
    float a = 0.123456789;
    cout << "Ez egy lebegőpontos szám (float): " << a << endl;
    double b = 0.123456789;
    cout << "Ez egy lebegőpontos szám (double): " << b << endl;

    //Karakter típusú változót is létre tudunk hozni.
    //Megadhatjuk magát a karaktert '' jelek között.
    //Vagy megadhatjuk számként a karakter kódját is (ASCII tábla).
    char d = 'a';
    char e = 44;
    // Ez ugyanaz, mintha ezt írtuk volna:
    //char e = ',';
    cout << "Itt egy karakter: " << d << endl;
    cout << "Itt egy másik karakter: " << e << endl;


    return 0;
}

