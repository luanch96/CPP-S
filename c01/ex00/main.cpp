#include "Zombie.hpp"

int main() {
    // Test newZombie (heap allocation)
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();
    delete heapZombie;

    // Test randomChump (stack allocation)
    randomChump("StackZombie");

    return 0;
} 