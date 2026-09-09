    #include <iostream>

int QuemarCalorias(int* calorias, int* caloriasQuemadas);

int main() {
    int calorias = 2000;
    int cant = 0;

    std::cout << "Ingrese las calorias a quemar: ";
    std::cin >> cant;

    QuemarCalorias(&calorias, &cant);
    std::cout << "Calorias quemadas: " << cant << std::endl;
    std::cout << "Calorias restantes: " << calorias << std::endl;

    return 0;
}

int QuemarCalorias(int* calorias, int* cant) {
    *calorias -= *cant;
    return *calorias;
}
    