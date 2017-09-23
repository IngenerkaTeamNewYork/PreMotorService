#include <iostream>
#include "TXLib.h"

using namespace std;

int main()
    {
    txCreateWindow (1200, 700);

        int Q;
        cout << "1-McLaren P1   2-Ferrari Enzo  3-Газель Next" << endl;
        cin >> Q ;

        if (Q == 1)
            {
            HDC fon1 = txLoadImage ("M.bmp");
            txBitBlt (txDC(), 0, 0, 1200, 700, fon1, 0, 0);
            }
        else if (Q == 2)
            {
            HDC fon2 = txLoadImage ("F.bmp");
            txBitBlt (txDC(), 0, 0, 1200, 700, fon2, 0, 0);
            }
        else if (Q == 3)
            {
            HDC fon3 = txLoadImage ("g.bmp");
            txBitBlt (txDC(), 0, 0, 1200, 700, fon3, 0, 0);
            }


    HDC sp = txLoadImage ("sp.bmp");
    txBitBlt (txDC(), 200, 0, 200, 200, sp, 0, 0);




    return 0;
    }
