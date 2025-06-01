#include "../include/pizza_store_crtp.h"

int main() {
    DeliciousPizzaStoreCRTP deliciousPizzaStore;
    PoorPizzaStoreCRTP poorPizzaStore;

    deliciousPizzaStore.MakePizza();
    std::cout << "----------------------------" << std::endl;
    poorPizzaStore.MakePizza();
}
