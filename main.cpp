#include <iostream>
#include "TXLib.h"

using namespace std;

int main()
    {
    txCreateWindow (1200, 700);

    int Q;
    cout << "1-McLaren P1   2-Ferrari Enzo  3-Gazel Next" << endl;
    cin >> Q ;

    switch (Q) {
    case 1:
        HDC fon1 = txLoadImage ("M.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon1, 0, 0);
        break;
    case 2:
        HDC fon2 = txLoadImage ("F.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon2, 0, 0);
        break;
    case 3:
        HDC fon3 = txLoadImage ("g.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon3, 0, 0);
        break;
    default:
        exit(1);
    }
    

    int C;
    cout << "1-Blue   2-Red  3-White" << endl;
    cin >> C;

    switch (C) {
    case 1:
        HDC fon1 = txLoadImage ("M.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon1, 0, 0);
        break;
    case 2:
        HDC fon2 = txLoadImage ("F.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon2, 0, 0);
        break;
    case 3:
        HDC fon3 = txLoadImage ("g.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon3, 0, 0);
        break;
    default:
        exit(1);
    }

    int S;
    cout << "1-Little   2-Big  3-None" << endl;
    cin >> S;

    switch (S) {
    case 1:
        HDC fon1 = txLoadImage ("M.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon1, 0, 0);
        break;
    case 2:
        HDC fon2 = txLoadImage ("F.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon2, 0, 0);
        break;
    case 3:
        HDC fon3 = txLoadImage ("g.bmp");
        txBitBlt (txDC(), 0, 0, 1200, 700, fon3, 0, 0);
        break;
    default:
        exit(1);
    }
    HDC sp = txLoadImage ("sp.bmp");
    txBitBlt (txDC(), 200, 0, 200, 200, sp, 0, 0);

    return 0;
}
