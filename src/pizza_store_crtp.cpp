#include "../include/pizza_store_crtp.h"

void DeliciousPizzaStoreCRTP::MakeDough_() {
    std::cout << "Make delicious dough!" << std::endl;
}

void DeliciousPizzaStoreCRTP::PutTopping_() {
    std::cout << "Put delicious topping!" << std::endl;
}

void DeliciousPizzaStoreCRTP::BakePizza_() {
    std::cout << "Bake pizza in an expensive oven!" << std::endl;
}

void PoorPizzaStoreCRTP::MakeDough_() {
    std::cout << "Make poor dough!" << std::endl;
}

void PoorPizzaStoreCRTP::PutTopping_() {
    std::cout << "Put poor topping!" << std::endl;
}

void PoorPizzaStoreCRTP::BakePizza_() {
    std::cout << "Bake pizza in a cheap oven!" << std::endl;
}
