#include <iostream>

int QuemarCalorias(int *calorias, int *caloriasQuemadas);
int ConsultarCalorias(float calorias);
int AgregarCalorias(int *calorias, int *cant);

int main()
{
    int calorias = 2000;
    int cant = 0;

    std::cout << "Seleccione una opcion:" << std::endl;
    std::cout << "1. Consultar Calorias" << std::endl;
    std::cout << "2. Agregar Calorias" << std::endl;
    std::cout << "3. Quemar Calorias " << std::endl;
    std::cout << "4. Salir" << std::endl;
    std::cout << "Ingrese el número de la opcion deseada: ";
    if (int opcion; std::cin >> opcion)
    {
        switch (opcion)
        {
        case 1:
            ConsultarCalorias(calorias);
            break;
        case 2:
            std::cout << "Ingrese la cantidad de calorias consumidas: ";
            std::cin >> cant;

            if (cant < 0 || cant == 0)
            {
                std::cout << std::endl
                          << "ERROR INGRESE UNA CANTIDAD MAYOR A 0" << std::endl;

                do
                {
                    std::cout << "Ingrese la cantidad de calorias consumidas (mayor a 0): ";
                    std::cin >> cant;
                } while (cant < 0 || cant == 0);
            }

            AgregarCalorias(&calorias, &cant);

            std::cout << "Calorias agregadas con exito." << std::endl;
            break;
        case 3:

            std::cout << "Ingrese las calorias a quemar: ";
            std::cin >> cant;
            if (cant < 0)
            {
                std::cout << "Cantidad de calorias a quemar no puede ser negativa." << std::endl;
                do
                {
                    std::cout << "Ingrese nuevamente las calorias a quemar: ";
                    std::cin >> cant;
                } while (cant < 0);
                std::cout << "Cantidad de calorias a quemar aceptada: " << cant << std::endl;
                break;
            }

            QuemarCalorias(&calorias, &cant);
            std::cout << "Calorias quemadas: " << cant << std::endl;

            break;
        case 4:
            std::cout << "Salir" << std::endl;
            break;
        default:
            std::cout << "Opcion inválida. Por favor, seleccione una opcion valida." << std::endl;
            break;
        }
    }
    else
    {
        std::cout << "Entrada invalida. Por favor, ingrese un numero." << std::endl;
    }

    return 0;
}

int QuemarCalorias(int *calorias, int *cant)
{
    *calorias -= *cant;
    return *calorias;
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
