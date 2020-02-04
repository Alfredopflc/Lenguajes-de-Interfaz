#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    float B, H, A;
    
        cout << "Ingresar Base del Triangulo : "<< endl;
        cin >> B;
        cout << "Ingresar Altura del Triangulo : "<< endl;
        cin >> H;
        
        A = (B * H) / 2;
        
        cout << "\n El Area del Triangulo es: " << A << endl;
        
    system("pause");

    return 0;
}
