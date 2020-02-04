#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    float A, H;
    
        cout << "Ingresar Hipotenusa de Triangulo Rectangulo Isosceles :  "<< endl;
        cin >> H;
        
        A = sqrt ( (H * H) / 2 );
        
        cout << "\n La longitud del cateto del Triangulo es: " << A << endl;
        
    system("pause");

    return 0;
}
