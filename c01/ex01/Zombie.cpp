#include "Zombie.hpp"

// Constructor por defecto
Zombie::Zombie() {
    this->name = "unnamed";
    std::cout << "Zombie " << this->name << " created" << std::endl;
}

// Constructor con nombre
Zombie::Zombie(std::string name) : name(name) {
    std::cout << "Zombie " << this->name << " created" << std::endl;
}

// Destructor
Zombie::~Zombie() {
    std::cout << "Zombie " << this->name << " destroyed" << std::endl;
}

// Método para anunciar
void Zombie::announce(void) {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Método para establecer nombre
void Zombie::setName(std::string name) {
    this->name = name;
}

