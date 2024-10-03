#include <iostream>
// Az első C++ program.
// Az #include kifejezéssel tudunk beimportálni külső függvényknyvtárakat.
// Az iostrem a ki- és bemenet kezeléséhez szükséges.
// I/O = Input/Output = Bemenet/Kimenet
// Stream = folyam
// A // jellel kezdődő sor nem lesz benne a programban. Ezt kommentnek hívjuk.
using namespace std;

// Ez a fő függvény. Innen indul a program futása.
// Int típusú visszatérési értéke van. Ha ez 0, azt jelenti, hogy hiba nélkül futott a program.
// A kapcsos zárójeleken belüli rész fog futni.
int main()
{
    // A cout a kimenetet kezelő objektum. (C nyelv, OUTput)
    // A << operátorral tudjuk megadni, hogy mit írjon ki.
    // Több szöveget, számot, stb... tudunk összekötni a << operátorral.
    // Az endl a sor végét jelenti.
    // Az utasítások végét a pontosvessző jelzi.
    // Próbáljuk meg pontosvessző nélkül fordítani a kódot!
    cout << "Hello World!" << endl;

    // Ez a fő (main) függvény visszatérési értéke.
    return 0;
} 
