#include <iostream>

int ConsultarCalorias(float calorias);

int main()
{
    int calorias = 2000;
 ConsultarCalorias(calorias);
}


int ConsultarCalorias(float calorias)
{
    std::cout << "Calorias totales: " << calorias;
    return calorias;
}
