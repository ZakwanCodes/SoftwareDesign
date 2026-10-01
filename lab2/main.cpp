#include <iostream>
#include <float.h>

using namespace std;

void TurnOnFloatingExceptions()
{
    unsigned int cw;

    cw = _control87(0, 0) & MCW_EM;
    cw &= ~(_EM_INVALID | _EM_ZERODIVIDE | _EM_OVERFLOW);
    _control87(cw, MCW_EM);
}

int main()
{
    TurnOnFloatingExceptions();

    float num = 2.5F;

    cout << num / 0.0F << endl;

    float numerator = 0.0F;
    float denominator = 0.0F;

    cout << numerator / denominator << endl;

    return 0;
}