#include "../include/pizza_store_nvi.h"

void PizzaStoreNVI::MakePizza() {
    MakeDough_();
    PutTopping_();
    BakePizza_();
}

void DeliciousPizzaStoreNVI::MakeDough_() {
    std::cout << "Make delicious dough!" << std::endl;
}

void DeliciousPizzaStoreNVI::PutTopping_() {
    std::cout << "Put delicious topping!" << std::endl;
}

void DeliciousPizzaStoreNVI::BakePizza_() {
    std::cout << "Bake pizza in an expensive oven!" << std::endl;
}

void PoorPizzaStoreNVI::MakeDough_() {
    std::cout << "Make poor dough!" << std::endl;
}

void PoorPizzaStoreNVI::PutTopping_() {
    std::cout << "Put poor topping!" << std::endl;
}

void PoorPizzaStoreNVI::BakePizza_() {
    std::cout << "Bake pizza in a cheap oven!" << std::endl;
}
