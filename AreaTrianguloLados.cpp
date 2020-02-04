
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    float A, B, C, S, At;
    cout << "Ingrese longiutd de lado A: " << endl;
    cin >> A;
    cout << "Ingrese longiutd de lado B: " << endl;
    cin >> B;
    cout << "Ingrese longiutd de lado C: " << endl;
    cin >> C;
    
    S = S = (A + B + C) * 1 / 2;
    At = sqrt( S * (S - A) * (S - B) * (S - C) ); 
    
    cout << "\n El area del triangulo es: " << At << endl;
    
    system("pause");

    return 0;
}
