#include "Harl.hpp"

int main() {
    Harl harl;
    
    // Probar todos los niveles de queja
    std::cout << "=== DEBUG level ===" << std::endl;
    harl.complain("DEBUG");
    
    std::cout << "\n=== INFO level ===" << std::endl;
    harl.complain("INFO");
    
    std::cout << "\n=== WARNING level ===" << std::endl;
    harl.complain("WARNING");
    
    std::cout << "\n=== ERROR level ===" << std::endl;
    harl.complain("ERROR");
    
    return 0;
}
