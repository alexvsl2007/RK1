#include "../include/pizza_store_nvi.h"

int main() {
    DeliciousPizzaStoreNVI deliciousPizzaStore;
    PoorPizzaStoreNVI poorPizzaStore;

    deliciousPizzaStore.MakePizza();
    std::cout << "----------------------------" << std::endl;
    poorPizzaStore.MakePizza();
}
