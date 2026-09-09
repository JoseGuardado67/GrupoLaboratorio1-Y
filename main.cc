    #include <iostream>
    
    int main() {


        std::cout << "Seleccione una opcion:" << std::endl;
        std::cout << "1. Consultar Calorias" << std::endl;
        std::cout << "2. Agregar Calorias 2" << std::endl;
        std::cout << "3. Quemar Calorias 3" << std::endl;
        std::cout << "4. Salir 4" << std::endl;
        std::cout << "Ingrese el número de la opcion deseada: ";
        if (int opcion; std::cin >> opcion) {
            switch (opcion) {
                case 1:
                    std::cout << "Consultar Calorias" << std::endl;
                    break;
                case 2:
                    std::cout << "Agregar Calorias" << std::endl;
                    break;
                case 3:
                    std::cout << "Quemar Calorias" << std::endl;
                    break;
                case 4:
                    std::cout << "Salir" << std::endl;
                    break;
                default:
                    std::cout << "Opcion inválida. Por favor, seleccione una opción válida." << std::endl;
                    break;
            }
        } else {
            std::cout << "Entrada invalida. Por favor, ingrese un numero." << std::endl;
        }

        
      
      return 0;
    }