#include <iostream>
#include "TXLib.h"

using namespace std;

int main()
    {
    txCreateWindow (1200, 700);

    char* Q;
    cout << "McLaren P1   Ferrari Enzo  Gazel Next" << endl;
    cin >> Q ;

    if (Q == "McLaren P1")
        {
        HDC fon1 = txLoadImage ("M.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon1, 0, 0);
        }
    else if (Q == "Ferrari Enzo")
        {
        HDC fon2 = txLoadImage ("F.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon2, 0, 0);
        }
    else if (Q == "Gazel Next")
        {
        HDC fon3 = txLoadImage ("g.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon3, 0, 0);
        }

    char* Q;
    cout << "Blue  Red  White" << endl;
    cin >> Q ;

    if (Q == "Blue")
        {
        HDC fon1 = txLoadImage ("M.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon1, 0, 0);
        }
    else if (Q == "Red")
        {
        HDC fon2 = txLoadImage ("F.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon2, 0, 0);
        }
    else if (Q == "White")
        {
        HDC fon3 = txLoadImage ("g.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon3, 0, 0);
        }


    char* Q;
    cout << "Spoiler Little  Big  None" << endl;
    cin >> Q ;

    if (Q == "Little")
        {
        HDC fon1 = txLoadImage ("M.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon1, 0, 0);
        }
    else if (Q == "Big")
        {
        HDC fon2 = txLoadImage ("F.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon2, 0, 0);
        }
    else if (Q == "None")
        {
        HDC fon3 = txLoadImage ("g.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon3, 0, 0);
        }


    HDC sp = txLoadImage ("sp.bmp");
    txBitBlt (txDC(), 200, 0, 200, 200, sp, 0, 0);

    return 0;
    }
