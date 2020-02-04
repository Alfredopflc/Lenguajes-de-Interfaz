#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    float A, B, C, a, b, c, S, At, Op, Op2;
    
    cout << "Seleccione la opcion segun los datos conocidos del Triangulo : \n1 = 3 lados \n2 = 2 lados y un angulo \n3 = 1 lado y 2 angulos" << endl;
    cin >> Op;
    
    if (Op == 1)
    { 
        cout << "Ingrese longiutd de lado A: " << endl;
        cin >> A;
        cout << "Ingrese longiutd de lado B: " << endl;
        cin >> B;
        cout << "Ingrese longiutd de lado C: " << endl;
        cin >> C;
    
        S = (A + B + C) * 1 / 2;
        At = sqrt( S * (S - A) * (S - B) * (S - C) ); 
    
        cout << "\n El area del triangulo es: " << At << endl;
    }
    
    if (Op == 2)
    {
        cout << "Seleccione la opcion segun los datos conocidos del Triangulo : \n1 = Se conocen lados A y C. Y se conoce angulo b. \n2 = Se conocen lados A y B. Y se conoce angulo c. \n3 = Se conocen lados B y C. Y se conoce angulo a."<< endl;
        cin >> Op2;
        
        if(Op2 == 1)
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
        
        if (Op2 == 2)
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
        
        if (Op2 == 3)
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
    }
    
    if (Op == 3)
    {
        cout << "Seleccione la opcion segun los datos conocidos del Triangulo : \n1 = Se conocen lado A. Y se conoce angulos b y c. \n2 = Se conocen lado B. Y se conoce angulos a y c \n 3 = Se conocen lado C. Y se conoce angulos b y a "<< endl;
        cin >> Op2;
        
        if(Op2 == 1)
        {
            cout << "Ingrese longiutd de lado A: " << endl;
            cin >> A;
            cout << "Ingrese angulo b: " << endl;
            cin >> b;
            cout << "Ingrese angulo c: " << endl;
            cin >> c;
            
            At = ((A*A) * sin (b) * sin(c)) / (2 * sin (180 - b -c));
            
            cout << "\n El area del triangulo es: " << At << endl;
        }
        
        if  (Op2 == 2)
        {
            cout << "Ingrese longiutd de lado B: " << endl;
            cin >> B;
            cout << "Ingrese angulo a: " << endl;
            cin >> a;
            cout << "Ingrese angulo c: " << endl;
            cin >> c;
            
            At = ((B*B) * sin (a) * sin(c)) / (2 * sin (180 - a -c));
            
            cout << "\n El area del triangulo es: " << At << endl;
        }
        
        if(Op2 == 3)
        {
            cout << "Ingrese longiutd de lado C: " << endl;
            cin >> C;
            cout << "Ingrese angulo a: " << endl;
            cin >> a;
            cout << "Ingrese angulo b: " << endl;
            cin >> b;
            
            At = ((C*C) * sin (a) * sin (b)) / (2 * sin (180 - b -a));
            
            cout << "\n El area del triangulo es: " << At << endl;
        }
    }
    
    system("pause");

    return 0;
}