#include <iostream>

int ConsultarCalorias(float calorias);
int AgregarCalorias(int *calorias, int *cant);

int main()
{
    int calorias = 2000;
    int cant = 0;

    std::cout << "Ingrese la cantidad de calorias consumidas: ";
    std::cin >> cant;

    if (cant < 0 || cant == 0)
    {
        std::cout <<std::endl<< "ERROR INGRESE UNA CANTIDAD MAYOR A 0" << std::endl;

        do
        {
            std::cout << "Ingrese la cantidad de calorias consumidas (mayor a 0): ";
            std::cin >> cant;
        } while (cant < 0 || cant == 0);
    }

    AgregarCalorias(&calorias, &cant);

    std::cout << "Calorias agregadas con exito." << std::endl;

    ConsultarCalorias(calorias);
}

int AgregarCalorias(int *calorias, int *cant)
{
    *calorias += *cant;

    return *calorias;
}

int ConsultarCalorias(float calorias)
{
    std::cout << "Calorias totales: " << calorias;
    return calorias;
}
