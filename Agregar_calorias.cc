#include <iostream>



int AgregarCalorias(int *calorias, int *cant);

int main()
{
     int calorias = 2000;
     int cant= 0;

    std::cout << "Ingrese la cantidad de calorias consumidas: " << std::endl;
    std::cin >> cant;

   AgregarCalorias(&calorias, &cant);

   std:: cout<<"Calorias agregadas: "<< cant << std::endl;
   std:: cout<<"Calorias total: "<<calorias<<std::endl;
}

int AgregarCalorias(int *calorias, int *cant)
{
 *calorias+=*cant;

    return *calorias;
}