#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    float A, B, C, a, b, c, S, At, Op;
    
        cout << "Seleccione la opcion segun los datos conocidos del Triangulo : \n1 = Se conocen lados A y C. Y se conoce angulo b. \n2 = Se conocen lados A y B. Y se conoce angulo c. \n3 = Se conocen lados B y C. Y se conoce angulo a."<< endl;
        cin >> Op;
        
        if(Op == 1)
        {
            cout << "Ingrese longiutd de lado A: " << endl;
            cin >> A;
            cout << "Ingrese longiutd de lado C: " << endl;
            cin >> C;
            cout << "Ingrese longiutd de angulo b: " << endl;
            cin >> b;
            
            At = A * C * sin(b) * .5;
            
            cout << "\n El area del triangulo es: " << At << endl;
        }
        
        if (Op == 2)
        {
            cout << "Ingrese longiutd de lado A: " << endl;
            cin >> A;
            cout << "Ingrese longiutd de lado B: " << endl;
            cin >> B;
            cout << "Ingrese longiutd de angulo c: " << endl;
            cin >> c;
            
            At = A * B * sin(c) * .5;
            
            cout << "\n El area del triangulo es: " << At << endl;
        }
        
        if (Op == 3)
        {
            cout << "Ingrese longiutd de lado B: " << endl;
            cin >> B;
            cout << "Ingrese longiutd de lado C: " << endl;
            cin >> C;
            cout << "Ingrese longiutd de angulo a: " << endl;
            cin >> a;
            
            At = B * C * sin(a) * .5;
            
            cout << "\n El area del triangulo es: " << At << endl;
        }
    
    system("pause");

    return 0;
}