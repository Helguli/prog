#include <iostream>

using namespace std;

int main()
{
    // A változók célja, hogy műveleteket végezzünk velük.

    // Most létrehozunk néhány változót.
    int x1, x2, x3;

    // Elvégzünk néhány műveletet.
    x1 = 4;
    x2 = 5;
    x3 = x1 + x2 * 2;
    cout << "14 lesz az eredmény, mert itt is ugyanúgy érvényes a műveletek sorrendje. Ez az eredmény: " << x3 << endl;
    x3 = 12 / x2;
    cout << "2 lesz az eredménye ennek az osztásnak, mert most egész számokkal dolgozunk, és le lesz kerekítve a legközelebbi egészre." << x3 << endl;



    cout << "a = 9, b = 2" << endl;
    int a = 9;
    int b = 2;
    int c = a + b;
    cout << "A es b osszege: " << c << endl;
    c = a - b;
    cout << "A es b kulonbsege: " << c << endl;
    c = a * b;
    cout << "A es b szorzata: " << c << endl;
    c = a / b;
    cout << "A es b hanyadosa: " << c << endl;
    //Ha az elején megváltoztatjuk float-ra a típust, akkor tört számot kapunk osztáskor.

    // A % jel olyan műveletet jelöl, ami az osztási maradékot adja meg.
    // Páldául: Ha 9-et osztjuk 2-vel, mennyi lesz a maradék?
    c = a % b;
    cout << "A osztva b-vel maradéka: " << c << endl;

    // Találjuk ki, hogyan változik i értéke
    int i = 0;
    i = i + 1;
    i = i * 4;
    i = i * i;
    i = i / 2;
    i = i - 8;

    // Az alábbi két utasítás eggyel növeli az i változó értékét.
    // Viszont van egy fontos külnbség.
    // Ha előre írjuk a ++ operátort, akkor legelőször a növelés műveletet végzi el a program.
    // A másik esetben azt végzi el utoljára.
    ++i;
    i++;

    int j;
    i = 2;
    j = ++i; // Elobb noveli
    // j erteke 3 lesz
    cout << "j erteke eloszor: " << j << endl;
    j = i++; // Kesobb noveli
    // j értéke 3 marad
    cout << "j erteke masodszor: " << j << endl;
    //Ugyanígy tudjuk eggyel csökkenteni is a változó értékét.
    i--;
    --i;

    return 0;
}

